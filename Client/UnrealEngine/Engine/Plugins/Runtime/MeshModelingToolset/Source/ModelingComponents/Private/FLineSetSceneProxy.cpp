// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// FLineSetSceneProxy @ 14ca637e0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLineSetSceneProxy * __thiscall
FLineSetSceneProxy::FLineSetSceneProxy(FLineSetSceneProxy *this,ULineSetComponent *param_1)

{
  uint uVar1;
  int *piVar2;
  TArray<FLineMeshBatchData,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  uchar *puVar9;
  FStaticMeshVertexDataInterface FVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  bool bVar17;
  EShaderPlatform EVar18;
  FLineSetSceneProxy *pFVar19;
  longlong lVar20;
  longlong lVar21;
  UMaterial *pUVar22;
  undefined8 uVar23;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar24;
  ulonglong uVar25;
  undefined ***pppuVar26;
  uint uVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *pTVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  undefined1 *puVar35;
  uint *puVar36;
  TBitArray<FDefaultBitArrayAllocator> *pTVar37;
  uchar *puVar38;
  ushort *puVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [2];
  ushort local_2e6;
  ushort local_2e4;
  ushort local_2e2;
  ushort local_2e0;
  ushort local_2de;
  ushort local_2dc;
  ushort local_2da;
  ushort local_2d8 [2];
  undefined4 local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  int local_2b8;
  uint uStack_2b4;
  undefined1 *puStack_2b0;
  undefined4 local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  undefined8 local_290;
  float local_288;
  float fStack_284;
  TVector<float>_u_0 local_278;
  TVector<float>_u_0 local_268;
  TVector<float>_u_0 local_258;
  TVector<float>_u_0 local_248;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  int local_210;
  int local_208;
  TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator> *local_200;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  TVector<float>_u_0 local_1e8;
  TVector<float>_u_0 local_1d8;
  TVector<float>_u_0 local_1c8;
  TVector<float>_u_0 local_1b8;
  TVector<float>_u_0 local_1a8;
  TVector<float>_u_0 local_198;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  int local_168;
  double local_160;
  code *local_158 [2];
  undefined **local_148;
  FLineSetSceneProxy *pFStack_140;
  undefined8 local_138;
  undefined ***local_130;
  undefined1 local_128 [16];
  undefined **local_118;
  FLineSetSceneProxy *pFStack_110;
  undefined8 local_108;
  undefined ***local_100;
  byte local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_290 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FLineSetSceneProxy__6B_;
  pTVar3 = &this->MeshBatchDatas;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MeshBatchDatas).ArrayNum = 0;
  (this->MeshBatchDatas).ArrayMax = 0;
  pcVar7 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar18 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar7)(param_1,&this->MaterialRelevance,EVar18);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FPointSetSceneProxy");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  iVar29 = *(int *)&(param_1->Lines).field_0x8 - *(int *)&(param_1->Lines).field_0x34;
  local_2d0 = iVar29 * 4;
  FPositionVertexBuffer::Init(&(this->VertexBuffers).PositionVertexBuffer,local_2d0,true);
  FStaticMeshVertexBuffer::Init(&(this->VertexBuffers).StaticMeshVertexBuffer,iVar29 * 4,1,true);
  FColorVertexBuffer::Init(&(this->VertexBuffers).ColorVertexBuffer,iVar29 * 4,true);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&(this->IndexBuffer).Indices,iVar29 * 6,Default);
  if (0 < *(int *)&(param_1->Lines).field_0x8 - *(int *)&(param_1->Lines).field_0x34) {
    iVar29 = (this->MeshBatchDatas).ArrayNum;
    piVar2 = &(this->MeshBatchDatas).ArrayMax;
    if (iVar29 == *piVar2) {
      iVar29 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->MeshBatchDatas).ArrayNum = iVar29 + 1;
    *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar29 * 0x18) = 0;
    iVar29 = (this->MeshBatchDatas).ArrayNum;
    uVar27 = iVar29 - 1;
    uVar33 = 0;
    if ((int)uVar27 < iVar29) {
      uVar33 = ~uVar27 >> 0x1f;
    }
    if ((uVar33 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
      return pFVar19;
    }
    lVar20 = (longlong)(this->MeshBatchDatas).ArrayNum;
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    *(undefined4 *)(pFVar8 + lVar20 * 0x18 + -8) = 0;
    *(uint *)(pFVar8 + lVar20 * 0x18 + -4) = local_2d0 - 1;
    *(undefined4 *)(pFVar8 + lVar20 * 0x18 + -0x10) = 0;
    *(int *)(pFVar8 + lVar20 * 0x18 + -0xc) =
         (*(int *)&(param_1->Lines).field_0x8 - *(int *)&(param_1->Lines).field_0x34) * 2;
    lVar21 = (**(code **)(param_1->_padding_ + 0x690))(param_1,0);
    if (lVar21 == 0) {
      pUVar22 = UMaterial::GetDefaultMaterial(MD_Surface);
    }
    else {
      pUVar22 = (UMaterial *)(**(code **)(param_1->_padding_ + 0x690))(param_1,0);
    }
    uVar23 = (**(code **)(pUVar22->_padding_ + 0x310))(pUVar22);
    *(undefined8 *)(pFVar8 + lVar20 * 0x18 + -0x18) = uVar23;
    pTVar31 = &param_1->Lines;
    iVar29 = *(int *)&(param_1->Lines).field_0x28;
    pTVar37 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Lines).field_0x10;
    local_2b8 = 0;
    uStack_2b4 = 1;
    iStack_2a4 = 0;
    iStack_2a0 = 0;
    if (iVar29 != 0) {
      puVar36 = *(uint **)&(param_1->Lines).field_0x20;
      if (puVar36 == (uint *)0x0) {
        puVar36 = (uint *)pTVar37;
      }
      uVar33 = *puVar36;
      iStack_2a0 = 0;
      local_2b8 = 0;
      while (uVar33 == 0) {
        iStack_2a0 = iStack_2a0 + 0x20;
        lVar20 = (longlong)local_2b8;
        local_2b8 = local_2b8 + 1;
        if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2b8) goto LAB_14ca63b0c;
        uVar33 = puVar36[lVar20 + 1];
      }
      uStack_2b4 = -uVar33 & uVar33;
      uVar25 = (ulonglong)uStack_2b4 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_208 = (int)lVar20;
      iStack_2a4 = local_208 + -1 + iStack_2a0;
      if (iVar29 < iStack_2a4) {
LAB_14ca63b0c:
        iStack_2a4 = iVar29;
      }
    }
    local_2a8 = 0xffffffff;
    uVar33 = *(uint *)&(param_1->Lines).field_0x28;
    local_210 = *(int *)&(param_1->Lines).field_0x8 - *(int *)&(param_1->Lines).field_0x34;
    local_230._padding_ = CONCAT44(uStack_2b4,local_2b8);
    local_230.CurrentBitIndex = iStack_2a4;
    local_230.UnvisitedBitMask = 0xffffffff;
    local_230._28_4_ = uStack_29c;
    local_230.BaseBitIndex = iStack_2a0;
    iVar32 = (int)uVar33 >> 5;
    uVar27 = uVar33 & 0xffffffe0;
    local_2c8 = uVar33;
    puStack_2b0 = (undefined1 *)pTVar37;
    local_238 = pTVar31;
    local_230.Array = pTVar37;
    local_200 = pTVar31;
    local_1f8 = pTVar37;
    if ((((int)uVar33 < 0) || (iVar29 < (int)uVar33)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
      return pFVar19;
    }
    fVar16 = __real_3f800000;
    uVar34 = *(uint *)&(param_1->Lines).field_0x28;
    if (uVar33 != uVar34) {
      puVar35 = *(undefined1 **)&(param_1->Lines).field_0x20;
      if (puVar35 == (undefined1 *)0x0) {
        puVar35 = (undefined1 *)pTVar37;
      }
      uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar32 * 4);
      while (uVar33 == 0) {
        lVar20 = (longlong)iVar32;
        uVar27 = uVar27 + 0x20;
        iVar32 = iVar32 + 1;
        uVar33 = uVar34;
        local_2c8 = uVar34;
        if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
        goto LAB_14ca63c06;
        uVar33 = *(uint *)(puVar35 + lVar20 * 4 + 4);
      }
      uVar25 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_168 = (int)lVar20;
      uVar33 = local_168 + -1 + uVar27;
      local_2c8 = uVar33;
      if ((int)uVar34 < (int)uVar33) {
        uVar33 = uVar34;
        local_2c8 = uVar34;
      }
    }
