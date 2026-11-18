// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FDynamicMeshBuilder @ 147b38fb0

FDynamicMeshBuilder * __thiscall
FDynamicMeshBuilder::FDynamicMeshBuilder
          (FDynamicMeshBuilder *this,Type param_1,uint param_2,uint param_3,bool param_4,
          FDynamicMeshBufferAllocator *param_5)

{
  code *pcVar1;
  bool bVar2;
  FPooledDynamicMeshVertexBuffer *pFVar3;
  FDynamicMeshBuilder *pFVar4;
  FPooledDynamicMeshIndexBuffer *pFVar5;
  FPooledDynamicMeshBufferAllocator *pFVar6;
  FPooledDynamicMeshVertexBuffer *pFVar7;
  
  pFVar6 = &DefaultDynamicMeshBufferAllocator;
  this->FeatureLevel = param_1;
  this->IndexBuffer = (FPooledDynamicMeshIndexBuffer *)0x0;
  this->VertexBuffer = (FPooledDynamicMeshVertexBuffer *)0x0;
  this->OneFrameResources = (FMeshBuilderOneFrameResources *)0x0;
  if (param_5 != (FDynamicMeshBufferAllocator *)0x0) {
    pFVar6 = (FPooledDynamicMeshBufferAllocator *)param_5;
  }
  pFVar3 = ::operator_new(0x110);
  pFVar7 = (FPooledDynamicMeshVertexBuffer *)0x0;
  if (pFVar3 != (FPooledDynamicMeshVertexBuffer *)0x0) {
    pFVar3->_padding_ = (longlong)&___7FDynamicPrimitiveResource__6B_;
    FRenderResource::FRenderResource((FRenderResource *)&pFVar3->_padding_);
    pFVar3->_padding_ =
         (longlong)&FPooledDynamicMeshVertexBuffer::_vftable__for__FDynamicPrimitiveResource__;
    pFVar3->_padding_ = (longlong)&FPooledDynamicMeshVertexBuffer::_vftable__for__FRenderResource__;
    FVertexBuffer::FVertexBuffer(&pFVar3->PositionBuffer);
    FVertexBuffer::FVertexBuffer(&pFVar3->TangentBuffer);
    FVertexBuffer::FVertexBuffer(&pFVar3->TexCoordBuffer);
    FVertexBuffer::FVertexBuffer(&pFVar3->ColorBuffer);
    (pFVar3->TangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->TexCoordBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->ColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->PositionBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Vertices).ArrayNum = 0;
    (pFVar3->Vertices).ArrayMax = 0;
    pFVar3->Use16bitTexCoord = param_4;
    pFVar3->NumTexCoords = param_2;
    pFVar3->LightmapCoordinateIndex = param_3;
    pFVar3->FeatureLevel = param_1;
    pFVar3->DynamicMeshBufferAllocator = (FDynamicMeshBufferAllocator *)pFVar6;
    if ((7 < param_2 - 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumTexCoords > 0 && NumTexCoords <= MAX_STATIC_TEXCOORDS",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
                           ,0x1a0,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDynamicMeshBuilder *)(*pcVar1)();
      return pFVar4;
    }
    pFVar7 = pFVar3;
    if ((pFVar3->NumTexCoords <= pFVar3->LightmapCoordinateIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LightmapCoordinateIndex < NumTexCoords",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
                           ,0x1a1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDynamicMeshBuilder *)(*pcVar1)();
      return pFVar4;
    }
  }
  this->VertexBuffer = pFVar7;
  pFVar5 = ::operator_new(0x48);
  if (pFVar5 == (FPooledDynamicMeshIndexBuffer *)0x0) {
    this->IndexBuffer = (FPooledDynamicMeshIndexBuffer *)0x0;
  }
  else {
    pFVar5->_padding_ = (longlong)&___7FDynamicPrimitiveResource__6B_;
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)&pFVar5->_padding_);
    pFVar5->DynamicMeshBufferAllocator = (FDynamicMeshBufferAllocator *)pFVar6;
    pFVar5->_padding_ =
         (longlong)&FPooledDynamicMeshIndexBuffer::_vftable__for__FDynamicPrimitiveResource__;
    pFVar5->_padding_ = (longlong)&FPooledDynamicMeshIndexBuffer::_vftable__for__FIndexBuffer__;
    (pFVar5->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Indices).ArrayNum = 0;
    (pFVar5->Indices).ArrayMax = 0;
    this->IndexBuffer = pFVar5;
  }
  return this;
}

// ~FDynamicMeshBuilder @ 147b3cc20

void __thiscall FDynamicMeshBuilder::~FDynamicMeshBuilder(FDynamicMeshBuilder *this)

{
  FPooledDynamicMeshVertexBuffer *pFVar1;
  FPooledDynamicMeshIndexBuffer *pFVar2;
  
  pFVar1 = this->VertexBuffer;
  if (pFVar1 != (FPooledDynamicMeshVertexBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(&pFVar1->_padding_,1);
  }
  pFVar2 = this->IndexBuffer;
  if (pFVar2 != (FPooledDynamicMeshIndexBuffer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b3cc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar2->_padding_)(&pFVar2->_padding_,1);
    return;
  }
  return;
}

// AddTriangle @ 147b44360

void __thiscall
FDynamicMeshBuilder::AddTriangle(FDynamicMeshBuilder *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  FPooledDynamicMeshIndexBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_10 [2];
  
  pFVar2 = this->IndexBuffer;
  pFVar3 = (pFVar2->Indices).AllocatorInstance.Data;
  local_18 = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)(pFVar2->Indices).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->Indices).ArrayNum;
  piVar1 = &(pFVar2->Indices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->Indices).AllocatorInstance,piVar1);
  }
  (pFVar2->Indices).ArrayNum = iVar6 + 1;
  *(int *)((pFVar2->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_18;
  pFVar2 = this->IndexBuffer;
  pFVar3 = (pFVar2->Indices).AllocatorInstance.Data;
  local_14 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar3 + (longlong)(pFVar2->Indices).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->Indices).ArrayNum;
  piVar1 = &(pFVar2->Indices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->Indices).AllocatorInstance,piVar1);
  }
  (pFVar2->Indices).ArrayNum = iVar6 + 1;
  *(int *)((pFVar2->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_14;
  pFVar2 = this->IndexBuffer;
  pFVar3 = (pFVar2->Indices).AllocatorInstance.Data;
  local_10[0] = param_3;
  if ((pFVar3 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar3 + (longlong)(pFVar2->Indices).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar2->Indices).ArrayNum;
  piVar1 = &(pFVar2->Indices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->Indices).AllocatorInstance,piVar1);
  }
  (pFVar2->Indices).ArrayNum = iVar6 + 1;
  *(int *)((pFVar2->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_10[0];
  return;
}

// AddTriangles @ 147b44580

void __thiscall
FDynamicMeshBuilder::AddTriangles
          (FDynamicMeshBuilder *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FPooledDynamicMeshIndexBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  pFVar2 = this->IndexBuffer;
  pTVar6 = &pFVar2->Indices;
  if (pTVar6 == (TArray<int,TSizedDefaultAllocator<32>_> *)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar1,&pTVar6->AllocatorInstance,&(pFVar2->Indices).ArrayNum,
                       &(pFVar2->Indices).ArrayMax);
    memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 << 2);
  }
  return;
}

// AddVertex @ 147b44620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FDynamicMeshBuilder::AddVertex
          (FDynamicMeshBuilder *this,TVector<float> *param_1,TVector2<float> *param_2,
          TVector<float> *param_3,TVector<float> *param_4,TVector<float> *param_5,FColor *param_6)

