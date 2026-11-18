// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FRenderData @ 1488ae690

FRenderData * __thiscall
FCanvasTileRendererItem::FRenderData::FRenderData
          (FRenderData *this,Type param_1,FMaterialRenderProxy *param_2,FTransformEntry *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  this->MaterialRenderProxy = param_2;
  dVar1 = (param_3->Matrix).M[0][1];
  (this->Transform).Matrix.M[0][0] = (param_3->Matrix).M[0][0];
  (this->Transform).Matrix.M[0][1] = dVar1;
  dVar1 = (param_3->Matrix).M[0][3];
  (this->Transform).Matrix.M[0][2] = (param_3->Matrix).M[0][2];
  (this->Transform).Matrix.M[0][3] = dVar1;
  dVar1 = (param_3->Matrix).M[1][1];
  (this->Transform).Matrix.M[1][0] = (param_3->Matrix).M[1][0];
  (this->Transform).Matrix.M[1][1] = dVar1;
  dVar1 = (param_3->Matrix).M[1][3];
  (this->Transform).Matrix.M[1][2] = (param_3->Matrix).M[1][2];
  (this->Transform).Matrix.M[1][3] = dVar1;
  dVar1 = (param_3->Matrix).M[2][1];
  (this->Transform).Matrix.M[2][0] = (param_3->Matrix).M[2][0];
  (this->Transform).Matrix.M[2][1] = dVar1;
  dVar1 = (param_3->Matrix).M[2][3];
  (this->Transform).Matrix.M[2][2] = (param_3->Matrix).M[2][2];
  (this->Transform).Matrix.M[2][3] = dVar1;
  dVar1 = (param_3->Matrix).M[3][1];
  (this->Transform).Matrix.M[3][0] = (param_3->Matrix).M[3][0];
  (this->Transform).Matrix.M[3][1] = dVar1;
  dVar1 = (param_3->Matrix).M[3][3];
  (this->Transform).Matrix.M[3][2] = (param_3->Matrix).M[3][2];
  (this->Transform).Matrix.M[3][3] = dVar1;
  uVar3 = *(undefined4 *)&param_3->field_0x84;
  uVar2 = *(undefined8 *)&param_3->field_0x88;
  (this->Transform).MatrixCRC = param_3->MatrixCRC;
  *(undefined4 *)&(this->Transform).field_0x84 = uVar3;
  *(undefined8 *)&(this->Transform).field_0x88 = uVar2;
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  (this->IndexBuffer).b32Bit = true;
  (this->IndexBuffer)._padding_ = (longlong)&___7FRawIndexBuffer16or32__6B_;
  (this->IndexBuffer).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexBuffer).Indices.ArrayNum = 0;
  (this->IndexBuffer).Indices.ArrayMax = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)&this->VertexFactory,param_1,"FTileVertexFactory");
  (this->VertexFactory)._padding_ = (longlong)&___7FTileVertexFactory_FCanvasTileRendererItem__6B_;
  (this->VertexFactory).VertexBuffers = &this->StaticMeshVertexBuffers;
  (this->Tiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tiles).ArrayNum = 0;
  (this->Tiles).ArrayMax = 0;
  return this;
}

// ~FRenderData @ 1488b2120

void __thiscall FCanvasTileRendererItem::FRenderData::~FRenderData(FRenderData *this)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->StaticMeshVertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  (**(code **)((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))
            (&this->StaticMeshVertexBuffers);
  (**(code **)((this->StaticMeshVertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  pFVar1 = (this->Tiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)&this->VertexFactory);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer);
  pFVar1 = (this->IndexBuffer).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  return;
}

// ~FRenderData @ 1488b2210

void __thiscall FCanvasTriangleRendererItem::FRenderData::~FRenderData(FRenderData *this)

{
  FScriptContainerElement *pFVar1;
  
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->StaticMeshVertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  (**(code **)((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))
            (&this->StaticMeshVertexBuffers);
  (**(code **)((this->StaticMeshVertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)&this->VertexFactory);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->StaticMeshVertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer);
  pFVar1 = (this->IndexBuffer).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  return;
}

// AllocTileMeshBatch @ 1488b9620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMeshBatch * __thiscall
FCanvasTileRendererItem::FRenderData::AllocTileMeshBatch
          (FRenderData *this,FCanvasRenderContext *param_1,FHitProxyId param_2)

{
  FMaterialRenderProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FMeshBatchElement> FVar4;
  FMeshBatch *pFVar5;
  ForElementType<FMeshBatchElement> FVar6;
  
  FVar4 = (ForElementType<FMeshBatchElement>)FCanvasRenderContext::Alloc<FMeshBatch>(param_1);
  *(FTileVertexFactory **)((longlong)FVar4 + 0xa8) = &this->VertexFactory;
  pFVar1 = this->MaterialRenderProxy;
  *(uint *)((longlong)FVar4 + 0xd4) = *(uint *)((longlong)FVar4 + 0xd4) & 0xffffe47e;
  *(uint *)((longlong)FVar4 + 0xd4) = *(uint *)((longlong)FVar4 + 0xd4) | 0x400;
  ((FHitProxyId *)((longlong)FVar4 + 0xc0))->Index = param_2.Index;
  *(FMaterialRenderProxy **)((longlong)FVar4 + 0xb0) = pFVar1;
  if (*(int *)((longlong)FVar4 + 0xa0) < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMeshBatch *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar6 = FVar4;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar4 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar6 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar4 + 0x98);
  }
  *(FRawIndexBuffer16or32 **)((longlong)FVar6 + 0x18) = &this->IndexBuffer;
  *(undefined8 *)((longlong)FVar6 + 0x58) = 0;
  *(undefined4 *)((longlong)FVar6 + 0x68) = 0;
  *(int *)((longlong)FVar6 + 0x6c) = (this->Tiles).ArrayNum * 4 + -1;
  *(TGlobalResource<FIdentityPrimitiveUniformBuffer,1> **)((longlong)FVar6 + 8) =
       &GIdentityPrimitiveUniformBuffer;
  return (FMeshBatch *)FVar4;
}

// AllocTriangleMeshBatch @ 1488b9710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMeshBatch * __thiscall
FCanvasTriangleRendererItem::FRenderData::AllocTriangleMeshBatch
          (FRenderData *this,FCanvasRenderContext *param_1,FHitProxyId param_2)

{
  int iVar1;
  FMaterialRenderProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FMeshBatchElement> FVar5;
  FMeshBatch *pFVar6;
  ForElementType<FMeshBatchElement> FVar7;
  
  FVar5 = (ForElementType<FMeshBatchElement>)FCanvasRenderContext::Alloc<FMeshBatch>(param_1);
  *(FTriangleVertexFactory **)((longlong)FVar5 + 0xa8) = &this->VertexFactory;
  pFVar2 = this->MaterialRenderProxy;
  *(uint *)((longlong)FVar5 + 0xd4) = *(uint *)((longlong)FVar5 + 0xd4) & 0xffffe47e;
  *(uint *)((longlong)FVar5 + 0xd4) = *(uint *)((longlong)FVar5 + 0xd4) | 0x402;
  ((FHitProxyId *)((longlong)FVar5 + 0xc0))->Index = param_2.Index;
  *(FMaterialRenderProxy **)((longlong)FVar5 + 0xb0) = pFVar2;
  if (*(int *)((longlong)FVar5 + 0xa0) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMeshBatch *)(*pcVar3)();
      return pFVar6;
    }
  }
  FVar7 = FVar5;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar5 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar7 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar5 + 0x98);
  }
  *(FRawIndexBuffer16or32 **)((longlong)FVar7 + 0x18) = &this->IndexBuffer;
  *(undefined8 *)((longlong)FVar7 + 0x58) = 0;
  *(undefined4 *)((longlong)FVar7 + 0x68) = 0;
  iVar1 = (this->Triangles).ArrayNum;
  *(TGlobalResource<FIdentityPrimitiveUniformBuffer,1> **)((longlong)FVar7 + 8) =
       &GIdentityPrimitiveUniformBuffer;
  *(int *)((longlong)FVar7 + 0x6c) = iVar1 * 3 + -1;
  return (FMeshBatch *)FVar5;
}

