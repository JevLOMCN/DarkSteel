// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 2

// RenderBuffersToDynamicMesh @ 14ca3b080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Conversion::RenderBuffersToDynamicMesh
          (FStaticMeshVertexBuffers *param_1,FRawStaticIndexBuffer *param_2,
          FStaticMeshSectionArray *param_3,FDynamicMesh3 *param_4,bool param_5)

{
  undefined1 *puVar1;
  TVector2<float>_u_0 *pTVar2;
  ushort *puVar3;
  FDynamicMeshAttributeSet *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FDynamicMeshAttributeSet *pFVar22;
  TVector4<float> *pTVar23;
  TVector2<float>_u_0 TVar24;
  int iVar25;
  FDynamicMeshAttributeSet *pFVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint *puVar29;
  FDynamicMeshAttributeSet *pFVar30;
  uchar *puVar31;
  longlong *plVar32;
  FDynamicMeshAttributeSet *pFVar33;
  ulonglong uVar34;
  uint uVar35;
  FDynamicMesh3 *pFVar36;
  FStaticMeshSectionArray *pFVar37;
  longlong lVar38;
  FRawStaticIndexBuffer *pFVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  char local_358;
  undefined2 uStack_357;
  undefined1 local_354;
  undefined1 local_353 [3];
  ForAnyElementType local_350;
  int local_348;
  int iStack_344;
  uint local_340;
  longlong local_338;
  longlong local_330;
  uint local_328;
  FDynamicMesh3 *local_320;
  uint local_318 [4];
  FDynamicMeshAttributeSet *local_308;
  TDynamicMeshOverlay<float,3> *local_300;
  TDynamicMeshOverlay<float,3> *local_2f8;
  TDynamicMeshOverlay<float,3> *local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  FStaticMeshSectionArray *local_2a8;
  FRawStaticIndexBuffer *local_2a0;
  FIndex3i_u_0 local_298;
  undefined8 local_28c;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  FIndex3i_u_0 local_270;
  undefined8 local_264;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined8 local_248;
  float local_240;
  undefined8 local_23c;
  float local_234;
  FIndex3i_u_0 local_230;
  FIndex3i_u_0 local_224;
  FIndex3i_u_0 local_218;
  TVector2<float>_u_0 local_208;
  TVector2<float>_u_0 local_200;
  TDynamicMeshScalarTriangleAttribute<int> *local_1f8;
  FIndex3i_u_0 local_1f0;
  longlong local_1e0;
  FStaticMeshVertexBuffers *local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  TVector<double>_u_0 local_1a8;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  TVector2<float>_u_0 local_178;
  undefined2 local_170;
  undefined1 local_16e;
  TVector<double>_u_0 local_168;
  undefined8 local_150;
  float local_148;
  undefined8 local_144;
  float local_13c;
  TVector2<float>_u_0 local_138;
  undefined2 local_130;
  undefined1 local_12e;
  TVector<float> local_128;
  FMergeCoincidentMeshEdges local_118;
  undefined8 local_b8;
  TVector4<float> local_a8 [7];
  
  local_320 = param_4;
  local_2a8 = param_3;
  local_2a0 = param_2;
  local_1d0 = param_1;
  bVar16 = FStaticMeshVertexBuffer::GetAllowCPUAccess(&param_1->StaticMeshVertexBuffer);
  if ((!bVar16) &&
     (local_354 = bVar16,
     bVar16 = `UE::Conversion::RenderBuffersToDynamicMesh'::__l3::<lambda_1>::operator()(&local_354)
     , !bVar16)) {
    return false;
  }
  local_328 = (param_1->StaticMeshVertexBuffer).NumTexCoords;
  uVar18 = local_328;
  if ((int)local_328 < 1) {
    uVar18 = 1;
  }
  UE::Geometry::FDynamicMesh3::Clear(param_4);
  UE::Geometry::FDynamicMesh3::EnableAttributes(param_4);
  pFVar26 = (param_4->AttributeSet).Ptr;
  pFVar33 = (FDynamicMeshAttributeSet *)0x0;
  pFVar22 = pFVar33;
  if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar22 = pFVar26;
  }
  if ((pFVar22->NormalLayers).Array.ArrayNum < 1) {
    local_300 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    local_300 = *(TDynamicMeshOverlay<float,3> **)
                 (pFVar22->NormalLayers).Array.AllocatorInstance.Data;
  }
  pFVar22 = pFVar33;
  if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar22 = pFVar26;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(pFVar22);
  pFVar26 = (param_4->AttributeSet).Ptr;
  pFVar22 = pFVar33;
  if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar22 = pFVar26;
  }
  if ((pFVar22->NormalLayers).Array.ArrayNum < 2) {
    local_2f8 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    local_2f8 = *(TDynamicMeshOverlay<float,3> **)
                 ((pFVar22->NormalLayers).Array.AllocatorInstance.Data + 8);
  }
  pFVar22 = pFVar33;
  if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar22 = pFVar26;
  }
  if ((pFVar22->NormalLayers).Array.ArrayNum < 3) {
    local_2f0 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    local_2f0 = *(TDynamicMeshOverlay<float,3> **)
                 ((pFVar22->NormalLayers).Array.AllocatorInstance.Data + 0x10);
  }
  (**(code **)(pFVar26->_padding_ + 0xb0))(pFVar26,uVar18);
  lVar38 = (longlong)(int)uVar18;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348 = 0;
  iStack_344 = 0;
  pFVar26 = pFVar33;
  pFVar22 = pFVar33;
  local_338 = lVar38;
  if (0 < (int)uVar18) {
    do {
      pFVar4 = (param_4->AttributeSet).Ptr;
      pFVar30 = pFVar33;
      if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar30 = pFVar4;
      }
      iVar25 = (int)pFVar26;
      pFVar26 = pFVar33;
      if ((iVar25 < (pFVar30->UVLayers).Array.ArrayNum) && (-1 < iVar25)) {
        if ((iVar25 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        pFVar26 = *(FDynamicMeshAttributeSet **)
                   ((pFVar30->UVLayers).Array.AllocatorInstance.Data + (longlong)pFVar22 * 8);
      }
      local_308 = pFVar26;
      if (((local_350.Data <= (FScriptContainerElement *)&local_308) &&
          ((FScriptContainerElement *)&local_308 < local_350.Data + (longlong)iStack_344 * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      if (local_348 == iStack_344) {
        local_348 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_350,&iStack_344);
      }
      lVar27 = (longlong)local_348;
      pFVar22 = (FDynamicMeshAttributeSet *)((longlong)&pFVar22->_padding_ + 1);
      local_348 = local_348 + 1;
      *(FDynamicMeshAttributeSet **)(local_350.Data + lVar27 * 8) = local_308;
      pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar25 + 1);
    } while ((longlong)pFVar22 < lVar38);
  }
  pFVar26 = (param_4->AttributeSet).Ptr;
  pFVar22 = pFVar33;
  if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar22 = pFVar26;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(pFVar22);
  fVar14 = _UNK_15104007c;
  fVar13 = _UNK_151040078;
  fVar12 = _UNK_151040074;
  fVar11 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar10 = _UNK_150d565ec;
  fVar9 = _UNK_150d565e8;
  fVar8 = _UNK_150d565e4;
  fVar7 = ___xmm_38000100380001003800010038000100;
  pFVar26 = (param_4->AttributeSet).Ptr;
  pFVar22 = pFVar33;
  if (pFVar26 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar22 = pFVar26;
  }
  local_1f8 = (pFVar22->MaterialIDAttrib).Ptr;
  local_2e0 = (longlong)(int)(param_1->PositionVertexBuffer).NumVertices;
  if (0 < local_2e0) {
    local_330 = 0;
    do {
      lVar38 = local_330;
      puVar5 = (param_1->PositionVertexBuffer).Data;
      local_170 = 0;
      uVar20 = (uint)pFVar33;
      local_16e = 0;
      uVar28 = (ulonglong)(uVar20 * (param_1->PositionVertexBuffer).Stride);
      local_1e0 = *(longlong *)(puVar5 + uVar28);
      local_1a8._s_0.X = (double)(float)local_1e0;
      local_1a8._s_0.Y = (double)(float)((ulonglong)local_1e0 >> 0x20);
      fVar42 = *(float *)(puVar5 + uVar28 + 8);
      auVar40 = ZEXT416((uint)fVar42);
      local_1a8._s_0.Z = (double)fVar42;
      local_188 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_17c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_178 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_190 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_184 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar18 = UE::Geometry::FDynamicMesh3::AppendVertex(param_4,(FVertexInfo *)&local_1a8._s_0);
      if ((uVar18 != uVar20) &&
         (bVar16 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1382780569376522188>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                              ,0x34,"vid == vi"), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      puVar5 = (param_1->StaticMeshVertexBuffer).TangentsDataPtr;
      pcVar6 = *(code **)((longlong)*(param_1->StaticMeshVertexBuffer).TangentsData + 0x50);
      if ((param_1->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis == false) {
        lVar27 = (*pcVar6)();
        if ((puVar5 + lVar27 < puVar5 + (longlong)pFVar33 * 8 + 8) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x104,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        if ((puVar5 + (longlong)pFVar33 * 8 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x105,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        auVar40 = pmovsxbd(auVar40,*(undefined4 *)(puVar5 + lVar38 * 8 + 4));
        local_1c8 = (float)auVar40._0_4_ * fVar11;
        fStack_1c4 = (float)auVar40._4_4_ * fVar12;
        fStack_1c0 = (float)auVar40._8_4_ * fVar13;
        fStack_1bc = (float)auVar40._12_4_ * fVar14;
      }
      else {
        puVar31 = puVar5 + (longlong)pFVar33 * 0x10;
        lVar38 = (*pcVar6)();
        if ((puVar5 + lVar38 < puVar31 + 0x10) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x104,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        if ((puVar31 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                ,0x105,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        auVar40 = pmovsxwd(auVar40,*(undefined8 *)(puVar31 + 8));
        local_1c8 = (float)auVar40._0_4_ * fVar7;
        fStack_1c4 = (float)auVar40._4_4_ * fVar8;
        fStack_1c0 = (float)auVar40._8_4_ * fVar9;
        fStack_1bc = (float)auVar40._12_4_ * fVar10;
      }
      uVar18 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(local_300,&local_1c8);
      if ((uVar18 != uVar20) &&
         (bVar16 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1382780569376522184>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                              ,0x38,"nid == vi"), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      pTVar23 = FStaticMeshVertexBuffer::VertexTangentX
                          (&param_1->StaticMeshVertexBuffer,local_a8,uVar20);
      local_280 = (pTVar23->field0_0x0)._s_0.X;
      local_27c = (pTVar23->field0_0x0)._s_0.Y;
      local_278 = (pTVar23->field0_0x0)._s_0.Z;
      uVar18 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(local_2f8,&local_280);
      if ((uVar18 != uVar20) &&
         (bVar16 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1382780569376522180>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                              ,0x3c,"tid == vi"), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      FStaticMeshVertexBuffer::VertexTangentY(&param_1->StaticMeshVertexBuffer,&local_128,uVar20);
      uVar18 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                         (local_2f0,(float *)&local_128);
      if ((uVar18 != uVar20) &&
         (bVar16 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1382780569376522176>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                              ,0x40,"bid == vi"), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      uVar28 = 0;
      lVar27 = 0;
      lVar38 = local_338;
      if (0 < local_338) {
        do {
          TVar24 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          if (0 < (int)local_328) {
            puVar5 = (param_1->StaticMeshVertexBuffer).TexcoordDataPtr;
            pcVar6 = *(code **)((longlong)*(param_1->StaticMeshVertexBuffer).TexcoordData + 0x50);
            lVar38 = (ulonglong)(param_1->StaticMeshVertexBuffer).NumTexCoords * (longlong)pFVar33 +
                     uVar28;
            if ((param_1->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
              puVar3 = (ushort *)(puVar5 + lVar38 * 4);
              lVar38 = (*pcVar6)();
              if ((puVar5 + lVar38 < puVar3 + 2) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                      ,0x17b,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar17 = (*pcVar6)();
                return (bool)uVar17;
              }
              if ((puVar3 < (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                      ,0x17c,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar17 = (*pcVar6)();
                return (bool)uVar17;
              }
              fVar42 = FGenericPlatformMath::LoadHalf(puVar3);
              local_2b8 = (TVector2<float>_u_0)CONCAT44(local_2b8._4_4_,fVar42);
              fVar42 = FGenericPlatformMath::LoadHalf(puVar3 + 1);
              local_2b8._4_4_ = fVar42;
              TVar24 = local_2b8;
              lVar38 = local_338;
            }
            else {
              pTVar2 = (TVector2<float>_u_0 *)(puVar5 + lVar38 * 8);
              lVar38 = (*pcVar6)();
              if (((TVector2<float>_u_0 *)(puVar5 + lVar38) < pTVar2 + 1) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                      ,0x17b,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar17 = (*pcVar6)();
                return (bool)uVar17;
              }
              if ((pTVar2 < (TVector2<float>_u_0 *)(param_1->StaticMeshVertexBuffer).TexcoordDataPtr
                  ) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                            ,0x17c,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar17 = (*pcVar6)();
                return (bool)uVar17;
              }
              local_2b8 = *pTVar2;
              TVar24 = local_2b8;
              lVar38 = local_338;
            }
          }
          uVar35 = (uint)uVar28;
          uVar18 = 0;
          if ((int)uVar35 < local_348) {
            uVar18 = ~uVar35 >> 0x1f;
          }
          local_208 = TVar24;
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            uVar17 = (*pcVar6)();
            return (bool)uVar17;
          }
          uVar18 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                             (*(TDynamicMeshOverlay<float,2> **)(local_350.Data + lVar27 * 8),
                              local_208.XY);
          if ((uVar18 != uVar20) &&
             (bVar16 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1382780569376522170>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                                  ,0x46,"uvid == vi"), bVar16)) {
            pcVar6 = (code *)swi(3);
            uVar17 = (*pcVar6)();
            return (bool)uVar17;
          }
          uVar28 = (ulonglong)(uVar35 + 1);
          lVar27 = lVar27 + 1;
          param_4 = local_320;
        } while (lVar27 < lVar38);
      }
      local_330 = local_330 + 1;
      pFVar33 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar20 + 1);
    } while (local_330 < local_2e0);
  }
  pFVar39 = local_2a0;
  iVar25 = local_2a0->CachedNumIndices;
  if (iVar25 < 0) {
    iVar25 = (int)(local_2a0->IndexStorage)._padding_;
    if (local_2a0->b32Bit == false) {
      iVar25 = iVar25 / 2;
    }
    else {
      iVar25 = (int)((iVar25 >> 0x1f & 3U) + iVar25) >> 2;
    }
  }
  iVar25 = iVar25 / 3;
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = 0;
  local_2c8.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_2c8,&UE::Geometry::FDynamicMesh3::InvalidID,iVar25);
  local_1e0 = (longlong)iVar25;
  local_340 = 0;
  if (0 < iVar25) {
    plVar32 = &(pFVar39->IndexStorage)._padding_;
    local_330 = 0;
    local_2e8 = plVar32;
    do {
      uVar20 = local_340;
      uVar18 = local_340 * 3;
      if (((uint)(pFVar39->IndexStorage)._padding_ <= uVar18) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("At >= 0 && At < (uint32)IndexStorage.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                              ,0xc6,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      uVar28 = *plVar32;
      if (pFVar39->b32Bit == false) {
        if ((uVar28 & 1) != 0) {
          uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)plVar32;
        }
        uVar35 = (uint)*(ushort *)(uVar28 + (ulonglong)uVar18 * 2);
      }
      else {
        if ((uVar28 & 1) != 0) {
          uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)plVar32;
        }
        uVar35 = *(uint *)(uVar28 + (ulonglong)uVar18 * 4);
      }
      uVar18 = uVar18 + 1;
      if (((uint)(pFVar39->IndexStorage)._padding_ <= uVar18) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("At >= 0 && At < (uint32)IndexStorage.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                              ,0xc6,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      uVar28 = *plVar32;
      if (pFVar39->b32Bit == false) {
        if ((uVar28 & 1) != 0) {
          uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)plVar32;
        }
        uVar18 = (uint)*(ushort *)(uVar28 + (ulonglong)uVar18 * 2);
      }
      else {
        if ((uVar28 & 1) != 0) {
          uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)plVar32;
        }
        uVar18 = *(uint *)(uVar28 + (ulonglong)uVar18 * 4);
      }
      uVar20 = uVar20 * 3 + 2;
      if (((uint)(pFVar39->IndexStorage)._padding_ <= uVar20) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("At >= 0 && At < (uint32)IndexStorage.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                              ,0xc6,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        uVar17 = (*pcVar6)();
        return (bool)uVar17;
      }
      pFVar36 = local_320;
      uVar28 = *plVar32;
      if (pFVar39->b32Bit == false) {
        if ((uVar28 & 1) != 0) {
          uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)plVar32;
        }
        uVar20 = (uint)*(ushort *)(uVar28 + (ulonglong)uVar20 * 2);
      }
      else {
        if ((uVar28 & 1) != 0) {
          uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)plVar32;
        }
        uVar20 = *(uint *)(uVar28 + (ulonglong)uVar20 * 4);
      }
      local_270._s_0.A = uVar35;
      local_270._s_0.B = uVar18;
      local_270._s_0.C = uVar20;
      iVar25 = UE::Geometry::FDynamicMesh3::AppendTriangle(local_320,(FIndex3i *)&local_270._s_0,0);
      if ((iVar25 + 3U & 0xfffffffd) != 0) {
        if (iVar25 == -2) {
          local_318[0] = uVar35;
          local_318[1] = uVar18;
          local_318[2] = uVar20;
          uVar19 = UE::Geometry::FDynamicMesh3::FindEdge(pFVar36,uVar35,uVar18);
          uVar18 = UE::Geometry::FDynamicMesh3::FindEdge(pFVar36,uVar18,uVar20);
          pFVar36 = local_320;
          uVar20 = UE::Geometry::FDynamicMesh3::FindEdge(local_320,uVar20,uVar35);
          _local_358 = 0;
          if ((uVar19 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((pFVar36->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar19 >> 9) * 8) + 0xc + (ulonglong)(uVar19 & 0x1ff) * 0x10) !=
              -1)) {
            _local_358 = 0x101;
          }
          if ((uVar18 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((pFVar36->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar18 >> 9) * 8) + 0xc + (ulonglong)(uVar18 & 0x1ff) * 0x10) !=
              -1)) {
            _local_358 = CONCAT21(0x101,local_358);
          }
          if ((uVar20 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        ((pFVar36->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar20 >> 9) * 8) + 0xc + (ulonglong)(uVar20 & 0x1ff) * 0x10) !=
              -1)) {
            _local_358 = CONCAT12(1,_local_358);
            _local_358 = CONCAT21(uStack_357,1);
          }
          local_2e0 = 0;
          do {
            if ((&local_358)[local_2e0] != '\0') {
              uVar18 = local_318[local_2e0];
              uVar34 = (ulonglong)uVar18;
              puVar5 = (param_1->PositionVertexBuffer).Data;
              local_130 = 0;
              uVar28 = (ulonglong)(uVar18 * (param_1->PositionVertexBuffer).Stride);
              local_12e = 0;
              local_b8 = *(undefined8 *)(puVar5 + uVar28);
              local_168._s_0.X = (double)(float)local_b8;
              local_168._s_0.Y = (double)(float)((ulonglong)local_b8 >> 0x20);
              fVar42 = *(float *)(puVar5 + uVar28 + 8);
              auVar40 = ZEXT416((uint)fVar42);
              local_168._s_0.Z = (double)fVar42;
              local_148 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_13c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_138 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_144 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              uVar20 = UE::Geometry::FDynamicMesh3::AppendVertex
                                 (pFVar36,(FVertexInfo *)&local_168._s_0);
              puVar5 = (param_1->StaticMeshVertexBuffer).TangentsDataPtr;
              pcVar6 = *(code **)((longlong)*(param_1->StaticMeshVertexBuffer).TangentsData + 0x50);
              if ((param_1->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis == false) {
                puVar31 = puVar5 + uVar34 * 8;
                lVar38 = (*pcVar6)();
                if ((puVar5 + lVar38 < puVar31 + 8) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x104,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                if ((puVar31 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x105,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                auVar40 = pmovsxbd(auVar40,*(undefined4 *)(puVar31 + 4));
                local_1b8 = (float)auVar40._0_4_ * fVar11;
                fStack_1b4 = (float)auVar40._4_4_ * fVar12;
                fStack_1b0 = (float)auVar40._8_4_ * fVar13;
                fStack_1ac = (float)auVar40._12_4_ * fVar14;
              }
              else {
                puVar31 = puVar5 + (ulonglong)uVar18 * 0x10;
                lVar38 = (*pcVar6)();
                if ((puVar5 + lVar38 < puVar31 + 0x10) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x104,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                if ((puVar31 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x105,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                auVar40 = pmovsxwd(auVar40,*(undefined8 *)(puVar31 + 8));
                local_1b8 = (float)auVar40._0_4_ * fVar7;
                fStack_1b4 = (float)auVar40._4_4_ * fVar8;
                fStack_1b0 = (float)auVar40._8_4_ * fVar9;
                fStack_1ac = (float)auVar40._12_4_ * fVar10;
              }
              uVar18 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                                 (local_300,&local_1b8);
              if ((uVar18 != uVar20) &&
                 (bVar16 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_1382780569376522115>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                                      ,0x7d,"nid == newvi"), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar17 = (*pcVar6)();
                return (bool)uVar17;
              }
              puVar5 = (param_1->StaticMeshVertexBuffer).TangentsDataPtr;
              pcVar6 = *(code **)((longlong)*(param_1->StaticMeshVertexBuffer).TangentsData + 0x50);
              if ((param_1->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis == false) {
                puVar31 = puVar5 + uVar34 * 8;
                lVar38 = (*pcVar6)();
                if ((puVar5 + lVar38 < puVar31 + 8) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0xec,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                if ((puVar31 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0xed,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                auVar40 = pmovsxbd(auVar40,*(undefined4 *)puVar31);
                local_258 = (float)auVar40._0_4_ * fVar11;
                local_254 = (float)auVar40._4_4_ * fVar12;
                local_250 = (float)auVar40._8_4_ * fVar13;
                local_28c = CONCAT44(local_254,local_258);
                local_284 = local_250;
              }
              else {
                puVar31 = puVar5 + uVar34 * 0x10;
                lVar38 = (*pcVar6)();
                if ((puVar5 + lVar38 < puVar31 + 0x10) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0xec,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                if ((puVar31 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0xed,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                auVar40 = pmovsxwd(auVar40,*(undefined8 *)puVar31);
                local_258 = (float)auVar40._0_4_ * fVar7;
                local_254 = (float)auVar40._4_4_ * fVar8;
                local_250 = (float)auVar40._8_4_ * fVar9;
                local_264 = CONCAT44(local_254,local_258);
                local_25c = local_250;
              }
              auVar40._0_8_ = (double)local_254;
              auVar40._8_8_ = 0;
              uVar18 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                                 (local_2f8,&local_258);
              if ((uVar18 != uVar20) &&
                 (bVar16 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_1382780569376522112>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                                      ,0x80,"tnid == newvi"), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar17 = (*pcVar6)();
                return (bool)uVar17;
              }
              puVar5 = (param_1->StaticMeshVertexBuffer).TangentsDataPtr;
              pcVar6 = *(code **)((longlong)*(param_1->StaticMeshVertexBuffer).TangentsData + 0x50);
              if ((param_1->StaticMeshVertexBuffer).bUseHighPrecisionTangentBasis == false) {
                puVar31 = puVar5 + uVar34 * 8;
                lVar38 = (*pcVar6)();
                if ((puVar5 + lVar38 < puVar31 + 8) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x11c,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                if ((puVar31 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x11d,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                auVar40 = pmovsxbd(auVar40,*(undefined4 *)puVar31);
                auVar41 = pmovsxbd(auVar40,*(undefined4 *)(puVar31 + 4));
                fVar42 = (float)auVar40._0_4_ * fVar11;
                fVar44 = (float)auVar40._4_4_ * fVar12;
                fVar46 = (float)auVar40._8_4_ * fVar13;
                local_23c = CONCAT44(fVar44,fVar42);
                fVar43 = (float)auVar41._0_4_ * fVar11;
                fVar45 = (float)auVar41._4_4_ * fVar12;
                fVar47 = (float)auVar41._8_4_ * fVar13;
                local_2d0 = (float)auVar41._12_4_ * fVar14;
                local_234 = fVar46;
              }
              else {
                puVar31 = puVar5 + uVar34 * 0x10;
                lVar38 = (*pcVar6)();
                if ((puVar5 + lVar38 < puVar31 + 0x10) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize())"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x11c,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                if ((puVar31 < (param_1->StaticMeshVertexBuffer).TangentsDataPtr) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                        ,0x11d,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  uVar17 = (*pcVar6)();
                  return (bool)uVar17;
                }
                auVar40 = pmovsxwd(auVar40,*(undefined8 *)puVar31);
                auVar41 = pmovsxwd(auVar40,*(undefined8 *)(puVar31 + 8));
                fVar42 = (float)auVar40._0_4_ * fVar7;
                fVar44 = (float)auVar40._4_4_ * fVar8;
                fVar46 = (float)auVar40._8_4_ * fVar9;
                local_248 = CONCAT44(fVar44,fVar42);
                fVar43 = (float)auVar41._0_4_ * fVar7;
                fVar45 = (float)auVar41._4_4_ * fVar8;
                fVar47 = (float)auVar41._8_4_ * fVar9;
                local_2d0 = (float)auVar41._12_4_ * fVar10;
                local_240 = fVar46;
              }
              local_2d8 = (fVar46 * fVar45 - fVar47 * fVar44) * local_2d0;
              local_2d4 = (fVar47 * fVar42 - fVar46 * fVar43) * local_2d0;
              local_2d0 = (fVar43 * fVar44 - fVar45 * fVar42) * local_2d0;
              uVar18 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                                 (local_2f0,&local_2d8);
              if ((uVar18 != uVar20) &&
                 (bVar16 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_1382780569376522109>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                                      ,0x83,"bid == newvi"), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar17 = (*pcVar6)();
                return (bool)uVar17;
              }
              uVar28 = 0;
              lVar27 = 0;
              lVar38 = local_338;
              if (0 < local_338) {
                do {
                  TVar24 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                  if (0 < (int)local_328) {
                    puVar5 = (param_1->StaticMeshVertexBuffer).TexcoordDataPtr;
                    pcVar6 = *(code **)((longlong)*(param_1->StaticMeshVertexBuffer).TexcoordData +
                                       0x50);
                    lVar38 = (param_1->StaticMeshVertexBuffer).NumTexCoords * uVar34 + uVar28;
                    if ((param_1->StaticMeshVertexBuffer).bUseFullPrecisionUVs == false) {
                      puVar3 = (ushort *)(puVar5 + lVar38 * 4);
                      lVar38 = (*pcVar6)();
                      if ((puVar5 + lVar38 < puVar3 + 2) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                              ,0x17b,L""), bVar16)) {
                        pcVar6 = (code *)swi(3);
                        uVar17 = (*pcVar6)();
                        return (bool)uVar17;
                      }
                      if ((puVar3 < (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                              ,0x17c,L""), bVar16)) {
                        pcVar6 = (code *)swi(3);
                        uVar17 = (*pcVar6)();
                        return (bool)uVar17;
                      }
                      fVar42 = FGenericPlatformMath::LoadHalf(puVar3);
                      local_2b0 = (TVector2<float>_u_0)CONCAT44(local_2b0._4_4_,fVar42);
                      fVar42 = FGenericPlatformMath::LoadHalf(puVar3 + 1);
                      local_2b0._4_4_ = fVar42;
                      TVar24 = local_2b0;
                      lVar38 = local_338;
                    }
                    else {
                      pTVar2 = (TVector2<float>_u_0 *)(puVar5 + lVar38 * 8);
                      lVar38 = (*pcVar6)();
                      if (((TVector2<float>_u_0 *)(puVar5 + lVar38) < pTVar2 + 1) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                              ,0x17b,L""), bVar16)) {
                        pcVar6 = (code *)swi(3);
                        uVar17 = (*pcVar6)();
                        return (bool)uVar17;
                      }
                      if ((pTVar2 < (TVector2<float>_u_0 *)
                                    (param_1->StaticMeshVertexBuffer).TexcoordDataPtr) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                              ,0x17c,L""), bVar16)) {
                        pcVar6 = (code *)swi(3);
                        uVar17 = (*pcVar6)();
                        return (bool)uVar17;
                      }
                      local_2b0 = *pTVar2;
                      TVar24 = local_2b0;
                      lVar38 = local_338;
                    }
                  }
                  uVar35 = (uint)uVar28;
                  uVar18 = 0;
                  if ((int)uVar35 < local_348) {
                    uVar18 = ~uVar35 >> 0x1f;
                  }
                  local_200 = TVar24;
                  if ((uVar18 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    uVar17 = (*pcVar6)();
                    return (bool)uVar17;
                  }
                  uVar18 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                                     (*(TDynamicMeshOverlay<float,2> **)
                                       (local_350.Data + lVar27 * 8),local_200.XY);
                  if ((uVar18 != uVar20) &&
                     (bVar16 = Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_1382780569376522104>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                                          ,0x88,"uvid == newvi"), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    uVar17 = (*pcVar6)();
                    return (bool)uVar17;
                  }
                  uVar28 = (ulonglong)(uVar35 + 1);
                  lVar27 = lVar27 + 1;
                } while (lVar27 < lVar38);
              }
              local_318[local_2e0] = uVar20;
              pFVar36 = local_320;
            }
            uVar20 = local_318[2];
            local_2e0 = local_2e0 + 1;
          } while (local_2e0 < 3);
          local_1f0._0_8_ = CONCAT44(local_318[1],local_318[0]);
          local_1f0._s_0.C = local_318[2];
          iVar25 = UE::Geometry::FDynamicMesh3::AppendTriangle
                             (pFVar36,(FIndex3i *)&local_1f0._s_0,0);
          uVar35 = local_318[0];
          uVar18 = local_318[1];
          if (iVar25 == -2) {
            bVar16 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1382780569376522093>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\IndexedMeshToDynamicMesh.cpp"
                                ,0x93,"0");
            plVar32 = local_2e8;
            if (bVar16) {
              pcVar6 = (code *)swi(3);
              uVar17 = (*pcVar6)();
              return (bool)uVar17;
            }
            goto LAB_14ca3c554;
          }
        }
        uVar19 = 0;
        if ((int)local_340 < local_2c8.ArrayNum) {
          uVar19 = ~local_340 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        *(int *)(local_2c8.AllocatorInstance.Data + local_330 * 4) = iVar25;
        local_230._s_0.A = uVar35;
        local_230._s_0.B = uVar18;
        local_230._s_0.C = uVar20;
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  (local_300,iVar25,(FIndex3i *)&local_230._s_0,true);
        local_224._s_0.A = uVar35;
        local_224._s_0.B = uVar18;
        local_224._s_0.C = uVar20;
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  (local_2f8,iVar25,(FIndex3i *)&local_224._s_0,true);
        local_218._s_0.A = uVar35;
        local_218._s_0.B = uVar18;
        local_218._s_0.C = uVar20;
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  (local_2f0,iVar25,(FIndex3i *)&local_218._s_0,true);
        lVar38 = local_338;
        uVar19 = 0;
        lVar27 = 0;
        plVar32 = local_2e8;
        if (0 < local_338) {
          do {
            uVar21 = 0;
            if ((int)uVar19 < local_348) {
              uVar21 = ~uVar19 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              uVar17 = (*pcVar6)();
              return (bool)uVar17;
            }
            local_298._s_0.A = uVar35;
            local_298._s_0.B = uVar18;
            local_298._s_0.C = uVar20;
            UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                      (*(TDynamicMeshOverlay<float,2> **)(local_350.Data + lVar27 * 8),iVar25,
                       (FIndex3i *)&local_298._s_0,true);
            uVar19 = uVar19 + 1;
            lVar27 = lVar27 + 1;
            param_1 = local_1d0;
            plVar32 = local_2e8;
          } while (lVar27 < lVar38);
        }
      }
LAB_14ca3c554:
      local_340 = local_340 + 1;
      local_330 = local_330 + 1;
      pFVar39 = local_2a0;
    } while (local_330 < local_1e0);
  }
  iVar25 = *(int *)&local_2a8->field_0x28;
  puVar1 = &local_2a8->field_0x28;
  if (*(FStaticMeshSectionArray **)&local_2a8->field_0x20 != (FStaticMeshSectionArray *)0x0) {
    local_2a8 = *(FStaticMeshSectionArray **)&local_2a8->field_0x20;
  }
  puVar29 = (uint *)&local_2a8->field_0x8;
  pFVar37 = (FStaticMeshSectionArray *)(&local_2a8->field_0x0 + (longlong)iVar25 * 0x1c);
  local_2a8 = pFVar37;
  while( true ) {
    if (*(int *)puVar1 != iVar25) {
      local_353[0] = 0;
      `TCheckedPointerIterator<FStaticMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_353);
    }
    pTVar15 = local_1f8;
    if ((FStaticMeshSectionArray *)(puVar29 + -2) == pFVar37) break;
    uVar18 = puVar29[-2];
    uVar20 = 0;
    if (*puVar29 != 0) {
      do {
        uVar19 = puVar29[-1] / 3 + uVar20;
        uVar35 = 0;
        if ((int)uVar19 < local_2c8.ArrayNum) {
          uVar35 = ~uVar19 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          uVar17 = (*pcVar6)();
          return (bool)uVar17;
        }
        uVar35 = *(uint *)(local_2c8.AllocatorInstance.Data + (longlong)(int)uVar19 * 4);
        if (uVar35 != 0xffffffff) {
          *(uint *)(*(longlong *)(*(longlong *)&pTVar15->field_0x20 + (ulonglong)(uVar35 >> 9) * 8)
                   + (ulonglong)(uVar35 & 0x1ff) * 4) = uVar18;
        }
        uVar20 = uVar20 + 1;
        pFVar37 = local_2a8;
      } while (uVar20 < *puVar29);
    }
    puVar29 = puVar29 + 7;
  }
  if (param_5) {
    local_118._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
    local_118.Mesh = local_320;
    local_118.InitialNumBoundaryEdges = 0;
    local_118.FinalNumBoundaryEdges = 0;
    local_118.bWeldAttrsOnMergedEdges = false;
    local_118.SplitAttributeWelder.UVDistSqrdThreshold = 0.0;
    local_118.SplitAttributeWelder.ColorDistSqrdThreshold = 0.0;
    local_118.SplitAttributeWelder.NormalVecDotThreshold = 0.0;
    local_118.SplitAttributeWelder.TangentVecDotThreshold = 0.0;
    local_118.EdgesToMerge = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    local_118.MergeVertexTolerance = UE::Geometry::FMergeCoincidentMeshEdges::DEFAULT_TOLERANCE;
    local_118.MergeSearchTolerance = 0.0;
    local_118.OnlyUniquePairs = false;
    UE::Geometry::FMergeCoincidentMeshEdges::Apply(&local_118);
  }
  if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AllocatorInstance.Data);
  }
  if (local_350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data);
  }
  return true;
}

// operator() @ 150575a60

bool __thiscall
`UE::Conversion::RenderBuffersToDynamicMesh'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1382780569376522222>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1382780569376522222>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