{
  int *piVar1;
  uint uVar2;
  FPooledDynamicMeshVertexBuffer *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  pFVar3 = this->VertexBuffer;
  uVar2 = (pFVar3->Vertices).ArrayNum;
  piVar1 = &(pFVar3->Vertices).ArrayMax;
  uVar7 = uVar2;
  if (uVar2 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x458,&(pFVar3->Vertices).AllocatorInstance,piVar1);
    (pFVar3->Vertices).ArrayNum = uVar7;
  }
  pFVar21 = (FScriptContainerElement *)0x0;
  (pFVar3->Vertices).ArrayNum = uVar7 + 1;
  uVar8 = 0;
  if ((int)uVar7 < (int)(uVar7 + 1)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  pFVar22 = (pFVar3->Vertices).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x58;
  if (pFVar22 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar22 + 0x4c) = 0;
    pFVar21 = pFVar22;
  }
  *(undefined8 *)pFVar21 = *(undefined8 *)&param_1->field0_0x0;
  *(float *)(pFVar21 + 8) = (param_1->field0_0x0)._s_0.Z;
  ((TVector2<float>_u_0 *)(pFVar21 + 0xc))->_s_0 = (TVector2<float>_u_0_s_0)param_2->field0_0x0;
  FPackedNormal::operator=((FPackedNormal *)(pFVar21 + 0x4c),param_3);
  FPackedNormal::operator=((FPackedNormal *)(pFVar21 + 0x50),param_5);
  uVar7 = 0x7f;
  iVar10 = (int)ROUND((param_5->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  iVar9 = 0x7f;
  if (iVar10 < 0x7f) {
    iVar9 = iVar10;
  }
  iVar11 = (int)ROUND((param_5->field0_0x0)._s_0.Y * __real_437e0000 + __real_3f000000) >> 1;
  iVar10 = 0x7f;
  if (iVar11 < 0x7f) {
    iVar10 = iVar11;
  }
  uVar12 = (int)ROUND((param_5->field0_0x0)._s_0.Z * __real_437e0000 + __real_3f000000) >> 1;
  uVar8 = 0x7f;
  if ((int)uVar12 < 0x7f) {
    uVar8 = uVar12;
  }
  uVar13 = (int)ROUND((param_4->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  uVar12 = uVar7;
  if ((int)uVar13 < 0x7f) {
    uVar12 = uVar13;
  }
  uVar14 = (int)ROUND((param_4->field0_0x0)._s_0.Y * __real_437e0000 + __real_3f000000) >> 1;
  uVar13 = 0x7f;
  if ((int)uVar14 < 0x7f) {
    uVar13 = uVar14;
  }
  uVar15 = (int)ROUND((param_4->field0_0x0)._s_0.Z * __real_437e0000 + __real_3f000000) >> 1;
  uVar14 = uVar7;
  if ((int)uVar15 < 0x7f) {
    uVar14 = uVar15;
  }
  uVar15 = (int)ROUND((param_3->field0_0x0)._s_0.X * __real_437e0000 + __real_3f000000) >> 1;
  iVar11 = 0x7f;
  if ((int)uVar15 < 0x7f) {
    uVar7 = uVar15;
  }
  uVar16 = (int)ROUND((param_3->field0_0x0)._s_0.Y * __real_437e0000 + __real_3f000000) >> 1;
  uVar15 = 0x7f;
  if ((int)uVar16 < 0x7f) {
    uVar15 = uVar16;
  }
  fVar23 = (param_3->field0_0x0)._s_0.Z * __real_437e0000 + __real_3f000000;
  iVar17 = (int)ROUND(fVar23) >> 1;
  iVar5 = iVar11;
  if (iVar17 < 0x7f) {
    iVar5 = iVar17;
  }
  uVar16 = 0x80;
  if (-0x80 < (int)uVar8) {
    uVar16 = uVar8 & 0xff;
  }
  bVar18 = 0x80;
  if (-0x80 < iVar10) {
    bVar18 = (byte)iVar10;
  }
  bVar19 = 0x80;
  if (-0x80 < iVar9) {
    bVar19 = (byte)iVar9;
  }
  bVar20 = 0x80;
  if (-0x80 < (int)uVar14) {
    bVar20 = (byte)uVar14;
  }
  auVar25 = pmovsxbd(ZEXT416((uint)fVar23),
                     ZEXT416(((uVar16 | 0x7f00) << 8 | (uint)bVar18) << 8 | (uint)bVar19));
  uVar8 = 0x80;
  if (-0x80 < (int)uVar13) {
    uVar8 = uVar13 & 0xff;
  }
  uVar13 = 0x80;
  if (-0x80 < (int)uVar12) {
    uVar13 = uVar12 & 0xff;
  }
  bVar18 = 0x80;
  if (-0x80 < iVar5) {
    bVar18 = (byte)iVar5;
  }
  fVar23 = (float)auVar25._4_4_ * _UNK_151040074;
  fVar30 = (float)auVar25._8_4_ * _UNK_151040078;
  auVar26 = pmovsxbd(auVar25,ZEXT416(((bVar20 | 0x7f00) << 8 | uVar8) << 8 | uVar13));
  fVar28 = (float)auVar26._4_4_ * _UNK_151040074;
  fVar31 = (float)auVar26._8_4_ * _UNK_151040078;
  uVar8 = 0x80;
  if (-0x80 < (int)uVar15) {
    uVar8 = uVar15 & 0xff;
  }
  uVar12 = 0x80;
  if (-0x80 < (int)uVar7) {
    uVar12 = uVar7 & 0xff;
  }
  auVar27 = pmovsxbd(auVar26,ZEXT416(((bVar18 | 0x7f00) << 8 | uVar8) << 8 | uVar12));
  fVar29 = (float)auVar27._4_4_ * _UNK_151040074;
  fVar32 = (float)auVar27._8_4_ * _UNK_151040078;
  fVar24 = __real_3f800000;
  if (((fVar30 * fVar28 - fVar31 * fVar23) *
       (float)auVar27._0_4_ * ___xmm_3c0102043c0102043c0102043c010204 -
      (fVar30 * fVar29 - fVar32 * fVar23) *
      (float)auVar26._0_4_ * ___xmm_3c0102043c0102043c0102043c010204) +
      (fVar31 * fVar29 - fVar32 * fVar28) *
      (float)auVar25._0_4_ * ___xmm_3c0102043c0102043c0102043c010204 < 0.0) {
    fVar24 = __real_bf800000;
  }
  if (fVar24 < 0.0) {
    iVar11 = -0x7f;
  }
  pFVar21[0x53] = SUB41(iVar11,0);
  ((FColor_u_0 *)(pFVar21 + 0x54))->_s_0 = (FColor_u_0_s_0)param_6->field0_0x0;
  return uVar2;
}

// AddVertex @ 147b44a70

int __thiscall FDynamicMeshBuilder::AddVertex(FDynamicMeshBuilder *this,FDynamicMeshVertex *param_1)

{
  int *piVar1;
  uint uVar2;
  FPooledDynamicMeshVertexBuffer *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  pFVar3 = this->VertexBuffer;
  uVar2 = (pFVar3->Vertices).ArrayNum;
  piVar1 = &(pFVar3->Vertices).ArrayMax;
  uVar7 = uVar2;
  if (uVar2 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x458,&(pFVar3->Vertices).AllocatorInstance,piVar1);
    (pFVar3->Vertices).ArrayNum = uVar7;
  }
  (pFVar3->Vertices).ArrayNum = uVar7 + 1;
  uVar8 = 0;
  if ((int)uVar7 < (int)(uVar7 + 1)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
  }
  pFVar10 = (pFVar3->Vertices).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x58;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    uVar5 = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 8);
    *(undefined8 *)pFVar10 = *(undefined8 *)&(param_1->Position).field0_0x0;
    *(undefined8 *)(pFVar10 + 8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&param_1->TextureCoordinate[1].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x10) =
         *(undefined8 *)((longlong)&param_1->TextureCoordinate[0].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x18) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&param_1->TextureCoordinate[3].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x20) =
         *(undefined8 *)((longlong)&param_1->TextureCoordinate[2].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x28) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&param_1->TextureCoordinate[5].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x30) =
         *(undefined8 *)((longlong)&param_1->TextureCoordinate[4].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x38) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&param_1->TextureCoordinate[7].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x40) =
         *(undefined8 *)((longlong)&param_1->TextureCoordinate[6].field0_0x0 + 4);
    *(undefined8 *)(pFVar10 + 0x48) = uVar5;
    *(undefined8 *)(pFVar10 + 0x50) = *(undefined8 *)&param_1->TangentZ;
  }
  return uVar2;
}

// AddVertices @ 147b44b70

int __thiscall
FDynamicMeshBuilder::AddVertices
          (FDynamicMeshBuilder *this,TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_1
          )

{
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPooledDynamicMeshVertexBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  
  pFVar4 = this->VertexBuffer;
  pTVar1 = &pFVar4->Vertices;
  piVar2 = &(pFVar4->Vertices).ArrayNum;
  iVar7 = *piVar2;
  if (pTVar1 == param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,4,iVar3,&pTVar1->AllocatorInstance,piVar2,&(pFVar4->Vertices).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x58,
           (param_1->AllocatorInstance).Data,(longlong)iVar3 * 0x58);
  }
  return iVar7;
}