// GetNumIndices @ 1488c3690

uint __thiscall FCanvasTileRendererItem::FRenderData::GetNumIndices(FRenderData *this)

{
  return (this->Tiles).ArrayNum * 6;
}

// GetNumIndices @ 1488c36b0

uint __thiscall FCanvasTriangleRendererItem::FRenderData::GetNumIndices(FRenderData *this)

{
  return (this->Triangles).ArrayNum * 3;
}

// GetNumVertices @ 1488c36c0

uint __thiscall FCanvasTileRendererItem::FRenderData::GetNumVertices(FRenderData *this)

{
  return (this->Tiles).ArrayNum << 2;
}

// GetNumVertices @ 1488c36d0

uint __thiscall FCanvasTriangleRendererItem::FRenderData::GetNumVertices(FRenderData *this)

{
  return (this->Triangles).ArrayNum * 3;
}

// InitTileMesh @ 1488ca100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCanvasTileRendererItem::FRenderData::InitTileMesh
          (FRenderData *this,FRHICommandListBase *param_1,FSceneView *param_2)

{
  uchar *puVar1;
  ushort *puVar2;
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *this_00;
  TStaticMeshVertexTangentDatum<FPackedNormal> *this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uchar *puVar9;
  FStaticMeshVertexDataInterface FVar10;
  code *pcVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  FColorVertexBuffer *pFVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  ushort local_res8 [4];
  FRHICommandListBase *local_res10;
  ushort local_res20 [4];
  ushort local_118;
  ushort local_116;
  ushort local_114;
  ushort local_112;
  ushort local_110;
  ushort local_10e;
  uint local_10c;
  longlong local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  FScriptContainerElement *local_e0;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_88 [6];
  
  iVar22 = (this->Tiles).ArrayNum;
  uVar19 = iVar22 * 4;
  local_res10 = param_1;
  FPositionVertexBuffer::Init(&(this->StaticMeshVertexBuffers).PositionVertexBuffer,uVar19,true);
  FStaticMeshVertexBuffer::Init
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,uVar19,1,true);
  FColorVertexBuffer::Init(&(this->StaticMeshVertexBuffers).ColorVertexBuffer,uVar19,true);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&(this->IndexBuffer).Indices,iVar22 * 6,Default);
  (this->IndexBuffer).b32Bit = 0xffff < uVar19;
  local_10c = 0;
  if (0 < (this->Tiles).ArrayNum) {
    local_108 = 0;
    do {
      uVar19 = local_10c;
      uVar14 = 0;
      if ((int)local_10c < (this->Tiles).ArrayNum) {
        uVar14 = ~local_10c >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_e0 = (this->Tiles).AllocatorInstance.Data;
      uVar14 = uVar19 * 4;
      uVar23 = (ulonglong)uVar14;
      uVar19 = uVar19 * 6;
      uVar20 = 0;
      if ((int)uVar19 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar19 * 4) =
           uVar14;
      uVar20 = 0;
      if ((int)(uVar19 + 1) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar20 = uVar19 + 2;
      uVar26 = uVar14 + 1;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar19 * 4 + 4)
           = uVar26;
      uVar15 = 0;
      if ((int)uVar20 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar24 = uVar14 + 2;
      uVar15 = uVar19 + 3;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar20 * 4) =
           uVar24;
      uVar20 = 0;
      if ((int)uVar15 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar20 = ~uVar15 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar20 = uVar19 + 4;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) =
           uVar24;
      uVar15 = 0;
      if ((int)uVar20 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar19 = uVar19 + 5;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar20 * 4) =
           uVar26;
      uVar20 = 0;
      if ((int)uVar19 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar20 = uVar14 + 3;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar19 * 4) =
           uVar20;
      fVar3 = *(float *)(local_e0 + local_108);
      fVar4 = *(float *)(local_e0 + local_108 + 4);
      fVar5 = *(float *)(local_e0 + local_108 + 0x10);
      fVar6 = *(float *)(local_e0 + local_108 + 0x14);
      fVar7 = *(float *)(local_e0 + local_108 + 0xc);
      fVar8 = *(float *)(local_e0 + local_108 + 8);
      fVar27 = *(float *)(local_e0 + local_108 + 0x1c);
      fVar28 = *(float *)(local_e0 + local_108 + 0x18) + fVar5;
      puVar9 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
      uVar17 = (ulonglong)(uVar14 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
      *(float *)(puVar9 + uVar17) = fVar3 + fVar8;
      *(float *)(puVar9 + uVar17 + 4) = fVar4;
      puVar9 = puVar9 + uVar17 + 8;
      puVar9[0] = '\0';
      puVar9[1] = '\0';
      puVar9[2] = '\0';
      puVar9[3] = '\0';
      uVar17 = (ulonglong)(uVar26 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
      puVar9 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
      *(float *)(puVar9 + uVar17) = fVar3;
      *(float *)(puVar9 + uVar17 + 4) = fVar4;
      puVar9 = puVar9 + uVar17 + 8;
      puVar9[0] = '\0';
      puVar9[1] = '\0';
      puVar9[2] = '\0';
      puVar9[3] = '\0';
      uVar17 = (ulonglong)(uVar24 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
      puVar9 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
      *(float *)(puVar9 + uVar17) = fVar3 + fVar8;
      *(float *)(puVar9 + uVar17 + 4) = fVar7 + fVar4;
      puVar9 = puVar9 + uVar17 + 8;
      puVar9[0] = '\0';
      puVar9[1] = '\0';
      puVar9[2] = '\0';
      puVar9[3] = '\0';
      uVar17 = (ulonglong)(uVar20 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
      puVar9 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
      *(float *)(puVar9 + uVar17) = fVar3;
      *(float *)(puVar9 + uVar17 + 4) = fVar7 + fVar4;
      puVar9 = puVar9 + uVar17 + 8;
      puVar9[0] = '\0';
      puVar9[1] = '\0';
      puVar9[2] = '\0';
      puVar9[3] = '\0';
      puVar9 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar18 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords * uVar23;
      FVar10 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      local_100 = fVar28;
      fStack_fc = fVar6;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar9 + lVar18 * 4);
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar2 + 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_res8[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res8,fVar28);
        *puVar2 = local_res8[0];
        local_res20[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res20,fVar6);
        puVar2[1] = local_res20[0];
      }
      else {
        puVar1 = puVar9 + lVar18 * 8;
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar1 + 8) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(ulonglong *)puVar1 = CONCAT44(fStack_fc,local_100);
      }
      puVar9 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar18 = (ulonglong)(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)uVar26;
      FVar10 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      local_f8 = fVar5;
      fStack_f4 = fVar6;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar9 + lVar18 * 4);
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar2 + 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_118 = 0;
        FGenericPlatformMath::StoreHalf(&local_118,fVar5);
        *puVar2 = local_118;
        local_116 = 0;
        FGenericPlatformMath::StoreHalf(&local_116,fVar6);
        puVar2[1] = local_116;
      }
      else {
        puVar1 = puVar9 + lVar18 * 8;
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar1 + 8) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(ulonglong *)puVar1 = CONCAT44(fStack_f4,local_f8);
      }
      fVar27 = fVar27 + fVar6;
      puVar9 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar18 = (ulonglong)(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)uVar24;
      FVar10 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      local_f0 = fVar28;
      fStack_ec = fVar27;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar9 + lVar18 * 4);
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar2 + 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_114 = 0;
        FGenericPlatformMath::StoreHalf(&local_114,fVar28);
        *puVar2 = local_114;
        local_112 = 0;
        FGenericPlatformMath::StoreHalf(&local_112,fVar27);
        puVar2[1] = local_112;
      }
      else {
        puVar1 = puVar9 + lVar18 * 8;
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar1 + 8) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(ulonglong *)puVar1 = CONCAT44(fStack_ec,local_f0);
      }
      puVar9 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar18 = (ulonglong)(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)uVar20;
      FVar10 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      local_e8 = fVar5;
      fStack_e4 = fVar27;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar2 = (ushort *)(puVar9 + lVar18 * 4);
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar2 + 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_110 = 0;
        FGenericPlatformMath::StoreHalf(&local_110,fVar5);
        *puVar2 = local_110;
        local_10e = 0;
        FGenericPlatformMath::StoreHalf(&local_10e,fVar27);
        puVar2[1] = local_10e;
      }
      else {
        puVar1 = puVar9 + lVar18 * 8;
        lVar18 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar18 < puVar1 + 8) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((puVar1 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(ulonglong *)puVar1 = CONCAT44(fStack_e4,local_e8);
      }
      pFVar12 = local_e0;
      lVar18 = local_108;
      lVar25 = 4;
      do {
        puVar9 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
        iVar22 = (int)uVar23;
        FVar10 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsData;
        if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis ==
            false) {
          this_01 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar9 + uVar23 * 8);
          lVar16 = (**(code **)((longlong)FVar10 + 0x50))();
          if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar9 + lVar16) < this_01 + 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x145,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((this_01 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                         (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x146,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_a8._0_8_ = 0;
          local_a8._s_0.Z = 1.0;
          local_98._s_0.X = 0.0;
          local_98._4_8_ = 0x3f800000;
          local_88[0]._0_8_ = 0x3f800000;
          local_88[0]._s_0.Z = 0.0;
          TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                    (this_01,(TVector<float> *)&local_88[0]._s_0,(TVector<float> *)&local_98._s_0,
                     (TVector<float> *)&local_a8._s_0);
        }
        else {
          this_00 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar9 + uVar23 * 0x10);
          lVar16 = (**(code **)((longlong)FVar10 + 0x50))();
          if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar9 + lVar16) < this_00 + 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x13d,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((this_00 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                         (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x13e,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_d8._0_8_ = 0;
          local_d8._s_0.Z = 1.0;
          local_c8._s_0.X = 0.0;
          local_c8._4_8_ = 0x3f800000;
          local_b8._0_8_ = 0x3f800000;
          local_b8._s_0.Z = 0.0;
          TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                    (this_00,(TVector<float> *)&local_b8._s_0,(TVector<float> *)&local_c8._s_0,
                     (TVector<float> *)&local_d8._s_0);
        }
        uVar23 = (ulonglong)(iVar22 + 1);
        *(undefined4 *)
         ((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data +
         iVar22 * (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride) =
             *(undefined4 *)(pFVar12 + lVar18 + 0x24);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      local_108 = lVar18 + 0x28;
      local_10c = local_10c + 1;
      param_1 = local_res10;
    } while ((int)local_10c < (this->Tiles).ArrayNum);
  }
  pFVar21 = &(this->StaticMeshVertexBuffers).ColorVertexBuffer;
  (**(code **)((this->StaticMeshVertexBuffers).PositionVertexBuffer._padding_ + 0x18))
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer,param_1);
  (**(code **)((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x18))
            (&this->StaticMeshVertexBuffers,param_1);
  (**(code **)(pFVar21->_padding_ + 0x18))(pFVar21,param_1);
  (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001488cace0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VertexFactory)._padding_ + 0x18))(&this->VertexFactory,param_1);
  return;
}