LAB_14ca63c06:
    uVar27 = 2;
    uVar34 = 2;
    local_2cc = 2;
    local_298 = 8;
    while( true ) {
      dVar6 = __real_3e45798ee0000000;
      if (*(int *)&pTVar31->field_0x8 - *(int *)&pTVar31->field_0x34 != local_210) {
        local_2e8[0] = 0;
        `TSparseArray<FRenderableLine,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='
        ::__l2::<lambda_1>::operator()(local_2e8);
      }
      if (((local_230.CurrentBitIndex == uVar33) && (local_230.Array == pTVar37)) &&
         (pTVar31 == local_200)) break;
      lVar20 = *(longlong *)pTVar31;
      lVar21 = (longlong)local_230.CurrentBitIndex * 0x40;
      dVar4 = *(double *)(lVar21 + 8 + lVar20);
      dVar11 = *(double *)(lVar21 + 0x18 + lVar20) - *(double *)(lVar21 + lVar20);
      dVar5 = *(double *)(lVar21 + 0x10 + lVar20);
      dVar12 = *(double *)(lVar21 + 0x20 + lVar20) - dVar4;
      dVar13 = *(double *)(lVar21 + 0x28 + lVar20) - dVar5;
      dVar42 = dVar12 * dVar12 + dVar11 * dVar11 + dVar13 * dVar13;
      uVar23 = dVar11;
      uVar14 = dVar12;
      uVar15 = dVar13;
      if ((dVar42 != __real_3ff0000000000000) &&
         (uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar6 <= dVar42)) {
        local_160 = __real_3ff0000000000000 / SQRT(dVar42);
        uVar23 = dVar11 * local_160;
        uVar14 = dVar12 * local_160;
        uVar15 = dVar13 * local_160;
      }
      puVar9 = (this->VertexBuffers).PositionVertexBuffer.Data;
      local_2c0 = uVar27 - 2;
      fVar40 = *(float *)(lVar21 + 0x34 + lVar20);
      uVar33 = uVar27 - 1;
      fVar41 = *(float *)(lVar21 + 0x38 + lVar20);
      uVar1 = uVar27 + 1;
      uVar25 = (ulonglong)(local_2c0 * (this->VertexBuffers).PositionVertexBuffer.Stride);
      *(float *)(puVar9 + uVar25) = (float)*(double *)(lVar21 + lVar20);
      *(float *)(puVar9 + uVar25 + 4) = (float)dVar4;
      *(float *)(puVar9 + uVar25 + 8) = (float)dVar5;
      uVar25 = (ulonglong)(uVar33 * (this->VertexBuffers).PositionVertexBuffer.Stride);
      dVar6 = *(double *)(lVar21 + 0x20 + lVar20);
      dVar4 = *(double *)(lVar21 + 0x28 + lVar20);
      puVar9 = (this->VertexBuffers).PositionVertexBuffer.Data;
      *(float *)(puVar9 + uVar25) = (float)*(double *)(lVar21 + 0x18 + lVar20);
      *(float *)(puVar9 + uVar25 + 4) = (float)dVar6;
      *(float *)(puVar9 + uVar25 + 8) = (float)dVar4;
      uVar25 = (ulonglong)(uVar27 * (this->VertexBuffers).PositionVertexBuffer.Stride);
      dVar6 = *(double *)(lVar21 + 0x20 + lVar20);
      dVar4 = *(double *)(lVar21 + 0x28 + lVar20);
      puVar9 = (this->VertexBuffers).PositionVertexBuffer.Data;
      *(float *)(puVar9 + uVar25) = (float)*(double *)(lVar21 + 0x18 + lVar20);
      *(float *)(puVar9 + uVar25 + 4) = (float)dVar6;
      *(float *)(puVar9 + uVar25 + 8) = (float)dVar4;
      puVar9 = (this->VertexBuffers).PositionVertexBuffer.Data;
      dVar6 = *(double *)(lVar21 + 8 + lVar20);
      dVar4 = *(double *)(lVar21 + 0x10 + lVar20);
      uVar25 = (ulonglong)(uVar1 * (this->VertexBuffers).PositionVertexBuffer.Stride);
      *(float *)(puVar9 + uVar25) = (float)*(double *)(lVar21 + lVar20);
      *(float *)(puVar9 + uVar25 + 4) = (float)dVar6;
      *(float *)(puVar9 + uVar25 + 8) = (float)dVar4;
      uVar30 = (uint)__xmm_80000000000000008000000000000000;
      uVar43 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      fVar46 = (float)(double)CONCAT44((uint)((ulonglong)uVar23 >> 0x20) ^ uVar43,
                                       (uint)uVar23 ^ uVar30);
      local_1e8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1d8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      fVar44 = (float)(double)CONCAT44((uint)((ulonglong)uVar15 >> 0x20) ^ uVar43,
                                       (uint)uVar15 ^ uVar30);
      fVar45 = (float)(double)CONCAT44((uint)((ulonglong)uVar14 >> 0x20) ^ uVar43,
                                       (uint)uVar14 ^ uVar30);
      local_1e8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1d8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_2d0 = uVar33;
      local_2c4 = uVar1;
      local_288 = fVar40;
      fStack_284 = fVar41;
      local_278._s_0.X = fVar46;
      local_278._s_0.Y = fVar45;
      local_278._s_0.Z = fVar44;
      FStaticMeshVertexBuffer::SetVertexTangents
                (&(this->VertexBuffers).StaticMeshVertexBuffer,local_2c0,
                 (TVector<float> *)&local_1d8._s_0,(TVector<float> *)&local_1e8._s_0,
                 (TVector<float> *)&local_278._s_0);
      local_1c8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1b8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1c8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1b8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_268._s_0.X = fVar46;
      local_268._s_0.Y = fVar45;
      local_268._s_0.Z = fVar44;
      FStaticMeshVertexBuffer::SetVertexTangents
                (&(this->VertexBuffers).StaticMeshVertexBuffer,uVar33,
                 (TVector<float> *)&local_1b8._s_0,(TVector<float> *)&local_1c8._s_0,
                 (TVector<float> *)&local_268._s_0);
      local_1a8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_198._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_198._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_258._s_0.X = (float)(double)uVar23;
      local_258._s_0.Y = (float)(double)uVar14;
      local_258._s_0.Z = (float)(double)uVar15;
      FStaticMeshVertexBuffer::SetVertexTangents
                (&(this->VertexBuffers).StaticMeshVertexBuffer,uVar27,
                 (TVector<float> *)&local_198._s_0,(TVector<float> *)&local_1a8._s_0,
                 (TVector<float> *)&local_258._s_0);
      local_188._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_178._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_188._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_178._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_248._s_0.X = (float)(double)uVar23;
      local_248._s_0.Y = (float)(double)uVar14;
      local_248._s_0.Z = (float)(double)uVar15;
      FStaticMeshVertexBuffer::SetVertexTangents
                (&(this->VertexBuffers).StaticMeshVertexBuffer,uVar1,
                 (TVector<float> *)&local_178._s_0,(TVector<float> *)&local_188._s_0,
                 (TVector<float> *)&local_248._s_0);
      puVar9 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      uVar23 = CONCAT44(fStack_284,local_288);
      lVar28 = (ulonglong)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)(uVar27 - 2);
      FVar10 = *(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar39 = (ushort *)(puVar9 + lVar28 * 4);
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar39 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar39 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        local_2e6 = 0;
        FGenericPlatformMath::StoreHalf(&local_2e6,fVar40);
        *puVar39 = local_2e6;
        local_2e4 = 0;
        FGenericPlatformMath::StoreHalf(&local_2e4,fVar41);
        puVar39[1] = local_2e4;
      }
      else {
        puVar38 = puVar9 + lVar28 * 8;
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar38 + 8) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar38 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined8 *)puVar38 = uVar23;
      }
      puVar9 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar28 = (ulonglong)local_2d0 *
               (ulonglong)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
      FVar10 = *(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar39 = (ushort *)(puVar9 + lVar28 * 4);
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar39 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar39 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        local_2e2 = 0;
        FGenericPlatformMath::StoreHalf(&local_2e2,fVar40);
        *puVar39 = local_2e2;
        local_2e0 = 0;
        FGenericPlatformMath::StoreHalf(&local_2e0,fVar41);
        puVar39[1] = local_2e0;
      }
      else {
        puVar38 = puVar9 + lVar28 * 8;
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar38 + 8) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar38 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined8 *)puVar38 = uVar23;
      }
      puVar9 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar28 = (ulonglong)local_2cc *
               (ulonglong)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
      FVar10 = *(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar39 = (ushort *)(puVar9 + lVar28 * 4);
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar39 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar39 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        local_2de = 0;
        FGenericPlatformMath::StoreHalf(&local_2de,fVar40);
        *puVar39 = local_2de;
        local_2dc = 0;
        FGenericPlatformMath::StoreHalf(&local_2dc,fVar41);
        puVar39[1] = local_2dc;
      }
      else {
        puVar38 = puVar9 + lVar28 * 8;
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar38 + 8) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar38 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined8 *)puVar38 = uVar23;
      }
      puVar9 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar28 = (ulonglong)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)local_2c4;
      FVar10 = *(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
      if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        puVar39 = (ushort *)(puVar9 + lVar28 * 4);
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar39 + 2) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x166,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar39 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x167,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        local_2da = 0;
        FGenericPlatformMath::StoreHalf(&local_2da,fVar40);
        *puVar39 = local_2da;
        local_2d8[0] = 0;
        FGenericPlatformMath::StoreHalf(local_2d8,fVar41);
        puVar39[1] = local_2d8[0];
      }
      else {
        puVar38 = puVar9 + lVar28 * 8;
        lVar28 = (**(code **)((longlong)FVar10 + 0x50))();
        if ((puVar9 + lVar28 < puVar38 + 8) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15d,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        if ((puVar38 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x15e,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined8 *)puVar38 = uVar23;
      }
      uVar1 = local_2c0;
      uVar27 = local_2cc;
      uVar33 = local_2d0;
      fVar40 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar21 + 0x30 + lVar20)];
      if (fVar40 <= 0.0) {
        fVar40 = 0.0;
      }
      if (fVar16 <= fVar40) {
        fVar40 = fVar16;
      }
      fVar41 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar21 + 0x31 + lVar20)];
      if (fVar41 <= 0.0) {
        fVar41 = 0.0;
      }
      if (fVar16 <= fVar41) {
        fVar41 = fVar16;
      }
      fVar44 = FLinearColor::sRGBToLinearTable[*(byte *)(lVar21 + 0x32 + lVar20)];
      if (fVar44 <= 0.0) {
        fVar44 = 0.0;
      }
      if (fVar16 <= fVar44) {
        fVar44 = fVar16;
      }
      iVar29 = local_2cc + 1;
      fVar45 = (float)*(byte *)(lVar21 + 0x33 + lVar20) * __real_3b808081;
      if (fVar45 <= 0.0) {
        fVar45 = 0.0;
      }
      if (fVar16 <= fVar45) {
        fVar45 = fVar16;
      }
      local_2d4 = CONCAT13((char)(int)(fVar45 * __real_437f0000 + __real_3f000000),
                           CONCAT12((char)(int)(fVar44 * __real_437f0000 + __real_3f000000),
                                    CONCAT11((char)(int)(fVar41 * __real_437f0000 + __real_3f000000)
                                             ,(char)(int)(fVar40 * __real_437f0000 + __real_3f000000
                                                         ))));
      *(undefined4 *)
       ((this->VertexBuffers).ColorVertexBuffer.Data +
       local_2c0 * (this->VertexBuffers).ColorVertexBuffer.Stride) = local_2d4;
      *(undefined4 *)
       ((this->VertexBuffers).ColorVertexBuffer.Data +
       local_2d0 * (this->VertexBuffers).ColorVertexBuffer.Stride) = local_2d4;
      *(undefined4 *)
       ((this->VertexBuffers).ColorVertexBuffer.Data +
       local_2cc * (this->VertexBuffers).ColorVertexBuffer.Stride) = local_2d4;
      *(undefined4 *)
       ((this->VertexBuffers).ColorVertexBuffer.Data +
       iVar29 * (this->VertexBuffers).ColorVertexBuffer.Stride) = local_2d4;
      uVar30 = 0;
      if ((int)(uVar34 - 2) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar30 = ~(uVar34 - 2) >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
        return pFVar19;
      }
      lVar20 = local_298;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + local_298 + -8) = uVar1;
      uVar30 = 0;
      if ((int)(uVar34 - 1) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar30 = ~(uVar34 - 1) >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
        return pFVar19;
      }
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + lVar20 + -4) = uVar33;
      uVar30 = 0;
      uVar33 = uVar30;
      if ((int)uVar34 < (this->IndexBuffer).Indices.ArrayNum) {
        uVar33 = ~uVar34 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
        return pFVar19;
      }
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + lVar20) = uVar27;
      uVar33 = uVar30;
      if ((int)(uVar34 + 1) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar33 = ~(uVar34 + 1) >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
        return pFVar19;
      }
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + lVar20 + 4) = uVar27;
      uVar33 = uVar30;
      if ((int)(uVar34 + 2) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar33 = ~(uVar34 + 2) >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
        return pFVar19;
      }
      *(int *)((this->IndexBuffer).Indices.AllocatorInstance.Data + lVar20 + 8) = iVar29;
      if ((int)(uVar34 + 3) < (this->IndexBuffer).Indices.ArrayNum) {
        uVar30 = ~(uVar34 + 3) >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
        return pFVar19;
      }
      uVar27 = uVar27 + 4;
      uVar34 = uVar34 + 6;
      *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + lVar20 + 0xc) = uVar1;
      local_298 = lVar20 + 0x18;
      local_230.UnvisitedBitMask = local_230.UnvisitedBitMask & ~local_230._padding_._4_4_;
      local_2cc = uVar27;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
      pTVar31 = local_238;
      pTVar37 = local_1f8;
      uVar33 = local_2c8;
    }
  }
  local_148 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___0FLineSetSceneProxy__QEAA_PEAVULineSetComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_130 = (undefined ***)0x0;
  local_158[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FLineSetSceneProxy::FLineSetSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFStack_140 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLineSetSceneProxy::FLineSetSceneProxy_::__l2::TSTR_LineSetVertexBuffersInit117>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_158);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_128._0_8_ = local_158[0];
    local_100 = local_130;
    local_118 = local_148;
    pFStack_110 = pFStack_140;
    local_108 = local_138;
    local_158[0] = (code *)0x0;
    local_f8 = 2;
    pFVar24 = (FRenderCommandTag *)
              TRenderCommandTag<`FLineSetSceneProxy::FLineSetSceneProxy'::__l2::TSTR_LineSetVertexBuffersInit117>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_128,pFVar24);
    uVar25 = (ulonglong)local_f8;
    if ((2 < uVar25) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      pFVar19 = (FLineSetSceneProxy *)(*pcVar7)();
      return pFVar19;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar25] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_128._0_8_ != (code *)0x0) {
        pppuVar26 = (undefined ***)(local_128 + 0x10);
        if (local_100 != (undefined ***)0x0) {
          pppuVar26 = local_100;
        }
        (*(code *)(*pppuVar26)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar25])(local_128);
    }
  }
  if (local_158[0] != (code *)0x0) {
    pppuVar26 = &local_148;
    if (local_130 != (undefined ***)0x0) {
      pppuVar26 = local_130;
    }
    (*(code *)(*pppuVar26)[2])();
  }
  return this;
}