// Draw @ 147b52750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshBuilder::Draw
          (FDynamicMeshBuilder *this,FPrimitiveDrawInterface *param_1,TMatrix<double> *param_2,
          FMaterialRenderProxy *param_3,uchar param_4,bool param_5,bool param_6,FHitProxyId param_7)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar6;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar7;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar8;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  TUniformBuffer<FPrimitiveUniformShaderParameters> **ppTVar13;
  FPrimitiveUniformShaderParameters *pFVar14;
  bool bVar15;
  bool bVar16;
  FPooledDynamicMeshVertexFactory *this_00;
  FPooledDynamicMeshVertexFactory *pFVar17;
  FDynamicMeshPrimitiveUniformBuffer *this_01;
  FPooledDynamicMeshVertexFactory *pFVar18;
  float *pfVar19;
  FPrimitiveUniformShaderParametersBuilder *this_02;
  FPrimitiveUniformShaderParameters *pFVar20;
  FPrimitiveUniformShaderParameters *pFVar21;
  undefined8 *puVar22;
  code **ppcVar23;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar24;
  FRHICommandListBase *pFVar25;
  FIndexBuffer *pFVar26;
  int iVar27;
  longlong lVar28;
  FPrimitiveUniformShaderParameters *pFVar29;
  TUniformBuffer<FPrimitiveUniformShaderParameters> **ppTVar30;
  code **ppcVar31;
  FPooledDynamicMeshIndexBuffer *pFVar32;
  ForElementType<FMeshBatchElement> FVar33;
  code *pcVar34;
  longlong lVar35;
  ulonglong uVar36;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *this_05;
  bool bVar37;
  double dVar38;
  undefined1 auStack_c98 [32];
  undefined8 local_c78;
  longlong local_c70;
  FMaterialRenderProxy *local_c68;
  TMatrix<double> *local_c60;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *local_c58 [2];
  undefined8 local_c48 [100];
  FMeshBatch local_928;
  code *local_848 [2];
  code *local_838 [3];
  code **local_820;
  undefined1 local_818 [40];
  code **local_7f0;
  byte local_7e8;
  undefined1 local_7d8 [664];
  float local_540 [114];
  FPrimitiveUniformShaderParameters local_378;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c98;
  bVar37 = -1 < CpuChannel->Enabled;
  local_c68 = param_3;
  local_c60 = param_2;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1014,"FDynamicMeshBuilder::Draw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x3f6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1014);
  }
  if ((0 < (this->VertexBuffer->Vertices).ArrayNum) && (0 < (this->IndexBuffer->Indices).ArrayNum))
  {
    (**(code **)(param_1->_padding_ + 0x18))(param_1);
    if ((this->IndexBuffer != (FPooledDynamicMeshIndexBuffer *)0x0) &&
       ((this->IndexBuffer->Indices).ArrayNum != 0)) {
      (**(code **)(param_1->_padding_ + 0x18))(param_1);
    }
    this_00 = ::operator_new(0x240);
    pFVar18 = (FPooledDynamicMeshVertexFactory *)0x0;
    pFVar17 = pFVar18;
    if (this_00 != (FPooledDynamicMeshVertexFactory *)0x0) {
      pFVar17 = FPooledDynamicMeshVertexFactory::FPooledDynamicMeshVertexFactory
                          (this_00,this->FeatureLevel,this->VertexBuffer);
    }
    (**(code **)(param_1->_padding_ + 0x18))(param_1);
    this_01 = ::operator_new(0x40);
    if (this_01 != (FDynamicMeshPrimitiveUniformBuffer *)0x0) {
      *(undefined8 *)this_01 = 0;
      *(undefined8 *)&this_01->field_0x8 = 0;
      *(undefined8 *)&this_01->field_0x10 = 0;
      *(undefined8 *)&this_01->field_0x18 = 0;
      *(undefined8 *)&this_01->field_0x20 = 0;
      *(undefined8 *)&this_01->field_0x28 = 0;
      *(undefined8 *)&this_01->field_0x30 = 0;
      *(undefined8 *)&this_01->field_0x38 = 0;
      pFVar18 = (FPooledDynamicMeshVertexFactory *)
                FDynamicMeshPrimitiveUniformBuffer::FDynamicMeshPrimitiveUniformBuffer(this_01);
    }
    memset((FPrimitiveUniformShaderParametersBuilder *)local_7d8,0,0x460);
    pfVar19 = &(((FPrimitiveUniformShaderParametersBuilder *)local_7d8)->Parameters).
               CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
    local_7d8._368_8_ = ___xmm_3f800000000000000000000000000000;
    local_7d8._376_8_ = _UNK_150689648;
    lVar28 = 9;
    local_7d8._448_8_ = ___xmm_3f800000000000000000000000000000;
    local_7d8._456_8_ = _UNK_150689648;
    do {
      ((TVector4<float>_u_0_s_0 *)(pfVar19 + -2))->X = 0.0;
      ((TVector4<float>_u_0_s_0 *)(pfVar19 + -2))->Y = 0.0;
      *pfVar19 = 0.0;
      pfVar19[1] = 1.0;
      pfVar19 = pfVar19 + 4;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    this_02 = FPrimitiveUniformShaderParametersBuilder::Defaults
                        ((FPrimitiveUniformShaderParametersBuilder *)local_7d8);
    dVar38 = param_2->M[0][1];
    (this_02->AbsoluteLocalToWorld).M[0][0] = param_2->M[0][0];
    (this_02->AbsoluteLocalToWorld).M[0][1] = dVar38;
    dVar38 = param_2->M[0][3];
    (this_02->AbsoluteLocalToWorld).M[0][2] = param_2->M[0][2];
    (this_02->AbsoluteLocalToWorld).M[0][3] = dVar38;
    dVar38 = param_2->M[1][1];
    (this_02->AbsoluteLocalToWorld).M[1][0] = param_2->M[1][0];
    (this_02->AbsoluteLocalToWorld).M[1][1] = dVar38;
    dVar38 = param_2->M[1][3];
    (this_02->AbsoluteLocalToWorld).M[1][2] = param_2->M[1][2];
    (this_02->AbsoluteLocalToWorld).M[1][3] = dVar38;
    dVar38 = param_2->M[2][1];
    (this_02->AbsoluteLocalToWorld).M[2][0] = param_2->M[2][0];
    (this_02->AbsoluteLocalToWorld).M[2][1] = dVar38;
    dVar38 = param_2->M[2][3];
    (this_02->AbsoluteLocalToWorld).M[2][2] = param_2->M[2][2];
    (this_02->AbsoluteLocalToWorld).M[2][3] = dVar38;
    dVar38 = param_2->M[3][1];
    (this_02->AbsoluteLocalToWorld).M[3][0] = param_2->M[3][0];
    (this_02->AbsoluteLocalToWorld).M[3][1] = dVar38;
    dVar38 = param_2->M[3][3];
    (this_02->AbsoluteLocalToWorld).M[3][2] = param_2->M[3][2];
    (this_02->AbsoluteLocalToWorld).M[3][3] = dVar38;
    dVar38 = param_2->M[3][1];
    dVar1 = param_2->M[3][2];
    (this_02->AbsoluteActorWorldPosition).field0_0x0._s_0.X = param_2->M[3][0];
    (this_02->AbsoluteActorWorldPosition).field0_0x0._s_0.Y = dVar38;
    (this_02->AbsoluteActorWorldPosition).field0_0x0._s_0.Z = dVar1;
    (this_02->AbsoluteObjectWorldPosition).field0_0x0._s_0.X = 0.0;
    (this_02->AbsoluteObjectWorldPosition).field0_0x0._s_0.Y = 0.0;
    (this_02->AbsoluteObjectWorldPosition).field0_0x0._s_0.Z = 0.0;
    this_02->ObjectRadius = 0.0;
    (this_02->Parameters).ObjectBoundsX = 0.0;
    *(undefined8 *)((longlong)&(this_02->Parameters).LocalObjectBoundsMin.field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this_02->Parameters).LocalObjectBoundsMax.field0_0x0 + 8) = 0;
    *(undefined8 *)&(this_02->Parameters).LocalObjectBoundsMin.field0_0x0 = 0;
    *(undefined8 *)&(this_02->Parameters).LocalObjectBoundsMax.field0_0x0 = 0;
    this_02->bReceivesDecals = 0;
    *(uint *)&this_02->field_0x454 = *(uint *)&this_02->field_0x454 | (param_6 | 8) << 3;
    pFVar20 = FPrimitiveUniformShaderParametersBuilder::Build(this_02);
    lVar35 = 6;
    lVar28 = 6;
    pFVar14 = &local_378;
    do {
      pFVar29 = pFVar14;
      pFVar21 = pFVar20;
      pFVar14 = (FPrimitiveUniformShaderParameters *)((pFVar29->RelativeWorldToLocal).M + 2);
      uVar10 = pFVar21->InstanceSceneDataOffset;
      uVar11 = pFVar21->NumInstanceSceneDataEntries;
      iVar27 = pFVar21->SingleCaptureIndex;
      uVar2 = *(undefined8 *)&(pFVar21->PositionHigh).field0_0x0;
      uVar3 = *(undefined8 *)((longlong)&(pFVar21->PositionHigh).field0_0x0 + 8);
      pFVar20 = (FPrimitiveUniformShaderParameters *)((pFVar21->RelativeWorldToLocal).M + 2);
      pFVar29->Flags = pFVar21->Flags;
      pFVar29->InstanceSceneDataOffset = uVar10;
      pFVar29->NumInstanceSceneDataEntries = uVar11;
      pFVar29->SingleCaptureIndex = iVar27;
      uVar4 = *(undefined8 *)(pFVar21->LocalToRelativeWorld).M[0];
      uVar5 = *(undefined8 *)((pFVar21->LocalToRelativeWorld).M[0] + 2);
      *(undefined8 *)&(pFVar29->PositionHigh).field0_0x0 = uVar2;
      *(undefined8 *)((longlong)&(pFVar29->PositionHigh).field0_0x0 + 8) = uVar3;
      uVar2 = *(undefined8 *)(pFVar21->LocalToRelativeWorld).M[1];
      uVar3 = *(undefined8 *)((pFVar21->LocalToRelativeWorld).M[1] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[0] = uVar4;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[0] + 2) = uVar5;
      uVar4 = *(undefined8 *)(pFVar21->LocalToRelativeWorld).M[2];
      uVar5 = *(undefined8 *)((pFVar21->LocalToRelativeWorld).M[2] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[1] = uVar2;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[1] + 2) = uVar3;
      uVar2 = *(undefined8 *)(pFVar21->LocalToRelativeWorld).M[3];
      uVar3 = *(undefined8 *)((pFVar21->LocalToRelativeWorld).M[3] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[2] = uVar4;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[2] + 2) = uVar5;
      uVar4 = *(undefined8 *)(pFVar21->RelativeWorldToLocal).M[0];
      uVar5 = *(undefined8 *)((pFVar21->RelativeWorldToLocal).M[0] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[3] = uVar2;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[3] + 2) = uVar3;
      uVar2 = *(undefined8 *)(pFVar21->RelativeWorldToLocal).M[1];
      uVar3 = *(undefined8 *)((pFVar21->RelativeWorldToLocal).M[1] + 2);
      *(undefined8 *)(pFVar29->RelativeWorldToLocal).M[0] = uVar4;
      *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[0] + 2) = uVar5;
      *(undefined8 *)(pFVar29->RelativeWorldToLocal).M[1] = uVar2;
      *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[1] + 2) = uVar3;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    uVar10 = pFVar20->InstanceSceneDataOffset;
    uVar2 = *(undefined8 *)((pFVar21->RelativeWorldToLocal).M[2] + 2);
    this_05 = (TUniformBuffer<FPrimitiveUniformShaderParameters> *)&pFVar18->_padding_;
    uVar3 = *(undefined8 *)(pFVar21->RelativeWorldToLocal).M[3];
    uVar4 = *(undefined8 *)((pFVar21->RelativeWorldToLocal).M[3] + 2);
    pFVar14->Flags = pFVar20->Flags;
    pFVar14->InstanceSceneDataOffset = uVar10;
    *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[2] + 2) = uVar2;
    *(undefined8 *)(pFVar29->RelativeWorldToLocal).M[3] = uVar3;
    *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[3] + 2) = uVar4;
    bVar15 = IsInGameThread();
    if (bVar15) {
      local_c58[0] = this_05;
      pcVar34 = (code *)0x6;
      puVar12 = local_c48;
      pFVar14 = &local_378;
      do {
        pFVar20 = pFVar14;
        puVar22 = puVar12;
        uVar2 = *(undefined8 *)&pFVar20->NumInstanceSceneDataEntries;
        uVar3 = *(undefined8 *)&(pFVar20->PositionHigh).field0_0x0;
        uVar4 = *(undefined8 *)((longlong)&(pFVar20->PositionHigh).field0_0x0 + 8);
        pFVar14 = (FPrimitiveUniformShaderParameters *)((pFVar20->RelativeWorldToLocal).M + 2);
        *puVar22 = *(undefined8 *)pFVar20;
        puVar22[1] = uVar2;
        uVar2 = *(undefined8 *)(pFVar20->LocalToRelativeWorld).M[0];
        uVar5 = *(undefined8 *)((pFVar20->LocalToRelativeWorld).M[0] + 2);
        puVar22[2] = uVar3;
        puVar22[3] = uVar4;
        uVar3 = *(undefined8 *)(pFVar20->LocalToRelativeWorld).M[1];
        uVar4 = *(undefined8 *)((pFVar20->LocalToRelativeWorld).M[1] + 2);
        puVar22[4] = uVar2;
        puVar22[5] = uVar5;
        uVar2 = *(undefined8 *)(pFVar20->LocalToRelativeWorld).M[2];
        uVar5 = *(undefined8 *)((pFVar20->LocalToRelativeWorld).M[2] + 2);
        puVar22[6] = uVar3;
        puVar22[7] = uVar4;
        uVar3 = *(undefined8 *)(pFVar20->LocalToRelativeWorld).M[3];
        uVar4 = *(undefined8 *)((pFVar20->LocalToRelativeWorld).M[3] + 2);
        puVar22[8] = uVar2;
        puVar22[9] = uVar5;
        uVar2 = *(undefined8 *)(pFVar20->RelativeWorldToLocal).M[0];
        uVar5 = *(undefined8 *)((pFVar20->RelativeWorldToLocal).M[0] + 2);
        puVar22[10] = uVar3;
        puVar22[0xb] = uVar4;
        uVar3 = *(undefined8 *)(pFVar20->RelativeWorldToLocal).M[1];
        uVar4 = *(undefined8 *)((pFVar20->RelativeWorldToLocal).M[1] + 2);
        puVar22[0xc] = uVar2;
        puVar22[0xd] = uVar5;
        puVar22[0xe] = uVar3;
        puVar22[0xf] = uVar4;
        pcVar34 = pcVar34 + -1;
        puVar12 = puVar22 + 0x10;
      } while (pcVar34 != (code *)0x0);
      uVar2 = *(undefined8 *)((pFVar20->RelativeWorldToLocal).M[2] + 2);
      local_848[0] = pcVar34;
      uVar3 = *(undefined8 *)(pFVar20->RelativeWorldToLocal).M[3];
      uVar4 = *(undefined8 *)((pFVar20->RelativeWorldToLocal).M[3] + 2);
      puVar22[0x10] = *(undefined8 *)pFVar14;
      puVar22[0x11] = uVar2;
      puVar22[0x12] = uVar3;
      puVar22[0x13] = uVar4;
      local_820 = FMemory::Malloc(0x340,0x10);
      *local_820 = (code *)&
                           ___7__TFunction_OwnedObject_V<lambda_1>__1____BeginSetUniformBufferContents_VFPrimitiveUniformShaderParameters____YAXAEAV__TUniformBuffer_VFPrimitiveUniformShaderParameters____AEBVFPrimitiveUniformShaderParameters___Z__00_00_Function_Private_Core_UE__6B_
      ;
      ppcVar31 = local_820 + 2;
      ppTVar13 = local_c58;
      do {
        ppTVar30 = ppTVar13;
        ppcVar23 = ppcVar31;
        pTVar6 = ppTVar30[1];
        pTVar7 = ppTVar30[2];
        pTVar8 = ppTVar30[3];
        *ppcVar23 = (code *)*ppTVar30;
        ppcVar23[1] = (code *)pTVar6;
        pTVar6 = ppTVar30[4];
        pTVar9 = ppTVar30[5];
        ppcVar23[2] = (code *)pTVar7;
        ppcVar23[3] = (code *)pTVar8;
        pTVar7 = ppTVar30[6];
        pTVar8 = ppTVar30[7];
        ppcVar23[4] = (code *)pTVar6;
        ppcVar23[5] = (code *)pTVar9;
        pTVar6 = ppTVar30[8];
        pTVar9 = ppTVar30[9];
        ppcVar23[6] = (code *)pTVar7;
        ppcVar23[7] = (code *)pTVar8;
        pTVar7 = ppTVar30[10];
        pTVar8 = ppTVar30[0xb];
        ppcVar23[8] = (code *)pTVar6;
        ppcVar23[9] = (code *)pTVar9;
        pTVar6 = ppTVar30[0xc];
        pTVar9 = ppTVar30[0xd];
        ppcVar23[10] = (code *)pTVar7;
        ppcVar23[0xb] = (code *)pTVar8;
        pTVar7 = ppTVar30[0xe];
        pTVar8 = ppTVar30[0xf];
        ppcVar23[0xc] = (code *)pTVar6;
        ppcVar23[0xd] = (code *)pTVar9;
        ppcVar23[0xe] = (code *)pTVar7;
        ppcVar23[0xf] = (code *)pTVar8;
        lVar35 = lVar35 + -1;
        ppcVar31 = ppcVar23 + 0x10;
        ppTVar13 = ppTVar30 + 0x10;
      } while (lVar35 != 0);
      pTVar6 = ppTVar30[0x11];
      pTVar7 = ppTVar30[0x12];
      pTVar8 = ppTVar30[0x13];
      ppcVar23[0x10] = (code *)ppTVar30[0x10];
      ppcVar23[0x11] = (code *)pTVar6;
      pTVar6 = ppTVar30[0x14];
      pTVar9 = ppTVar30[0x15];
      ppcVar23[0x12] = (code *)pTVar7;
      ppcVar23[0x13] = (code *)pTVar8;
      ppcVar23[0x14] = (code *)pTVar6;
      ppcVar23[0x15] = (code *)pTVar9;
      if (local_820 + 2 != (code **)0x0) {
        local_848[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`BeginSetUniformBufferContents<FPrimitiveUniformShaderParameters>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      this_03 = FRenderCommandList::GetInstanceTLS();
      if (this_03 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_BeginSetUniformBufferContents<FPrimitiveUniformShaderParameters>_::__l2::TSTR_SetUniformBufferContents141>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_848);
      }
      else {
        this_04 = FRenderCommandList::GetRenderThread(this_03);
        local_818._0_8_ = local_848[0];
        local_7f0 = local_820;
        local_820 = (code **)0x0;
        local_818._16_8_ = local_838[0];
        local_818._24_8_ = local_838[1];
        local_818._32_8_ = local_838[2];
        local_848[0] = (code *)0x0;
        local_7e8 = 2;
        pFVar24 = (FRenderCommandTag *)
                  TRenderCommandTag<`BeginSetUniformBufferContents<FPrimitiveUniformShaderParameters>'::__l2::TSTR_SetUniformBufferContents141>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_818,pFVar24);
        uVar36 = (ulonglong)local_7e8;
        if ((2 < uVar36) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar15)) {
          pcVar34 = (code *)swi(3);
          (*pcVar34)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar36] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_818._0_8_ != (code *)0x0) {
            ppcVar31 = (code **)(local_818 + 0x10);
            if (local_7f0 != (code **)0x0) {
              ppcVar31 = local_7f0;
            }
            (**(code **)(*ppcVar31 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar36])(local_818);
        }
      }
      if (local_848[0] != (code *)0x0) {
        ppcVar31 = local_848 + 2;
        if (local_820 != (code **)0x0) {
          ppcVar31 = local_820;
        }
        (**(code **)(*ppcVar31 + 0x10))();
      }
    }
    else {
      pFVar25 = (FRHICommandListBase *)FRHICommandListImmediate::Get();
      TUniformBuffer<FPrimitiveUniformShaderParameters>::SetContents(this_05,pFVar25,&local_378);
    }
    (**(code **)(param_1->_padding_ + 0x18))(param_1,pFVar18);
    if ((this->IndexBuffer == (FPooledDynamicMeshIndexBuffer *)0x0) ||
       ((this->IndexBuffer->Indices).ArrayNum == 0)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    FMeshBatch::FMeshBatch(&local_928);
    if (local_928.Elements.ArrayNum < 1) {
      local_c78 = 0;
      local_c70 = (longlong)local_928.Elements.ArrayNum;
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar34 = (code *)swi(3);
        (*pcVar34)();
        return;
      }
    }
    FVar33 = (ForElementType<FMeshBatchElement>)&local_928;
    if (local_928.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0
       ) {
      FVar33 = local_928.Elements.AllocatorInstance.SecondaryData;
    }
    if (bVar15) {
      pFVar32 = this->IndexBuffer;
    }
    else {
      pFVar32 = (FPooledDynamicMeshIndexBuffer *)0x0;
    }
    pFVar26 = (FIndexBuffer *)&pFVar32->_padding_;
    if (pFVar32 == (FPooledDynamicMeshIndexBuffer *)0x0) {
      pFVar26 = (FIndexBuffer *)0x0;
    }
    *(FIndexBuffer **)((longlong)FVar33 + 0x18) = pFVar26;
    if (pFVar17 == (FPooledDynamicMeshVertexFactory *)0x0) {
      local_928.VertexFactory = (FVertexFactory *)0x0;
    }
    else {
      local_928.VertexFactory = (FVertexFactory *)&pFVar17->_padding_;
    }
    if (pFVar18 == (FPooledDynamicMeshVertexFactory *)0x0) {
      this_05 = (TUniformBuffer<FPrimitiveUniformShaderParameters> *)0x0;
    }
    local_928.MaterialRenderProxy = local_c68;
    *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar33 + 8) = this_05;
    *(uint *)((longlong)FVar33 + 0x58) = 0;
    if (bVar15) {
      iVar27 = (this->IndexBuffer->Indices).ArrayNum;
    }
    else {
      iVar27 = (this->VertexBuffer->Vertices).ArrayNum;
    }
    *(uint *)((longlong)FVar33 + 0x68) = 0;
    *(int *)((longlong)FVar33 + 0x5c) =
         iVar27 / 3 + (iVar27 >> 0x1f) +
         (int)(((longlong)iVar27 / 3 + ((longlong)iVar27 >> 0x3f) & 0xffffffffU) >> 0x1f);
    *(uint *)((longlong)FVar33 + 0x6c) = (this->VertexBuffer->Vertices).ArrayNum - 1;
    dVar38 = UE::Math::TMatrix<double>::Determinant(local_c60);
    local_928._212_4_ =
         (uint)(dVar38 < 0.0) | ((param_4 & 7) << 9 | (uint)param_5) * 2 |
         local_928._212_4_ & 0xffffe07c;
    local_928.BatchHitProxyId.Index = param_7.Index;
    (**(code **)(param_1->_padding_ + 0x48))(param_1,&local_928);
    this->VertexBuffer = (FPooledDynamicMeshVertexBuffer *)0x0;
    FVar33 = (ForElementType<FMeshBatchElement>)&local_928;
    if (local_928.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0
       ) {
      FVar33 = local_928.Elements.AllocatorInstance.SecondaryData;
    }
    this->IndexBuffer = (FPooledDynamicMeshIndexBuffer *)0x0;
    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar33,local_928.Elements.ArrayNum);
    if (local_928.Elements.AllocatorInstance.SecondaryData != (ForElementType<FMeshBatchElement>)0x0
       ) {
      FMemory::Free((void *)local_928.Elements.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetMesh @ 147b680e0

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
FDynamicMeshBuilder::GetMesh
          (FDynamicMeshBuilder *this,TMatrix<double> *param_1,TMatrix<double> *param_2,
          FMaterialRenderProxy *param_3,uchar param_4,FDynamicMeshBuilderSettings *param_5,
          FDynamicMeshDrawOffset *param_6,int param_7,FMeshElementCollector *param_8,
          FHitProxyId param_9)

{
  Type TVar1;
  int iVar2;
  FPooledDynamicMeshVertexBuffer *pFVar3;
  FRHICommandListBase *pFVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar5;
  FPooledDynamicMeshIndexBuffer *pFVar6;
  FMeshBuilderOneFrameResources *pFVar7;
  FDynamicMeshPrimitiveUniformBuffer *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FPrimitiveUniformShaderParameters *pFVar15;
  bool bVar16;
  int iVar17;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar18;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar19;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar20;
  FPooledDynamicMeshVertexFactory *pFVar21;
  float *pfVar22;
  FPrimitiveUniformShaderParametersBuilder *this_00;
  FPrimitiveUniformShaderParameters *pFVar23;
  FPrimitiveUniformShaderParameters *pFVar24;
  FPooledDynamicMeshVertexFactory *pFVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  FPrimitiveUniformShaderParameters *pFVar29;
  uint uVar30;
  FPooledDynamicMeshVertexFactory *pFVar31;
  ForElementType<FMeshBatchElement> FVar32;
  ForElementType<FMeshBatchElement> FVar33;
  bool bVar34;
  double dVar35;
  undefined1 auStack_818 [32];
  longlong local_7f8;
  longlong local_7f0;
  char local_7e8;
  char local_7e7;
  FRHICommandListBase *local_7e0;
  TMatrix<double> *local_7d8;
  TMatrix<double> *local_7d0;
  FMaterialRenderProxy *local_7c8;
  undefined1 local_7b8 [664];
  float local_520 [114];
  FPrimitiveUniformShaderParameters local_358;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_818;
  bVar34 = -1 < CpuChannel->Enabled;
  local_7d8 = param_1;
  local_7d0 = param_2;
  local_7c8 = param_3;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId854,"FDynamicMeshBuilder::GetMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x356);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId854);
  }
  if ((param_8->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar3 = this->VertexBuffer;
  pFVar31 = (FPooledDynamicMeshVertexFactory *)0x0;
  pFVar4 = (FRHICommandListBase *)param_8->RHICmdList;
  uVar30 = 0;
  local_7e0 = pFVar4;
  if ((pFVar3 == (FPooledDynamicMeshVertexBuffer *)0x0) || ((pFVar3->Vertices).ArrayNum < 1)) {
    if (param_6 == (FDynamicMeshDrawOffset *)0x0) goto LAB_147b688e4;
    if ((pFVar3 != (FPooledDynamicMeshVertexBuffer *)0x0) ||
       (this->IndexBuffer != (FPooledDynamicMeshIndexBuffer *)0x0)) goto LAB_147b681f4;
  }
  else {
LAB_147b681f4:
    paVar5 = &param_8->OneFrameResources->Next;
    aVar18 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x38,8);
    *(undefined8 *)((longlong)aVar18 + 8) = 0;
    *(undefined ***)aVar18 =
         &
         ___7__TObject_VFMeshBuilderOneFrameResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    TVar19.Next = *paVar5;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar18 + 8) = TVar19.Next;
      LOCK();
      aVar20 = *paVar5;
      bVar16 = TVar19.Next == aVar20;
      if (bVar16) {
        *paVar5 = aVar18;
        aVar20 = TVar19.Next;
      }
      UNLOCK();
      TVar19.Next = aVar20;
    } while (!bVar16);
    *(undefined8 *)((longlong)aVar18 + 0x18) = 0;
    ((FMeshBuilderOneFrameResources *)((longlong)aVar18 + 0x10))->_padding_ =
         (longlong)&___7FMeshBuilderOneFrameResources__6B_;
    *(undefined8 *)((longlong)aVar18 + 0x20) = 0;
    *(undefined8 *)((longlong)aVar18 + 0x28) = 0;
    *(undefined8 *)((longlong)aVar18 + 0x30) = 0;
    this->OneFrameResources = (FMeshBuilderOneFrameResources *)((longlong)aVar18 + 0x10);
    *(FPooledDynamicMeshVertexBuffer **)((longlong)aVar18 + 0x18) = this->VertexBuffer;
    this->OneFrameResources->IndexBuffer = this->IndexBuffer;
    pFVar3 = this->OneFrameResources->VertexBuffer;
    if (pFVar3 != (FPooledDynamicMeshVertexBuffer *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x18))(&pFVar3->_padding_,pFVar4);
    }
    pFVar6 = this->OneFrameResources->IndexBuffer;
    if ((pFVar6 != (FPooledDynamicMeshIndexBuffer *)0x0) &&
       ((this->IndexBuffer->Indices).ArrayNum != 0)) {
      (**(code **)(pFVar6->_padding_ + 0x18))(&pFVar6->_padding_,pFVar4);
    }
    pFVar21 = ::operator_new(0x240);
    pFVar25 = pFVar31;
    if (pFVar21 != (FPooledDynamicMeshVertexFactory *)0x0) {
      pFVar3 = this->VertexBuffer;
      TVar1 = this->FeatureLevel;
      pFVar21->_padding_ = (longlong)&___7FDynamicPrimitiveResource__6B_;
      FLocalVertexFactory::FLocalVertexFactory
                ((FLocalVertexFactory *)&pFVar21->_padding_,TVar1,"FPooledDynamicMeshVertexFactory")
      ;
      pFVar21->VertexBuffer = pFVar3;
      pFVar21->_padding_ =
           (longlong)&FPooledDynamicMeshVertexFactory::_vftable__for__FDynamicPrimitiveResource__;
      pFVar21->_padding_ =
           (longlong)&FPooledDynamicMeshVertexFactory::_vftable__for__FLocalVertexFactory__;
      pFVar25 = pFVar21;
    }
    this->OneFrameResources->VertexFactory = pFVar25;
    pFVar25 = this->OneFrameResources->VertexFactory;
    (**(code **)(pFVar25->_padding_ + 0x18))(&pFVar25->_padding_);
    pFVar21 = ::operator_new(0x40);
    pFVar25 = pFVar31;
    if (pFVar21 != (FPooledDynamicMeshVertexFactory *)0x0) {
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = (longlong)&___7FDynamicPrimitiveResource__6B_;
      FRenderResource::FRenderResource((FRenderResource *)&pFVar21->_padding_);
      *(undefined4 *)&pFVar21->_padding_ = 2;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ = 0;
      pFVar21->_padding_ =
           (longlong)&FDynamicMeshPrimitiveUniformBuffer::_vftable__for__FDynamicPrimitiveResource__
      ;
      pFVar21->_padding_ =
           (longlong)
           &FDynamicMeshPrimitiveUniformBuffer::
            _vftable__for__TUniformBuffer<FPrimitiveUniformShaderParameters>__;
      pFVar25 = pFVar21;
    }
    this->OneFrameResources->PrimitiveUniformBuffer = (FDynamicMeshPrimitiveUniformBuffer *)pFVar25;
    memset((FPrimitiveUniformShaderParametersBuilder *)local_7b8,0,0x460);
    pfVar22 = &(((FPrimitiveUniformShaderParametersBuilder *)local_7b8)->Parameters).
               CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
    local_7b8._368_8_ = ___xmm_3f800000000000000000000000000000;
    local_7b8._376_8_ = _UNK_150689648;
    lVar28 = 9;
    local_7b8._448_8_ = ___xmm_3f800000000000000000000000000000;
    local_7b8._456_8_ = _UNK_150689648;
    do {
      ((TVector4<float>_u_0_s_0 *)(pfVar22 + -2))->X = 0.0;
      ((TVector4<float>_u_0_s_0 *)(pfVar22 + -2))->Y = 0.0;
      *pfVar22 = 0.0;
      pfVar22[1] = 1.0;
      pfVar22 = pfVar22 + 4;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    this_00 = FPrimitiveUniformShaderParametersBuilder::Defaults
                        ((FPrimitiveUniformShaderParametersBuilder *)local_7b8);
    dVar35 = local_7d8->M[0][1];
    (this_00->AbsoluteLocalToWorld).M[0][0] = local_7d8->M[0][0];
    (this_00->AbsoluteLocalToWorld).M[0][1] = dVar35;
    dVar35 = local_7d8->M[0][3];
    (this_00->AbsoluteLocalToWorld).M[0][2] = local_7d8->M[0][2];
    (this_00->AbsoluteLocalToWorld).M[0][3] = dVar35;
    dVar35 = local_7d8->M[1][1];
    (this_00->AbsoluteLocalToWorld).M[1][0] = local_7d8->M[1][0];
    (this_00->AbsoluteLocalToWorld).M[1][1] = dVar35;
    dVar35 = local_7d8->M[1][3];
    (this_00->AbsoluteLocalToWorld).M[1][2] = local_7d8->M[1][2];
    (this_00->AbsoluteLocalToWorld).M[1][3] = dVar35;
    dVar35 = local_7d8->M[2][1];
    (this_00->AbsoluteLocalToWorld).M[2][0] = local_7d8->M[2][0];
    (this_00->AbsoluteLocalToWorld).M[2][1] = dVar35;
    dVar35 = local_7d8->M[2][3];
    (this_00->AbsoluteLocalToWorld).M[2][2] = local_7d8->M[2][2];
    (this_00->AbsoluteLocalToWorld).M[2][3] = dVar35;
    dVar35 = local_7d8->M[3][1];
    (this_00->AbsoluteLocalToWorld).M[3][0] = local_7d8->M[3][0];
    (this_00->AbsoluteLocalToWorld).M[3][1] = dVar35;
    dVar35 = local_7d8->M[3][3];
    (this_00->AbsoluteLocalToWorld).M[3][2] = local_7d8->M[3][2];
    (this_00->AbsoluteLocalToWorld).M[3][3] = dVar35;
    this_00->bHasPreviousLocalToWorld = 1;
    dVar35 = local_7d0->M[0][1];
    (this_00->AbsolutePreviousLocalToWorld).M[0][0] = local_7d0->M[0][0];
    (this_00->AbsolutePreviousLocalToWorld).M[0][1] = dVar35;
    dVar35 = local_7d0->M[0][3];
    (this_00->AbsolutePreviousLocalToWorld).M[0][2] = local_7d0->M[0][2];
    (this_00->AbsolutePreviousLocalToWorld).M[0][3] = dVar35;
    dVar35 = local_7d0->M[1][1];
    (this_00->AbsolutePreviousLocalToWorld).M[1][0] = local_7d0->M[1][0];
    (this_00->AbsolutePreviousLocalToWorld).M[1][1] = dVar35;
    dVar35 = local_7d0->M[1][3];
    (this_00->AbsolutePreviousLocalToWorld).M[1][2] = local_7d0->M[1][2];
    (this_00->AbsolutePreviousLocalToWorld).M[1][3] = dVar35;
    dVar35 = local_7d0->M[2][1];
    (this_00->AbsolutePreviousLocalToWorld).M[2][0] = local_7d0->M[2][0];
    (this_00->AbsolutePreviousLocalToWorld).M[2][1] = dVar35;
    dVar35 = local_7d0->M[2][3];
    (this_00->AbsolutePreviousLocalToWorld).M[2][2] = local_7d0->M[2][2];
    (this_00->AbsolutePreviousLocalToWorld).M[2][3] = dVar35;
    dVar35 = local_7d0->M[3][1];
    (this_00->AbsolutePreviousLocalToWorld).M[3][0] = local_7d0->M[3][0];
    (this_00->AbsolutePreviousLocalToWorld).M[3][1] = dVar35;
    dVar35 = local_7d0->M[3][3];
    (this_00->AbsolutePreviousLocalToWorld).M[3][2] = local_7d0->M[3][2];
    (this_00->AbsolutePreviousLocalToWorld).M[3][3] = dVar35;
    dVar35 = local_7d8->M[3][1];
    dVar10 = local_7d8->M[3][2];
    (this_00->AbsoluteActorWorldPosition).field0_0x0._s_0.X = local_7d8->M[3][0];
    (this_00->AbsoluteActorWorldPosition).field0_0x0._s_0.Y = dVar35;
    (this_00->AbsoluteActorWorldPosition).field0_0x0._s_0.Z = dVar10;
    (this_00->AbsoluteObjectWorldPosition).field0_0x0._s_0.X = 0.0;
    (this_00->AbsoluteObjectWorldPosition).field0_0x0._s_0.Y = 0.0;
    (this_00->AbsoluteObjectWorldPosition).field0_0x0._s_0.Z = 0.0;
    this_00->ObjectRadius = 0.0;
    (this_00->Parameters).ObjectBoundsX = 0.0;
    *(undefined8 *)((longlong)&(this_00->Parameters).LocalObjectBoundsMin.field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this_00->Parameters).LocalObjectBoundsMax.field0_0x0 + 8) = 0;
    *(undefined8 *)&(this_00->Parameters).LocalObjectBoundsMin.field0_0x0 = 0;
    *(undefined8 *)&(this_00->Parameters).LocalObjectBoundsMax.field0_0x0 = 0;
    *(uint *)&this_00->field_0x454 =
         ((uint)param_5->bReceivesDecals << 3 ^ *(uint *)&this_00->field_0x454) & 8 ^
         *(uint *)&this_00->field_0x454 | 0x40;
    *(uint *)&this_00->field_0x458 =
         ((uint)param_5->bIsFirstPerson << 9 ^ *(uint *)&this_00->field_0x458) & 0x200 ^
         *(uint *)&this_00->field_0x458;
    pFVar23 = FPrimitiveUniformShaderParametersBuilder::Build(this_00);
    lVar28 = 6;
    pFVar15 = &local_358;
    do {
      pFVar29 = pFVar15;
      pFVar24 = pFVar23;
      pFVar15 = (FPrimitiveUniformShaderParameters *)((pFVar29->RelativeWorldToLocal).M + 2);
      uVar27 = pFVar24->InstanceSceneDataOffset;
      uVar26 = pFVar24->NumInstanceSceneDataEntries;
      iVar2 = pFVar24->SingleCaptureIndex;
      uVar11 = *(undefined8 *)&(pFVar24->PositionHigh).field0_0x0;
      uVar12 = *(undefined8 *)((longlong)&(pFVar24->PositionHigh).field0_0x0 + 8);
      pFVar23 = (FPrimitiveUniformShaderParameters *)((pFVar24->RelativeWorldToLocal).M + 2);
      pFVar29->Flags = pFVar24->Flags;
      pFVar29->InstanceSceneDataOffset = uVar27;
      pFVar29->NumInstanceSceneDataEntries = uVar26;
      pFVar29->SingleCaptureIndex = iVar2;
      uVar13 = *(undefined8 *)(pFVar24->LocalToRelativeWorld).M[0];
      uVar14 = *(undefined8 *)((pFVar24->LocalToRelativeWorld).M[0] + 2);
      *(undefined8 *)&(pFVar29->PositionHigh).field0_0x0 = uVar11;
      *(undefined8 *)((longlong)&(pFVar29->PositionHigh).field0_0x0 + 8) = uVar12;
      uVar11 = *(undefined8 *)(pFVar24->LocalToRelativeWorld).M[1];
      uVar12 = *(undefined8 *)((pFVar24->LocalToRelativeWorld).M[1] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[0] = uVar13;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[0] + 2) = uVar14;
      uVar13 = *(undefined8 *)(pFVar24->LocalToRelativeWorld).M[2];
      uVar14 = *(undefined8 *)((pFVar24->LocalToRelativeWorld).M[2] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[1] = uVar11;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[1] + 2) = uVar12;
      uVar11 = *(undefined8 *)(pFVar24->LocalToRelativeWorld).M[3];
      uVar12 = *(undefined8 *)((pFVar24->LocalToRelativeWorld).M[3] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[2] = uVar13;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[2] + 2) = uVar14;
      uVar13 = *(undefined8 *)(pFVar24->RelativeWorldToLocal).M[0];
      uVar14 = *(undefined8 *)((pFVar24->RelativeWorldToLocal).M[0] + 2);
      *(undefined8 *)(pFVar29->LocalToRelativeWorld).M[3] = uVar11;
      *(undefined8 *)((pFVar29->LocalToRelativeWorld).M[3] + 2) = uVar12;
      uVar11 = *(undefined8 *)(pFVar24->RelativeWorldToLocal).M[1];
      uVar12 = *(undefined8 *)((pFVar24->RelativeWorldToLocal).M[1] + 2);
      *(undefined8 *)(pFVar29->RelativeWorldToLocal).M[0] = uVar13;
      *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[0] + 2) = uVar14;
      *(undefined8 *)(pFVar29->RelativeWorldToLocal).M[1] = uVar11;
      *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[1] + 2) = uVar12;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    uVar27 = pFVar23->InstanceSceneDataOffset;
    uVar11 = *(undefined8 *)((pFVar24->RelativeWorldToLocal).M[2] + 2);
    uVar12 = *(undefined8 *)(pFVar24->RelativeWorldToLocal).M[3];
    uVar13 = *(undefined8 *)((pFVar24->RelativeWorldToLocal).M[3] + 2);
    pFVar7 = this->OneFrameResources;
    pFVar15->Flags = pFVar23->Flags;
    pFVar15->InstanceSceneDataOffset = uVar27;
    *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[2] + 2) = uVar11;
    *(undefined8 *)(pFVar29->RelativeWorldToLocal).M[3] = uVar12;
    *(undefined8 *)((pFVar29->RelativeWorldToLocal).M[3] + 2) = uVar13;
    TUniformBuffer<FPrimitiveUniformShaderParameters>::SetContents
              ((TUniformBuffer<FPrimitiveUniformShaderParameters> *)
               &pFVar7->PrimitiveUniformBuffer->field_0x8,local_7e0,&local_358);
    pFVar8 = this->OneFrameResources->PrimitiveUniformBuffer;
    (**(code **)(*(longlong *)&pFVar8->field_0x8 + 0x18))(&pFVar8->field_0x8,local_7e0);
    this->VertexBuffer = (FPooledDynamicMeshVertexBuffer *)0x0;
    this->IndexBuffer = (FPooledDynamicMeshIndexBuffer *)0x0;
  }
  pFVar6 = this->OneFrameResources->IndexBuffer;
  if ((pFVar6 == (FPooledDynamicMeshIndexBuffer *)0x0) ||
     (local_7e8 = '\x01', (pFVar6->Indices).ArrayNum == 0)) {
    local_7e8 = '\0';
  }
  pFVar3 = this->OneFrameResources->VertexBuffer;
  if ((pFVar3 == (FPooledDynamicMeshVertexBuffer *)0x0) ||
     (local_7e7 = '\x01', (pFVar3->Vertices).ArrayNum == 0)) {
    local_7e7 = '\0';
  }
  iVar17 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           ::Add(&param_8->MeshBatchStorage,1);
  iVar2 = (param_8->MeshBatchStorage).Chunks.Array.ArrayNum;
  uVar27 = iVar17 / 0x49;
  uVar26 = uVar30;
  if ((int)uVar27 < iVar2) {
    uVar26 = ~uVar27 >> 0x1f;
  }
  if (uVar26 == 0) {
    local_7f8 = (longlong)(int)uVar27;
    local_7f0 = (longlong)iVar2;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FVar33 = (ForElementType<FMeshBatchElement>)
           ((ulonglong)(uint)(iVar17 % 0x49) * 0xe0 +
           (longlong)(param_8->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar27]);
  if (*(int *)((longlong)FVar33 + 0xa0) < 1) {
    local_7f8 = 0;
    local_7f0 = (longlong)*(int *)((longlong)FVar33 + 0xa0);
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FVar32 = FVar33;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar33 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar32 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar33 + 0x98);
  }
  pFVar25 = pFVar31;
  if (local_7e8 != '\0') {
    pFVar25 = (FPooledDynamicMeshVertexFactory *)this->OneFrameResources->IndexBuffer;
  }
  pFVar21 = (FPooledDynamicMeshVertexFactory *)&pFVar25->_padding_;
  if (pFVar25 == (FPooledDynamicMeshVertexFactory *)0x0) {
    pFVar21 = pFVar31;
  }
  *(FPooledDynamicMeshVertexFactory **)((longlong)FVar32 + 0x18) = pFVar21;
  pFVar25 = this->OneFrameResources->VertexFactory;
  pFVar21 = (FPooledDynamicMeshVertexFactory *)&pFVar25->_padding_;
  if (pFVar25 == (FPooledDynamicMeshVertexFactory *)0x0) {
    pFVar21 = pFVar31;
  }
  *(FPooledDynamicMeshVertexFactory **)((longlong)FVar33 + 0xa8) = pFVar21;
  *(FMaterialRenderProxy **)((longlong)FVar33 + 0xb0) = local_7c8;
  pFVar8 = this->OneFrameResources->PrimitiveUniformBuffer;
  pFVar25 = (FPooledDynamicMeshVertexFactory *)&pFVar8->field_0x8;
  if (pFVar8 == (FDynamicMeshPrimitiveUniformBuffer *)0x0) {
    pFVar25 = pFVar31;
  }
  *(FPooledDynamicMeshVertexFactory **)((longlong)FVar32 + 8) = pFVar25;
  uVar27 = ((uint)param_5->CastShadow << 2 ^ *(uint *)((longlong)FVar33 + 0xd4)) & 4 ^
           *(uint *)((longlong)FVar33 + 0xd4);
  *(uint *)((longlong)FVar33 + 0xd4) = uVar27;
  uVar27 = ((uint)param_5->bWireframe << 6 ^ uVar27) & 0x40 ^ uVar27;
  *(uint *)((longlong)FVar33 + 0xd4) = uVar27;
  uVar27 = ((uint)param_5->bCanApplyViewModeOverrides << 0xd ^ uVar27) & 0x2000 ^ uVar27;
  *(uint *)((longlong)FVar33 + 0xd4) = uVar27;
  uVar27 = ((uint)param_5->bUseWireframeSelectionColoring << 0xe ^ uVar27) & 0x4000 ^ uVar27;
  *(uint *)((longlong)FVar33 + 0xd4) = uVar27;
  dVar35 = UE::Math::TMatrix<double>::Determinant(local_7d8);
  *(uint *)((longlong)FVar33 + 0xd4) = (uint)(dVar35 < 0.0) | uVar27 & 0xfffffffe;
  uVar27 = ((param_5->bDisableBackfaceCulling & 1) * 2 ^
           ((uint)(dVar35 < 0.0) | uVar27 & 0xfffffffc)) & 0xfffffc7f;
  uVar27 = ((uint)param_4 << 10 ^ uVar27) & 0x1c00 ^ uVar27;
  *(uint *)((longlong)FVar33 + 0xd4) = uVar27;
  *(uint *)((longlong)FVar33 + 0xd4) =
       ((uint)param_5->bUseSelectionOutline << 0xf ^ uVar27) & 0x8000 ^ uVar27;
  *(int *)((longlong)FVar33 + 0xc0) = param_9.Index;
  if (param_6 == (FDynamicMeshDrawOffset *)0x0) {
    *(undefined4 *)((longlong)FVar32 + 0x58) = 0;
    if (local_7e8 == '\0') {
      uVar27 = uVar30;
      if (local_7e7 != '\0') {
        iVar2 = (this->OneFrameResources->VertexBuffer->Vertices).ArrayNum;
        uVar27 = iVar2 / 3 + (iVar2 >> 0x1f) +
                 (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
      }
    }
    else {
      iVar2 = (this->OneFrameResources->IndexBuffer->Indices).ArrayNum;
      uVar27 = iVar2 / 3 + (iVar2 >> 0x1f) +
               (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
    }
    *(uint *)((longlong)FVar32 + 0x5c) = uVar27;
    *(undefined4 *)((longlong)FVar32 + 0x68) = 0;
    if (local_7e7 != '\0') {
      uVar30 = (this->OneFrameResources->VertexBuffer->Vertices).ArrayNum - 1;
    }
  }
  else {
    *(uint *)((longlong)FVar32 + 0x58) = param_6->FirstIndex;
    *(uint *)((longlong)FVar32 + 0x5c) = param_6->NumPrimitives;
    *(uint *)((longlong)FVar32 + 0x68) = param_6->MinVertexIndex;
    uVar30 = param_6->MaxVertexIndex;
  }
  *(uint *)((longlong)FVar32 + 0x6c) = uVar30;
  FMeshElementCollector::AddMesh(param_8,param_7,(FMeshBatch *)FVar33);
LAB_147b688e4:
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetMesh @ 147b68950

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
FDynamicMeshBuilder::GetMesh
          (FDynamicMeshBuilder *this,TMatrix<double> *param_1,FMaterialRenderProxy *param_2,
          uchar param_3,FDynamicMeshBuilderSettings *param_4,FDynamicMeshDrawOffset *param_5,
          int param_6,FMeshElementCollector *param_7,FHitProxyId param_8)

{
  GetMesh(this,param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// GetMesh @ 147b689b0

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
FDynamicMeshBuilder::GetMesh
          (FDynamicMeshBuilder *this,TMatrix<double> *param_1,FMaterialRenderProxy *param_2,
          uchar param_3,bool param_4,bool param_5,bool param_6,int param_7,
          FMeshElementCollector *param_8,HHitProxy *param_9)

{
  FHitProxyId FVar1;
  
  if (param_9 == (HHitProxy *)0x0) {
    FVar1.Index = -1;
  }
  else {
    FVar1.Index = (param_9->Id).Index;
  }
  param_9._1_1_ = param_4;
  param_9._3_1_ = param_5;
  param_9._0_1_ = 1;
  param_9._2_1_ = 0;
  param_9._5_2_ = 0;
  param_9._7_1_ = 0;
  param_9._4_1_ = 1;
  GetMesh(this,param_1,param_1,param_2,param_3,(FDynamicMeshBuilderSettings *)&param_9,
          (FDynamicMeshDrawOffset *)0x0,param_7,param_8,FVar1);
  return;
}

// GetMesh @ 147b68a70

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
FDynamicMeshBuilder::GetMesh
          (FDynamicMeshBuilder *this,TMatrix<double> *param_1,FMaterialRenderProxy *param_2,
          uchar param_3,bool param_4,bool param_5,bool param_6,int param_7,
          FMeshElementCollector *param_8,FHitProxyId param_9)

{
  FDynamicMeshBuilderSettings local_18 [3];
  
  local_18[0].bDisableBackfaceCulling = param_4;
  local_18[0].bReceivesDecals = param_5;
  local_18[0].bUseSelectionOutline = param_6;
  local_18[0].CastShadow = true;
  local_18[0].bWireframe = false;
  local_18[0].bCanApplyViewModeOverrides = false;
  local_18[0].bUseWireframeSelectionColoring = false;
  local_18[0].bIsFirstPerson = false;
  GetMesh(this,param_1,param_1,param_2,param_3,local_18,(FDynamicMeshDrawOffset *)0x0,param_7,
          param_8,param_9);
  return;
}

// GetMesh @ 147b68b00

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
FDynamicMeshBuilder::GetMesh
          (FDynamicMeshBuilder *this,TMatrix<double> *param_1,FMaterialRenderProxy *param_2,
          uchar param_3,bool param_4,bool param_5,int param_6,FMeshElementCollector *param_7)

{
  FDynamicMeshBuilderSettings local_18 [3];
  
  local_18[0].bDisableBackfaceCulling = param_4;
  local_18[0].bReceivesDecals = param_5;
  local_18[0].CastShadow = true;
  local_18[0].bWireframe = false;
  local_18[0].bCanApplyViewModeOverrides = false;
  local_18[0].bUseWireframeSelectionColoring = false;
  local_18[0].bIsFirstPerson = false;
  local_18[0].bUseSelectionOutline = true;
  GetMesh(this,param_1,param_1,param_2,param_3,local_18,(FDynamicMeshDrawOffset *)0x0,param_6,
          param_7,(FHitProxyId)0xffffffff);
  return;
}

// GetMeshElement @ 147b68b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicMeshBuilder::GetMeshElement
          (FDynamicMeshBuilder *this,TMatrix<double> *param_1,FMaterialRenderProxy *param_2,
          uchar param_3,bool param_4,bool param_5,int param_6,FMeshBuilderOneFrameResources *param_7
          ,FMeshBatch *param_8)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FPrimitiveUniformShaderParameters *pFVar10;
  float *pfVar11;
  FPrimitiveUniformShaderParametersBuilder *this_00;
  FPrimitiveUniformShaderParameters *pFVar12;
  FPrimitiveUniformShaderParameters *pFVar13;
  longlong lVar14;
  FPrimitiveUniformShaderParameters *pFVar15;
  undefined1 auStackY_838 [32];
  undefined1 local_7b8 [664];
  float local_520 [114];
  FPrimitiveUniformShaderParameters local_358;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_838;
  memset((FPrimitiveUniformShaderParametersBuilder *)local_7b8,0,0x460);
  pfVar11 = &(((FPrimitiveUniformShaderParametersBuilder *)local_7b8)->Parameters).
             CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  local_7b8._368_8_ = ___xmm_3f800000000000000000000000000000;
  local_7b8._376_8_ = _UNK_150689648;
  lVar14 = 9;
  local_7b8._448_8_ = ___xmm_3f800000000000000000000000000000;
  local_7b8._456_8_ = _UNK_150689648;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar11 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar11 + -2))->Y = 0.0;
    *pfVar11 = 0.0;
    pfVar11[1] = 1.0;
    pfVar11 = pfVar11 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  this_00 = FPrimitiveUniformShaderParametersBuilder::Defaults
                      ((FPrimitiveUniformShaderParametersBuilder *)local_7b8);
  dVar1 = param_1->M[0][1];
  (this_00->AbsoluteLocalToWorld).M[0][0] = param_1->M[0][0];
  (this_00->AbsoluteLocalToWorld).M[0][1] = dVar1;
  dVar1 = param_1->M[0][3];
  (this_00->AbsoluteLocalToWorld).M[0][2] = param_1->M[0][2];
  (this_00->AbsoluteLocalToWorld).M[0][3] = dVar1;
  dVar1 = param_1->M[1][1];
  (this_00->AbsoluteLocalToWorld).M[1][0] = param_1->M[1][0];
  (this_00->AbsoluteLocalToWorld).M[1][1] = dVar1;
  dVar1 = param_1->M[1][3];
  (this_00->AbsoluteLocalToWorld).M[1][2] = param_1->M[1][2];
  (this_00->AbsoluteLocalToWorld).M[1][3] = dVar1;
  dVar1 = param_1->M[2][1];
  (this_00->AbsoluteLocalToWorld).M[2][0] = param_1->M[2][0];
  (this_00->AbsoluteLocalToWorld).M[2][1] = dVar1;
  dVar1 = param_1->M[2][3];
  (this_00->AbsoluteLocalToWorld).M[2][2] = param_1->M[2][2];
  (this_00->AbsoluteLocalToWorld).M[2][3] = dVar1;
  dVar1 = param_1->M[3][1];
  (this_00->AbsoluteLocalToWorld).M[3][0] = param_1->M[3][0];
  (this_00->AbsoluteLocalToWorld).M[3][1] = dVar1;
  dVar1 = param_1->M[3][3];
  (this_00->AbsoluteLocalToWorld).M[3][2] = param_1->M[3][2];
  (this_00->AbsoluteLocalToWorld).M[3][3] = dVar1;
  dVar1 = param_1->M[3][1];
  dVar2 = param_1->M[3][2];
  (this_00->AbsoluteActorWorldPosition).field0_0x0._s_0.X = param_1->M[3][0];
  (this_00->AbsoluteActorWorldPosition).field0_0x0._s_0.Y = dVar1;
  (this_00->AbsoluteActorWorldPosition).field0_0x0._s_0.Z = dVar2;
  this_00->ObjectRadius = 0.0;
  (this_00->AbsoluteObjectWorldPosition).field0_0x0._s_0.X = 0.0;
  (this_00->AbsoluteObjectWorldPosition).field0_0x0._s_0.Y = 0.0;
  (this_00->Parameters).ObjectBoundsX = 0.0;
  (this_00->AbsoluteObjectWorldPosition).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this_00->Parameters).LocalObjectBoundsMin.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this_00->Parameters).LocalObjectBoundsMax.field0_0x0 + 8) = 0;
  *(undefined8 *)&(this_00->Parameters).LocalObjectBoundsMin.field0_0x0 = 0;
  *(undefined8 *)&(this_00->Parameters).LocalObjectBoundsMax.field0_0x0 = 0;
  this_00->bReceivesDecals = 0;
  *(uint *)&this_00->field_0x454 = *(uint *)&this_00->field_0x454 | (param_5 | 8) << 3;
  pFVar12 = FPrimitiveUniformShaderParametersBuilder::Build(this_00);
  lVar14 = 6;
  pFVar10 = &local_358;
  do {
    pFVar15 = pFVar10;
    pFVar13 = pFVar12;
    pFVar10 = (FPrimitiveUniformShaderParameters *)((pFVar15->RelativeWorldToLocal).M + 2);
    uVar7 = pFVar13->InstanceSceneDataOffset;
    uVar8 = pFVar13->NumInstanceSceneDataEntries;
    iVar9 = pFVar13->SingleCaptureIndex;
    uVar3 = *(undefined8 *)&(pFVar13->PositionHigh).field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(pFVar13->PositionHigh).field0_0x0 + 8);
    pFVar12 = (FPrimitiveUniformShaderParameters *)((pFVar13->RelativeWorldToLocal).M + 2);
    pFVar15->Flags = pFVar13->Flags;
    pFVar15->InstanceSceneDataOffset = uVar7;
    pFVar15->NumInstanceSceneDataEntries = uVar8;
    pFVar15->SingleCaptureIndex = iVar9;
    uVar5 = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[0];
    uVar6 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[0] + 2);
    *(undefined8 *)&(pFVar15->PositionHigh).field0_0x0 = uVar3;
    *(undefined8 *)((longlong)&(pFVar15->PositionHigh).field0_0x0 + 8) = uVar4;
    uVar3 = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[1];
    uVar4 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[1] + 2);
    *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[0] = uVar5;
    *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[0] + 2) = uVar6;
    uVar5 = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[2];
    uVar6 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[2] + 2);
    *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[1] = uVar3;
    *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[1] + 2) = uVar4;
    uVar3 = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[3];
    uVar4 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[3] + 2);
    *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[2] = uVar5;
    *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[2] + 2) = uVar6;
    uVar5 = *(undefined8 *)(pFVar13->RelativeWorldToLocal).M[0];
    uVar6 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[0] + 2);
    *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[3] = uVar3;
    *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[3] + 2) = uVar4;
    uVar3 = *(undefined8 *)(pFVar13->RelativeWorldToLocal).M[1];
    uVar4 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[1] + 2);
    *(undefined8 *)(pFVar15->RelativeWorldToLocal).M[0] = uVar5;
    *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[0] + 2) = uVar6;
    *(undefined8 *)(pFVar15->RelativeWorldToLocal).M[1] = uVar3;
    *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[1] + 2) = uVar4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar7 = pFVar12->InstanceSceneDataOffset;
  uVar3 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[2] + 2);
  uVar4 = *(undefined8 *)(pFVar13->RelativeWorldToLocal).M[3];
  uVar5 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[3] + 2);
  pFVar10->Flags = pFVar12->Flags;
  pFVar10->InstanceSceneDataOffset = uVar7;
  *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[2] + 2) = uVar3;
  *(undefined8 *)(pFVar15->RelativeWorldToLocal).M[3] = uVar4;
  *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[3] + 2) = uVar5;
  GetMeshElement(this,&local_358,param_2,param_3,param_4,param_6,param_7,param_8);
  return;
}