// InitTriangleMesh @ 1488cacf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCanvasTriangleRendererItem::FRenderData::InitTriangleMesh
          (FRenderData *this,FRHICommandListBase *param_1,FSceneView *param_2)

{
  TStaticMeshVertexTangentDatum<FPackedNormal> *pTVar1;
  uchar *puVar2;
  ushort *puVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  uchar *puVar6;
  FStaticMeshVertexDataInterface FVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  TStaticMeshVertexTangentDatum<FPackedRGBA16N> *pTVar16;
  uint uVar17;
  uint uVar19;
  FColorVertexBuffer *pFVar21;
  float fVar22;
  float fVar23;
  ushort local_res8 [4];
  FRHICommandListBase *local_res10;
  ushort local_res20 [4];
  ushort local_1c8;
  ushort local_1c6;
  ushort local_1c4;
  ushort local_1c2;
  uint local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  float local_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  TVector<float>_u_0 local_178;
  TVector<float>_u_0 local_168;
  TVector<float>_u_0 local_158;
  TVector<float>_u_0 local_148;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  TVector<float>_u_0 local_118;
  TVector<float>_u_0 local_108;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78;
  TVector<float>_u_0 local_68 [4];
  ulonglong uVar18;
  ulonglong uVar20;
  
  uVar9 = (this->Triangles).ArrayNum * 3;
  local_res10 = param_1;
  FPositionVertexBuffer::Init(&(this->StaticMeshVertexBuffers).PositionVertexBuffer,uVar9,true);
  FStaticMeshVertexBuffer::Init
            (&(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer,uVar9,1,true);
  FColorVertexBuffer::Init(&(this->StaticMeshVertexBuffers).ColorVertexBuffer,uVar9,true);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&(this->IndexBuffer).Indices,uVar9,Default);
  (this->IndexBuffer).b32Bit = 0xffff < uVar9;
  local_1c0 = 0;
  if (0 < (this->Triangles).ArrayNum) {
    local_1a0 = 0;
    do {
      lVar13 = local_1a0;
      uVar10 = local_1c0;
      uVar9 = local_1c0 * 3;
      uVar12 = 0;
      if ((int)uVar9 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      local_1bc = uVar9;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = uVar9 + 1;
      uVar18 = (ulonglong)uVar17;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar9 * 4) =
           uVar9;
      uVar12 = 0;
      if ((int)uVar17 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      local_1b4 = uVar17;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = uVar9 + 2;
      uVar20 = (ulonglong)uVar19;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) =
           uVar17;
      uVar12 = 0;
      if ((int)uVar19 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + (longlong)(int)uVar19 * 4) =
           uVar19;
      uVar12 = 0;
      if ((int)uVar10 < (this->Triangles).ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->Triangles).AllocatorInstance.Data;
      uVar15 = (ulonglong)(uVar9 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
      puVar6 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
      dVar4 = *(double *)(pFVar5 + lVar13 + 0x38);
      *(float *)(puVar6 + uVar15) = (float)*(double *)(pFVar5 + lVar13 + 0x30);
      *(float *)(puVar6 + uVar15 + 4) = (float)dVar4;
      puVar6 = puVar6 + uVar15 + 8;
      puVar6[0] = '\0';
      puVar6[1] = '\0';
      puVar6[2] = '\0';
      puVar6[3] = '\0';
      uVar15 = (ulonglong)(uVar17 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
      dVar4 = *(double *)(pFVar5 + lVar13 + 8);
      puVar6 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
      *(float *)(puVar6 + uVar15) = (float)*(double *)(pFVar5 + lVar13);
      *(float *)(puVar6 + uVar15 + 4) = (float)dVar4;
      puVar6 = puVar6 + uVar15 + 8;
      puVar6[0] = '\0';
      puVar6[1] = '\0';
      puVar6[2] = '\0';
      puVar6[3] = '\0';
      uVar15 = (ulonglong)(uVar19 * (this->StaticMeshVertexBuffers).PositionVertexBuffer.Stride);
      dVar4 = *(double *)(pFVar5 + lVar13 + 0x68);
      puVar6 = (this->StaticMeshVertexBuffers).PositionVertexBuffer.Data;
      *(float *)(puVar6 + uVar15) = (float)*(double *)(pFVar5 + lVar13 + 0x60);
      *(float *)(puVar6 + uVar15 + 4) = (float)dVar4;
      puVar6 = puVar6 + uVar15 + 8;
      puVar6[0] = '\0';
      puVar6[1] = '\0';
      puVar6[2] = '\0';
      puVar6[3] = '\0';
      puVar6 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
      FVar7 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsData;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis ==
          false) {
        pTVar1 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar6 + (ulonglong)uVar9 * 8);
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar6 + lVar13) < pTVar1 + 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x145,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar1 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                      (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x146,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_148._0_8_ = 0;
        local_148._s_0.Z = 1.0;
        local_138._s_0.X = 0.0;
        local_138._4_8_ = 0x3f800000;
        local_128._0_8_ = 0x3f800000;
        local_128._s_0.Z = 0.0;
        TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                  (pTVar1,(TVector<float> *)&local_128._s_0,(TVector<float> *)&local_138._s_0,
                   (TVector<float> *)&local_148._s_0);
      }
      else {
        pTVar16 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                  (puVar6 + (ulonglong)uVar9 * 0x10);
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar6 + lVar13) < pTVar16 + 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13d,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar16 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                       (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13e,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_178._0_8_ = 0;
        local_178._s_0.Z = 1.0;
        local_168._s_0.X = 0.0;
        local_168._4_8_ = 0x3f800000;
        local_158._0_8_ = 0x3f800000;
        local_158._s_0.Z = 0.0;
        TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                  (pTVar16,(TVector<float> *)&local_158._s_0,(TVector<float> *)&local_168._s_0,
                   (TVector<float> *)&local_178._s_0);
      }
      puVar6 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
      FVar7 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsData;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis ==
          false) {
        pTVar1 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar6 + uVar18 * 8);
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar6 + lVar13) < pTVar1 + 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x145,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar1 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                      (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x146,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_e8._0_8_ = 0;
        local_e8._s_0.Z = 1.0;
        local_d8._s_0.X = 0.0;
        local_d8._4_8_ = 0x3f800000;
        local_c8._0_8_ = 0x3f800000;
        local_c8._s_0.Z = 0.0;
        TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                  (pTVar1,(TVector<float> *)&local_c8._s_0,(TVector<float> *)&local_d8._s_0,
                   (TVector<float> *)&local_e8._s_0);
      }
      else {
        pTVar16 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar6 + uVar18 * 0x10);
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar6 + lVar13) < pTVar16 + 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13d,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar16 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                       (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13e,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_118._0_8_ = 0;
        local_118._s_0.Z = 1.0;
        local_108._s_0.X = 0.0;
        local_108._4_8_ = 0x3f800000;
        local_f8._0_8_ = 0x3f800000;
        local_f8._s_0.Z = 0.0;
        TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                  (pTVar16,(TVector<float> *)&local_f8._s_0,(TVector<float> *)&local_108._s_0,
                   (TVector<float> *)&local_118._s_0);
      }
      puVar6 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr;
      FVar7 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsData;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis ==
          false) {
        pTVar1 = (TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar6 + uVar20 * 8);
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedNormal> *)(puVar6 + lVar13) < pTVar1 + 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x145,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar1 < (TStaticMeshVertexTangentDatum<FPackedNormal> *)
                      (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x146,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_88._0_8_ = 0;
        local_88._s_0.Z = 1.0;
        local_78._s_0.X = 0.0;
        local_78._4_8_ = 0x3f800000;
        local_68[0]._0_8_ = 0x3f800000;
        local_68[0]._s_0.Z = 0.0;
        TStaticMeshVertexTangentDatum<FPackedNormal>::SetTangents
                  (pTVar1,(TVector<float> *)&local_68[0]._s_0,(TVector<float> *)&local_78._s_0,
                   (TVector<float> *)&local_88._s_0);
      }
      else {
        pTVar16 = (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar6 + uVar20 * 0x10);
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if (((TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)(puVar6 + lVar13) < pTVar16 + 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13d,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((pTVar16 < (TStaticMeshVertexTangentDatum<FPackedRGBA16N> *)
                       (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x13e,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_b8._0_8_ = 0;
        local_b8._s_0.Z = 1.0;
        local_a8._s_0.X = 0.0;
        local_a8._4_8_ = 0x3f800000;
        local_98._0_8_ = 0x3f800000;
        local_98._s_0.Z = 0.0;
        TStaticMeshVertexTangentDatum<FPackedRGBA16N>::SetTangents
                  (pTVar16,(TVector<float> *)&local_98._s_0,(TVector<float> *)&local_a8._s_0,
                   (TVector<float> *)&local_b8._s_0);
      }
      puVar6 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      FVar7 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      fVar22 = (float)*(double *)(pFVar5 + local_1a0 + 0x40);
      fVar23 = (float)*(double *)(pFVar5 + local_1a0 + 0x48);
      lVar13 = (ulonglong)(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)uVar9;
      local_198 = fVar22;
      fStack_194 = fVar23;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar3 = (ushort *)(puVar6 + lVar13 * 4);
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if ((puVar6 + lVar13 < puVar3 + 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar3 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_res8[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res8,fVar22);
        *puVar3 = local_res8[0];
        local_res20[0] = 0;
        FGenericPlatformMath::StoreHalf(local_res20,fVar23);
        puVar3[1] = local_res20[0];
      }
      else {
        puVar2 = puVar6 + lVar13 * 8;
        lVar13 = (**(code **)((longlong)FVar7 + 0x50))();
        if ((puVar6 + lVar13 < puVar2 + 8) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(ulonglong *)puVar2 = CONCAT44(fStack_194,local_198);
      }
      lVar13 = local_1a0;
      puVar6 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      FVar7 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      fVar22 = (float)*(double *)(pFVar5 + local_1a0 + 0x10);
      fVar23 = (float)*(double *)(pFVar5 + local_1a0 + 0x18);
      lVar14 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords * uVar18;
      local_190 = fVar22;
      fStack_18c = fVar23;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar3 = (ushort *)(puVar6 + lVar14 * 4);
        lVar14 = (**(code **)((longlong)FVar7 + 0x50))();
        if ((puVar6 + lVar14 < puVar3 + 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar3 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1c8 = 0;
        FGenericPlatformMath::StoreHalf(&local_1c8,fVar22);
        *puVar3 = local_1c8;
        local_1c6 = 0;
        FGenericPlatformMath::StoreHalf(&local_1c6,fVar23);
        puVar3[1] = local_1c6;
      }
      else {
        puVar2 = puVar6 + lVar14 * 8;
        lVar14 = (**(code **)((longlong)FVar7 + 0x50))();
        if ((puVar6 + lVar14 < puVar2 + 8) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(ulonglong *)puVar2 = CONCAT44(fStack_18c,local_190);
      }
      puVar6 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      fVar22 = (float)*(double *)(pFVar5 + lVar13 + 0x70);
      FVar7 = *(this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      fVar23 = (float)*(double *)(pFVar5 + lVar13 + 0x78);
      lVar14 = (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.NumTexCoords * uVar20;
      local_188 = fVar22;
      fStack_184 = fVar23;
      if ((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar3 = (ushort *)(puVar6 + lVar14 * 4);
        lVar14 = (**(code **)((longlong)FVar7 + 0x50))();
        if ((puVar6 + lVar14 < puVar3 + 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar3 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1c4 = 0;
        FGenericPlatformMath::StoreHalf(&local_1c4,fVar22);
        *puVar3 = local_1c4;
        local_1c2 = 0;
        FGenericPlatformMath::StoreHalf(&local_1c2,fVar23);
        puVar3[1] = local_1c2;
      }
      else {
        puVar2 = puVar6 + lVar14 * 8;
        lVar14 = (**(code **)((longlong)FVar7 + 0x50))();
        if ((puVar6 + lVar14 < puVar2 + 8) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar2 < (this->StaticMeshVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(ulonglong *)puVar2 = CONCAT44(fStack_184,local_188);
      }
      FLinearColor::ToFColorSRGB((FLinearColor *)(pFVar5 + lVar13 + 0x50));
      *(undefined4 *)
       ((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data +
       local_1bc * (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride) = local_1b8;
      FLinearColor::ToFColorSRGB((FLinearColor *)(pFVar5 + lVar13 + 0x20));
      *(undefined4 *)
       ((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data +
       local_1b4 * (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride) = local_1b0;
      FLinearColor::ToFColorSRGB((FLinearColor *)(pFVar5 + lVar13 + 0x80));
      local_1c0 = local_1c0 + 1;
      local_1a0 = lVar13 + 0x98;
      *(undefined4 *)
       ((this->StaticMeshVertexBuffers).ColorVertexBuffer.Data +
       uVar19 * (this->StaticMeshVertexBuffers).ColorVertexBuffer.Stride) = local_1a8;
      param_1 = local_res10;
    } while ((int)local_1c0 < (this->Triangles).ArrayNum);
  }
  pFVar21 = &(this->StaticMeshVertexBuffers).ColorVertexBuffer;
  (**(code **)((this->StaticMeshVertexBuffers).PositionVertexBuffer._padding_ + 0x18))
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer,param_1);
  (**(code **)((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x18))
            (&this->StaticMeshVertexBuffers,param_1);
  (**(code **)(pFVar21->_padding_ + 0x18))(pFVar21,param_1);
  (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001488cb9c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VertexFactory)._padding_ + 0x18))(&this->VertexFactory,param_1);
  return;
}

// ReleaseTileMesh @ 1488d6b00

void __thiscall FCanvasTileRendererItem::FRenderData::ReleaseTileMesh(FRenderData *this)

{
  (**(code **)((this->VertexFactory)._padding_ + 0x20))();
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
  (**(code **)((this->StaticMeshVertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  (**(code **)((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))
            (&this->StaticMeshVertexBuffers);
                    /* WARNING: Could not recover jumptable at 0x0001488d6b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->StaticMeshVertexBuffers).ColorVertexBuffer._padding_ + 0x20))();
  return;
}

// ReleaseTriangleMesh @ 1488d6b70

void __thiscall FCanvasTriangleRendererItem::FRenderData::ReleaseTriangleMesh(FRenderData *this)

{
  (**(code **)((this->VertexFactory)._padding_ + 0x20))();
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))();
  (**(code **)((this->StaticMeshVertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->StaticMeshVertexBuffers).PositionVertexBuffer);
  (**(code **)((this->StaticMeshVertexBuffers).StaticMeshVertexBuffer._padding_ + 0x20))
            (&this->StaticMeshVertexBuffers);
                    /* WARNING: Could not recover jumptable at 0x0001488d6bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->StaticMeshVertexBuffers).ColorVertexBuffer._padding_ + 0x20))();
  return;
}

// RenderTiles @ 1488d8490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FCanvasTileRendererItem::FRenderData::RenderTiles
          (FRenderData *this,FCanvasRenderContext *param_1,FMeshPassProcessorRenderState *param_2,
          FSceneView *param_3,bool param_4,bool param_5)

{
  char cVar1;
  FRDGBuilder *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FMaterial *pFVar12;
  undefined8 *puVar13;
  FRDGScope *this_00;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTileRendererItem::FRenderData::RenderTiles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool,bool)_::_2_::FStat_STAT_CanvasDrawTiles>
  FVar15;
  ForElementType<FMeshBatchElement> FVar16;
  IRendererModule *pIVar17;
  ForElementType<FMeshBatchElement> FVar18;
  FName FVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 local_f7 [3];
  int local_f4;
  FColor_u_0 local_f0 [2];
  FName local_e8;
  FName local_e0;
  FName local_d8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_c8;
  char local_b8;
  wchar_t *local_b0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>
  local_a8;
  FName local_88;
  FName local_80;
  void *local_78 [3];
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TileRendering.cpp"
                         ,0xa8,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->Tiles).ArrayNum == 0) {
    return;
  }
  cVar1 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  local_b8 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    pFVar12 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                        (this->MaterialRenderProxy,GMaxRHIFeatureLevel);
    puVar13 = (undefined8 *)(**(code **)(pFVar12->_padding_ + 0x390))(pFVar12,local_78);
    if (*(int *)(puVar13 + 1) == 0) {
      local_b0 = L"";
    }
    else {
      local_b0 = (wchar_t *)*puVar13;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xaf;
      local_58 = 0x54c6cc90;
      uStack_54 = 1;
      ::Desc._padding_._0_4_ = 0x54c6cc90;
      ::Desc._padding_._4_4_ = uStack_5c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u__s;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FCanvasTileRendererItem::FRenderData::RenderTiles'::__l17::<lambda_1>::
             operator()<wchar_t_const_*>'::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_a8._padding_ = 0x150613404;
    pFVar2 = param_1->GraphBuilder;
    local_a8._Myfirst._Val = &::Desc;
    local_c8.State = (FRDGScopeState *)pFVar2;
    local_a8._padding_ = (longlong)&local_b0;
    local_a8._padding_ = (longlong)local_f7;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar2->_padding_,(FRDGScope **)pFVar2);
    ((FState *)&pFVar2->_padding_)->Current = this_00;
    uVar22 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_c8.Scope = this_00;
    if ((3 < uVar22) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar22])(&this_00->Impl);
    FRDGScope_RHI::
    FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>
              ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)pFVar2,&local_a8);
    (this_00->Impl).Impl.TypeIndex = '\x02';
    if (*(bool *)((longlong)&pFVar2->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar2->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar2->_padding_);
    }
    local_b8 = '\x01';
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId178,"CanvasDrawTiles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TileRendering.cpp"
               ,0xb2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId178);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CanvasDrawTiles ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTileRendererItem::FRenderData::RenderTiles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool,bool)_::_2_::FStat_STAT_CanvasDrawTiles>
         )0x0) {
      pFVar14 = ::FName::FName(&local_88,"STAT_CanvasDrawTiles");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CanvasDrawTiles,*pFVar14,
                 L"STAT_CanvasDrawTiles","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_CanvasDrawTiles;
  if (StatPtr_STAT_CanvasDrawTiles ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTileRendererItem::FRenderData::RenderTiles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool,bool)_::_2_::FStat_STAT_CanvasDrawTiles>
       )0x0) {
    pFVar14 = ::FName::FName(&local_80,"STAT_CanvasDrawTiles");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTileRendererItem::FRenderData::RenderTiles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool,bool)_::_2_::FStat_STAT_CanvasDrawTiles>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CanvasDrawTiles,*pFVar14,
                          L"STAT_CanvasDrawTiles","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                          ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar6 = false;
  bVar5 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar10 = false;
  bVar8 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_e8.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TileRendering.cpp"
                   ,0xb3);
        bVar6 = true;
        bVar5 = true;
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar8 = true;
      goto LAB_1488d8839;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar8;
  bVar8 = false;
  local_e0 = local_d8;
  FVar19 = local_d8;
LAB_1488d8839:
  GetRendererModule();
  InitTileMesh(this,(FRHICommandListBase *)param_1->GraphBuilder->_padding_,param_3);
  if (((this->Tiles).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar16 = (ForElementType<FMeshBatchElement>)
           AllocTileMeshBatch(this,param_1,
                              (FHitProxyId)*(int *)((this->Tiles).AllocatorInstance.Data + 0x20));
  if ((*(int *)((longlong)FVar16 + 0xa0) < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar18 = FVar16;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar18 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98);
  }
  if ((*(int *)((longlong)FVar18 + 0x58) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentMeshBatch->Elements[0].FirstIndex == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TileRendering.cpp"
                          ,0xbb,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar21 = 0;
  if (0 < (this->Tiles).ArrayNum) {
    lVar20 = 0;
    local_f4 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar21 < (this->Tiles).ArrayNum) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Tiles).AllocatorInstance.Data;
      if (*(int *)((longlong)FVar16 + 0xc0) != *(int *)(pFVar3 + lVar20 + 0x20)) {
        pIVar17 = GetRendererModule();
        (**(code **)((longlong)*pIVar17 + 0xb8))
                  (pIVar17,param_1,param_2,param_3,FVar16,param_4,(int *)((longlong)FVar16 + 0xc0),
                   param_5);
        FVar16 = (ForElementType<FMeshBatchElement>)
                 AllocTileMeshBatch(this,param_1,(FHitProxyId)*(int *)(pFVar3 + lVar20 + 0x20));
        if ((*(int *)((longlong)FVar16 + 0xa0) < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar18 = FVar16;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar18 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98);
        }
        *(int *)((longlong)FVar18 + 0x58) = local_f4;
      }
      iVar7 = local_f4;
      if ((*(int *)((longlong)FVar16 + 0xa0) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar18 = FVar16;
      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98) !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar18 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98);
      }
      local_f4 = iVar7 + 6;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x28;
      *(int *)((longlong)FVar18 + 0x5c) = *(int *)((longlong)FVar18 + 0x5c) + 2;
      FVar19 = local_e0;
    } while ((int)uVar21 < (this->Tiles).ArrayNum);
  }
  pIVar17 = GetRendererModule();
  (**(code **)((longlong)*pIVar17 + 0xb8))
            (pIVar17,param_1,param_2,param_3,FVar16,param_4,(longlong)FVar16 + 0xc0,param_5);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_b8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_c8);
  }
  return;
}

// RenderTriangles @ 1488d8ce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FCanvasTriangleRendererItem::FRenderData::RenderTriangles
          (FRenderData *this,FCanvasRenderContext *param_1,FMeshPassProcessorRenderState *param_2,
          FSceneView *param_3,bool param_4)

{
  char cVar1;
  FRDGBuilder *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FMaterial *pFVar12;
  undefined8 *puVar13;
  FRDGScope *this_00;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTriangleRendererItem::FRenderData::RenderTriangles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool)_::_2_::FStat_STAT_CanvasDrawTriangles>
  FVar15;
  ForElementType<FMeshBatchElement> FVar16;
  IRendererModule *pIVar17;
  ForElementType<FMeshBatchElement> FVar18;
  FName FVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 local_f7 [3];
  int local_f4;
  FColor_u_0 local_f0 [2];
  FName local_e8;
  FName local_e0;
  FName local_d8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_c8;
  char local_b8;
  wchar_t *local_b0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>
  local_a8;
  FName local_88;
  FName local_80;
  void *local_78 [3];
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TriangleRendering.cpp"
                         ,0x8f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->Triangles).ArrayNum == 0) {
    return;
  }
  cVar1 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  local_b8 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    pFVar12 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                        (this->MaterialRenderProxy,GMaxRHIFeatureLevel);
    puVar13 = (undefined8 *)(**(code **)(pFVar12->_padding_ + 0x390))(pFVar12,local_78);
    if (*(int *)(puVar13 + 1) == 0) {
      local_b0 = L"";
    }
    else {
      local_b0 = (wchar_t *)*puVar13;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x96;
      local_58 = 0x54c6cf80;
      uStack_54 = 1;
      ::Desc._padding_._0_4_ = 0x54c6cf80;
      ::Desc._padding_._4_4_ = uStack_5c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u__s;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FCanvasTriangleRendererItem::FRenderData::RenderTriangles'::__l17::<lambda_1>::
             operator()<wchar_t_const_*>'::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_a8._padding_ = 0x150613404;
    pFVar2 = param_1->GraphBuilder;
    local_a8._Myfirst._Val = &::Desc;
    local_c8.State = (FRDGScopeState *)pFVar2;
    local_a8._padding_ = (longlong)&local_b0;
    local_a8._padding_ = (longlong)local_f7;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar2->_padding_,(FRDGScope **)pFVar2);
    ((FState *)&pFVar2->_padding_)->Current = this_00;
    uVar22 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_c8.Scope = this_00;
    if ((3 < uVar22) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar22])(&this_00->Impl);
    FRDGScope_RHI::
    FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>
              ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)pFVar2,&local_a8);
    (this_00->Impl).Impl.TypeIndex = '\x02';
    if (*(bool *)((longlong)&pFVar2->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar2->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar2->_padding_);
    }
    local_b8 = '\x01';
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId153,"CanvasDrawTriangles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TriangleRendering.cpp"
               ,0x99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId153);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_CanvasDrawTriangles ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTriangleRendererItem::FRenderData::RenderTriangles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool)_::_2_::FStat_STAT_CanvasDrawTriangles>
         )0x0) {
      pFVar14 = ::FName::FName(&local_88,"STAT_CanvasDrawTriangles");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CanvasDrawTriangles,*pFVar14,
                 L"STAT_CanvasDrawTriangles","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_CanvasDrawTriangles;
  if (StatPtr_STAT_CanvasDrawTriangles ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTriangleRendererItem::FRenderData::RenderTriangles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool)_::_2_::FStat_STAT_CanvasDrawTriangles>
       )0x0) {
    pFVar14 = ::FName::FName(&local_80,"STAT_CanvasDrawTriangles");
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FCanvasTriangleRendererItem::FRenderData::RenderTriangles(FCanvasRenderContext_&,FMeshPassProcessorRenderState_&,FSceneView_const_&,bool)_::_2_::FStat_STAT_CanvasDrawTriangles>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CanvasDrawTriangles,*pFVar14,
                          L"STAT_CanvasDrawTriangles","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar6 = false;
  bVar5 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar10 = false;
  bVar8 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_e8.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TriangleRendering.cpp"
                   ,0x9a);
        bVar6 = true;
        bVar5 = true;
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar8 = true;
      goto LAB_1488d9089;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar8;
  bVar8 = false;
  local_e0 = local_d8;
  FVar19 = local_d8;
LAB_1488d9089:
  GetRendererModule();
  InitTriangleMesh(this,(FRHICommandListBase *)param_1->GraphBuilder->_padding_,param_3);
  if (((this->Triangles).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar16 = (ForElementType<FMeshBatchElement>)
           AllocTriangleMeshBatch
                     (this,param_1,
                      (FHitProxyId)*(int *)((this->Triangles).AllocatorInstance.Data + 0x90));
  if ((*(int *)((longlong)FVar16 + 0xa0) < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar18 = FVar16;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar18 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98);
  }
  if ((*(int *)((longlong)FVar18 + 0x58) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentMeshBatch->Elements[0].FirstIndex == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TriangleRendering.cpp"
                          ,0xa3,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar21 = 0;
  if (0 < (this->Triangles).ArrayNum) {
    lVar20 = 0;
    local_f4 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar21 < (this->Triangles).ArrayNum) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Triangles).AllocatorInstance.Data;
      if (*(int *)((longlong)FVar16 + 0xc0) != *(int *)(pFVar3 + lVar20 + 0x90)) {
        pIVar17 = GetRendererModule();
        (**(code **)((longlong)*pIVar17 + 0xb8))
                  (pIVar17,param_1,param_2,param_3,FVar16,param_4,(int *)((longlong)FVar16 + 0xc0),0
                  );
        FVar16 = (ForElementType<FMeshBatchElement>)
                 AllocTriangleMeshBatch(this,param_1,(FHitProxyId)*(int *)(pFVar3 + lVar20 + 0x90));
        if ((*(int *)((longlong)FVar16 + 0xa0) < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar18 = FVar16;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar18 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98);
        }
        *(int *)((longlong)FVar18 + 0x58) = local_f4;
      }
      iVar7 = local_f4;
      if ((*(int *)((longlong)FVar16 + 0xa0) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar18 = FVar16;
      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98) !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar18 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar16 + 0x98);
      }
      local_f4 = iVar7 + 3;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x98;
      *(int *)((longlong)FVar18 + 0x5c) = *(int *)((longlong)FVar18 + 0x5c) + 1;
      FVar19 = local_e0;
    } while ((int)uVar21 < (this->Triangles).ArrayNum);
  }
  pIVar17 = GetRendererModule();
  (**(code **)((longlong)*pIVar17 + 0xb8))
            (pIVar17,param_1,param_2,param_3,FVar16,param_4,(longlong)FVar16 + 0xc0,0);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_b8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_c8);
  }
  return;
}