// ~FLineSetSceneProxy @ 14ca6ad10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLineSetSceneProxy::~FLineSetSceneProxy(FLineSetSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FLineSetSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  pFVar1 = (this->MeshBatchDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14ca6d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FLineSetSceneProxy::FLineSetSceneProxy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x580) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x4c8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x4c8),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x5d0) + 0x18))
            ((longlong *)(*(longlong *)this + 0x5d0),param_1);
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0x580),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4c8),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4c8),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x5d0),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)this + 0x298),(FRHICommandListBase *)param_1,
             &local_e8);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x298) + 0x18))
            ((longlong *)(*(longlong *)this + 0x298),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x620) + 0x18))
            ((longlong *)(*(longlong *)this + 0x620),param_1);
  return;
}

// CanBeOccluded @ 14ca7d630

bool __thiscall FLineSetSceneProxy::CanBeOccluded(FLineSetSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 14ca8e850

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
FLineSetSceneProxy::GetDynamicMeshElements
          (FLineSetSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  int iVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FDynamicPrimitiveUniformBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  TStatIdData *pTVar16;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar17;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar18;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  ForElementType<FMeshBatchElement> FVar23;
  ForElementType<FMeshBatchElement> FVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_97 [7];
  uint local_90;
  uint uStack_8c;
  FColor_u_0 local_88 [2];
  FName local_80;
  FScriptContainerElement *local_78;
  FName local_70;
  FName local_68;
  FDynamicPrimitiveUniformBuffer *local_58;
  FScriptContainerElement *local_50;
  FName local_48;
  FName local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FLineSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FLineSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FLineSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar15 = ::FName::FName(&local_48,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FLineSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar15,
               L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick","STATCAT_Advanced"
               ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FLineSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar16 = _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar15 = ::FName::FName(&local_40,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    pTVar16 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FLineSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar15,
                         L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)&pTVar16->Name;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value != 0) || (bVar12 = bVar5, bVar6 = bVar7, uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar21.Value;
        local_80.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(pTVar16->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\LineSetComponent.cpp"
                   ,0x94);
        bVar5 = true;
        bVar7 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    bVar12 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar21.Value;
      uStack_8c = uVar20;
      local_70 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar10 = true;
      goto LAB_14ca8e9fe;
    }
  }
  bVar7 = bVar11;
  bVar5 = bVar10;
  bVar10 = false;
  local_70 = local_68;
  FVar22 = local_68;
LAB_14ca8e9fe:
  local_90 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (local_90 & 0x1f) & 1) != 0) {
        iVar2 = (this->MeshBatchDatas).ArrayNum;
        pFVar25 = (this->MeshBatchDatas).AllocatorInstance.Data;
        local_50 = pFVar25 + (longlong)iVar2 * 0x18;
        while( true ) {
          pFVar9 = local_50;
          local_78 = pFVar25;
          if ((this->MeshBatchDatas).ArrayNum != iVar2) {
            local_97[0] = 0;
            `TCheckedPointerIterator<FLineMeshBatchData_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_97);
          }
          if (pFVar25 == pFVar9) break;
          iVar13 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   ::Add(&param_4->MeshBatchStorage,1);
          uVar20 = iVar13 / 0x49;
          uVar14 = 0;
          if ((int)uVar20 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar24 = (ForElementType<FMeshBatchElement>)
                   ((ulonglong)(uint)(iVar13 % 0x49) * 0xe0 +
                   (longlong)
                   (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar20]);
          if ((*(int *)((longlong)FVar24 + 0xa0) < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar23 = FVar24;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar24 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar23 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar24 + 0x98);
          }
          *(FDynamicMeshIndexBuffer32 **)((longlong)FVar23 + 0x18) = &this->IndexBuffer;
          *(uint *)((longlong)FVar24 + 0xd4) = *(uint *)((longlong)FVar24 + 0xd4) & 0xffffffbf;
          *(FLocalVertexFactory **)((longlong)FVar24 + 0xa8) = &this->VertexFactory;
          *(undefined8 *)((longlong)FVar24 + 0xb0) = *(undefined8 *)pFVar25;
          paVar3 = &param_4->OneFrameResources->Next;
          aVar17 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
          *(undefined8 *)((longlong)aVar17 + 8) = 0;
          local_58 = (FDynamicPrimitiveUniformBuffer *)((longlong)aVar17 + 0x10);
          *(undefined ***)aVar17 =
               &
               ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar18.Next = *paVar3;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar17 + 8) = TVar18.Next;
            LOCK();
            aVar19 = *paVar3;
            bVar11 = TVar18.Next == aVar19;
            if (bVar11) {
              *paVar3 = aVar17;
              aVar19 = TVar18.Next;
            }
            UNLOCK();
            TVar18.Next = aVar19;
          } while (!bVar11);
          FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(local_58);
          bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
          if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
             ((bVar1 & 0x60) != 0)) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RHICmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                  ,0x46,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = local_58;
          FDynamicPrimitiveUniformBuffer::Set
                    (local_58,(FRHICommandListBase *)param_4->RHICmdList,
                     (TMatrix<double> *)&this->_padding_,(TMatrix<double> *)&this->_padding_,
                     (TBoxSphereBounds<double,double> *)&this->_padding_,
                     (TBoxSphereBounds<double,double> *)&this->_padding_,false,false,bVar11);
          pFVar25 = local_78;
          *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar23 + 8) =
               &pFVar8->UniformBuffer;
          *(undefined4 *)((longlong)FVar23 + 0x58) = *(undefined4 *)(local_78 + 8);
          *(undefined4 *)((longlong)FVar23 + 0x5c) = *(undefined4 *)(local_78 + 0xc);
          *(undefined4 *)((longlong)FVar23 + 0x68) = *(undefined4 *)(local_78 + 0x10);
          *(undefined4 *)((longlong)FVar23 + 0x6c) = *(undefined4 *)(local_78 + 0x14);
          *(uint *)((longlong)FVar24 + 0xd4) =
               ((byte)this->_padding_ & 1 ^ *(uint *)((longlong)FVar24 + 0xd4) & 0xfffffffe) &
               0xffffc07f;
          FMeshElementCollector::AddMesh(param_4,local_90,(FMeshBatch *)FVar24);
          pFVar25 = pFVar25 + 0x18;
        }
      }
      local_90 = local_90 + 1;
      FVar22 = local_70;
      bVar12 = bVar5;
      bVar6 = bVar7;
    } while ((int)local_90 < param_1->ArrayNum);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14ca907a0

uint __thiscall FLineSetSceneProxy::GetMemoryFootprint(FLineSetSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x660;
}

// GetTypeHash @ 14ca93fc0

ulong64 __thiscall FLineSetSceneProxy::GetTypeHash(FLineSetSceneProxy *this)

{
  return 0x155348148;
}

// GetViewRelevance @ 14ca94540

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
FLineSetSceneProxy::GetViewRelevance
          (FLineSetSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 2;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3 | 2;
  uVar5 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  uVar6 = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar6 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 | uVar5 & 0xffffdfff;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^
       *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
      ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
       (uVar6 = 0, (bVar3 & 0x72) != 0)))) &&
     ((uVar6 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar6 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar6;
  return __return_storage_ptr__;
}