// GetMeshElement @ 147b68df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshBuilder::GetMeshElement
          (FDynamicMeshBuilder *this,FPrimitiveUniformShaderParameters *param_1,
          FMaterialRenderProxy *param_2,uchar param_3,bool param_4,int param_5,
          FMeshBuilderOneFrameResources *param_6,FMeshBatch *param_7)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  FPooledDynamicMeshVertexBuffer *pFVar4;
  FPooledDynamicMeshIndexBuffer *pFVar5;
  ForElementType<FMeshBatchElement> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FPooledDynamicMeshVertexFactory *pFVar11;
  FPooledDynamicMeshVertexFactory *pFVar12;
  FDynamicMeshPrimitiveUniformBuffer *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  FPooledDynamicMeshVertexFactory *pFVar16;
  ForElementType<FMeshBatchElement> FVar17;
  bool bVar18;
  float fVar19;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId953,"FDynamicMeshBuilder::GetMeshElement",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x3b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId953);
  }
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = this->VertexBuffer;
  if ((pFVar4->Vertices).ArrayNum < 1) goto LAB_147b69164;
  pFVar16 = (FPooledDynamicMeshVertexFactory *)0x0;
  iVar14 = 0;
  if (pFVar4 == (FPooledDynamicMeshVertexBuffer *)0x0) {
    if (this->IndexBuffer != (FPooledDynamicMeshIndexBuffer *)0x0) {
      param_6->VertexBuffer = (FPooledDynamicMeshVertexBuffer *)0x0;
      param_6->IndexBuffer = this->IndexBuffer;
      goto LAB_147b68ef3;
    }
  }
  else {
    param_6->VertexBuffer = pFVar4;
    param_6->IndexBuffer = this->IndexBuffer;
    (**(code **)(pFVar4->_padding_ + 0x18))(&pFVar4->_padding_,0x154be5ed0);
LAB_147b68ef3:
    pFVar5 = param_6->IndexBuffer;
    if ((pFVar5 != (FPooledDynamicMeshIndexBuffer *)0x0) &&
       ((this->IndexBuffer->Indices).ArrayNum != 0)) {
      (**(code **)(pFVar5->_padding_ + 0x18))(&pFVar5->_padding_,0x154be5ed0);
    }
    pFVar11 = ::operator_new(0x240);
    pFVar12 = pFVar16;
    if (pFVar11 != (FPooledDynamicMeshVertexFactory *)0x0) {
      pFVar12 = FPooledDynamicMeshVertexFactory::FPooledDynamicMeshVertexFactory
                          (pFVar11,this->FeatureLevel,this->VertexBuffer);
    }
    param_6->VertexFactory = pFVar12;
    (**(code **)(pFVar12->_padding_ + 0x18))(&pFVar12->_padding_,0x154be5ed0);
    pFVar13 = ::operator_new(0x40);
    pFVar12 = pFVar16;
    if (pFVar13 != (FDynamicMeshPrimitiveUniformBuffer *)0x0) {
      *(undefined8 *)pFVar13 = 0;
      *(undefined8 *)&pFVar13->field_0x8 = 0;
      *(undefined8 *)&pFVar13->field_0x10 = 0;
      *(undefined8 *)&pFVar13->field_0x18 = 0;
      *(undefined8 *)&pFVar13->field_0x20 = 0;
      *(undefined8 *)&pFVar13->field_0x28 = 0;
      *(undefined8 *)&pFVar13->field_0x30 = 0;
      *(undefined8 *)&pFVar13->field_0x38 = 0;
      pFVar12 = (FPooledDynamicMeshVertexFactory *)
                FDynamicMeshPrimitiveUniformBuffer::FDynamicMeshPrimitiveUniformBuffer(pFVar13);
    }
    param_6->PrimitiveUniformBuffer = (FDynamicMeshPrimitiveUniformBuffer *)pFVar12;
    TUniformBuffer<FPrimitiveUniformShaderParameters>::SetContents
              ((TUniformBuffer<FPrimitiveUniformShaderParameters> *)&pFVar12->_padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,param_1);
    puVar15 = &param_6->PrimitiveUniformBuffer->field_0x8;
    (**(code **)(*(longlong *)puVar15 + 0x18))(puVar15,0x154be5ed0);
    this->VertexBuffer = (FPooledDynamicMeshVertexBuffer *)0x0;
    this->IndexBuffer = (FPooledDynamicMeshIndexBuffer *)0x0;
  }
  if ((param_6->IndexBuffer == (FPooledDynamicMeshIndexBuffer *)0x0) ||
     ((param_6->IndexBuffer->Indices).ArrayNum == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((param_6->VertexBuffer == (FPooledDynamicMeshVertexBuffer *)0x0) ||
     ((param_6->VertexBuffer->Vertices).ArrayNum == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (((param_7->Elements).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar6 = (param_7->Elements).AllocatorInstance.SecondaryData;
  FVar17 = (ForElementType<FMeshBatchElement>)param_7;
  if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar17 = FVar6;
  }
  pFVar12 = pFVar16;
  if (bVar9) {
    pFVar12 = (FPooledDynamicMeshVertexFactory *)param_6->IndexBuffer;
  }
  pFVar11 = (FPooledDynamicMeshVertexFactory *)&pFVar12->_padding_;
  if (pFVar12 == (FPooledDynamicMeshVertexFactory *)0x0) {
    pFVar11 = pFVar16;
  }
  *(FPooledDynamicMeshVertexFactory **)((longlong)FVar17 + 0x18) = pFVar11;
  pFVar12 = param_6->VertexFactory;
  param_7->MaterialRenderProxy = param_2;
  pFVar11 = (FPooledDynamicMeshVertexFactory *)&pFVar12->_padding_;
  if (pFVar12 == (FPooledDynamicMeshVertexFactory *)0x0) {
    pFVar11 = pFVar16;
  }
  param_7->VertexFactory = (FVertexFactory *)pFVar11;
  pFVar13 = param_6->PrimitiveUniformBuffer;
  puVar1 = (uchar *)((longlong)FVar17 + 0x58);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  pFVar12 = (FPooledDynamicMeshVertexFactory *)&pFVar13->field_0x8;
  if (pFVar13 == (FDynamicMeshPrimitiveUniformBuffer *)0x0) {
    pFVar12 = pFVar16;
  }
  *(FPooledDynamicMeshVertexFactory **)((longlong)FVar17 + 8) = pFVar12;
  if (bVar9) {
    iVar2 = (param_6->IndexBuffer->Indices).ArrayNum;
    puVar1 = (uchar *)((longlong)FVar17 + 0x68);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    *(int *)((longlong)FVar17 + 0x5c) =
         iVar2 / 3 + (iVar2 >> 0x1f) +
         (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
    if (bVar8) {
      iVar14 = (param_6->VertexBuffer->Vertices).ArrayNum + -1;
    }
  }
  else if (bVar8) {
    iVar14 = (param_6->VertexBuffer->Vertices).ArrayNum;
    puVar1 = (uchar *)((longlong)FVar17 + 0x68);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    *(int *)((longlong)FVar17 + 0x5c) =
         iVar14 / 3 + (iVar14 >> 0x1f) +
         (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f);
    iVar14 = (param_6->VertexBuffer->Vertices).ArrayNum + -1;
  }
  else {
    puVar1 = (uchar *)((longlong)FVar17 + 0x5c);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = (uchar *)((longlong)FVar17 + 0x68);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
  }
  *(int *)((longlong)FVar17 + 0x6c) = iVar14;
  fVar19 = UE::Math::TMatrix<float>::Determinant(&param_1->LocalToRelativeWorld);
  uVar3 = *(uint *)&param_7->field_0xd4;
  (param_7->BatchHitProxyId).Index = -1;
  *(uint *)&param_7->field_0xd4 =
       ((param_3 & 7) << 10 ^ ((uint)(fVar19 < 0.0) | uVar3 & 0xffffe07c | (uint)param_4 * 2)) &
       0xffff7fff;
LAB_147b69164:
  if (!bVar18) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ReserveTriangles @ 147b85510

void __thiscall FDynamicMeshBuilder::ReserveTriangles(FDynamicMeshBuilder *this,int param_1)

{
  FPooledDynamicMeshIndexBuffer *pFVar1;
  uint uVar2;
  
  pFVar1 = this->IndexBuffer;
  uVar2 = param_1 * 3;
  if (-1 < (int)uVar2) {
    if ((pFVar1->Indices).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar2,&(pFVar1->Indices).AllocatorInstance,(pFVar1->Indices).ArrayNum,
                 &(pFVar1->Indices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ReserveVertices @ 147b85560

void __thiscall FDynamicMeshBuilder::ReserveVertices(FDynamicMeshBuilder *this,int param_1)

{
  FPooledDynamicMeshVertexBuffer *pFVar1;
  
  pFVar1 = this->VertexBuffer;
  if (-1 < param_1) {
    if ((pFVar1->Vertices).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,4,param_1,&(pFVar1->Vertices).AllocatorInstance,(pFVar1->Vertices).ArrayNum,
                 &(pFVar1->Vertices).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

