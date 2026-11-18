// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 3

// Convert @ 14ca37a90

bool __cdecl
UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert
          (FStaticMeshLODResources *param_1,ConversionOptions *param_2,FDynamicMesh3 *param_3)

{
  bool bVar1;
  FStaticMeshLODResources *local_res8;
  code *local_18;
  FStaticMeshLODResources **local_10;
  
  if (param_1 != (FStaticMeshLODResources *)0x0) {
    bVar1 = FColorVertexBuffer::GetAllowCPUAccess(&(param_1->VertexBuffers).ColorVertexBuffer);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14ca37ac5;
    }
  }
  bVar1 = false;
LAB_14ca37ac5:
  local_10 = &local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_1>,FColor,int>
             ::Call;
  local_res8 = param_1;
  bVar1 = Convert(param_1,param_2,param_3,bVar1,(TFunctionRef<FColor___cdecl(int)> *)&local_18);
  return bVar1;
}

// Convert @ 14ca37b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert
          (FStaticMeshLODResources *param_1,ConversionOptions *param_2,FDynamicMesh3 *param_3,
          bool param_4,TFunctionRef<FColor___cdecl(int)> *param_5)

{
  double dVar1;
  undefined8 uVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  uchar *puVar4;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar5;
  code *pcVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FStaticMeshLODResources *pFVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FDynamicMesh3 *pFVar17;
  longlong lVar18;
  FDynamicMeshAttributeSet *pFVar19;
  ulonglong uVar20;
  FDynamicMeshAttributeSet *pFVar21;
  FStaticMeshSectionArray *pFVar22;
  FStaticMeshSectionArray *pFVar23;
  FDynamicMeshAttributeSet *pFVar24;
  uint uVar25;
  FDynamicMeshAttributeSet *pFVar26;
  uint uVar27;
  uint uVar28;
  char local_428;
  undefined2 uStack_427;
  undefined1 local_424 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_420;
  int local_410;
  uint local_40c;
  TArray<int,TSizedDefaultAllocator<32>_> local_408;
  FStaticMeshSectionArray *local_3f8;
  uint local_3e8 [4];
  longlong local_3d8;
  int local_3d0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_3c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3c0;
  FDynamicMesh3 *local_3b8;
  FStaticMeshLODResourcesMeshAdapter local_3a8;
  FIndex3i_u_0 local_338;
  FIndex3i_u_0 local_32c;
  float local_320 [2];
  FIndex3i_u_0 local_318;
  FIndexArrayView local_308;
  TVector<double>_u_0 local_2f8;
  undefined8 local_2e0;
  float local_2d8;
  undefined8 local_2d4;
  float local_2cc;
  TVector2<float>_u_0 local_2c8;
  undefined2 local_2c0;
  undefined1 local_2be;
  TVector<double>_u_0 local_2b8;
  undefined8 local_2a0;
  float local_298;
  undefined8 local_294;
  float local_28c;
  TVector2<float>_u_0 local_288;
  undefined2 local_280;
  undefined1 local_27e;
  FDynamicMesh3 local_278;
  
  if ((((param_1 == (FStaticMeshLODResources *)0x0) ||
       (pFVar3 = (param_1->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar3 == (FStaticMeshVertexDataInterface *)0x0)) ||
      ((param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData ==
       (FStaticMeshVertexDataInterface *)0x0)) ||
     ((cVar9 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar9 == '\0' ||
      (cVar9 = (**(code **)((longlong)*(param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData
                           + 0x58))(), cVar9 == '\0')))) {
    local_424[0] = 0;
    bVar10 = `UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l3::<lambda_1>::
             operator()(local_424);
    if (!bVar10) {
      return false;
    }
  }
  FStaticMeshLODResourcesMeshAdapter::FStaticMeshLODResourcesMeshAdapter(&local_3a8,param_1);
  local_3a8.BuildScale.field0_0x0._s_0.X = (param_2->BuildScale).field0_0x0._s_0.X;
  local_3a8.BuildScale.field0_0x0._s_0.Y = (param_2->BuildScale).field0_0x0._s_0.Y;
  local_3a8.BuildScale.field0_0x0._s_0.Z = (param_2->BuildScale).field0_0x0._s_0.Z;
  dVar1 = *(double *)&(param_2->BuildScale).field0_0x0;
  uVar27 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_3a8.InvBuildScale.field0_0x0._s_0.Z = 0.0;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar28,uVar27) &&
      (double)CONCAT44(uVar28,uVar27) != __real_3e45798ee2308c3a) {
    local_3a8.InvBuildScale.field0_0x0._s_0.X = __real_3ff0000000000000 / dVar1;
  }
  else {
    local_3a8.InvBuildScale.field0_0x0._s_0.X = 0.0;
  }
  uVar2 = *(undefined8 *)((longlong)&(param_2->BuildScale).field0_0x0 + 8);
  uVar27 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar28,uVar27) &&
      (double)CONCAT44(uVar28,uVar27) != __real_3e45798ee2308c3a) {
    local_3a8.InvBuildScale.field0_0x0._s_0.Y =
         __real_3ff0000000000000 / (param_2->BuildScale).field0_0x0._s_0.Y;
  }
  else {
    local_3a8.InvBuildScale.field0_0x0._s_0.Y = 0.0;
  }
  uVar2 = *(undefined8 *)((longlong)&(param_2->BuildScale).field0_0x0 + 0x10);
  uVar27 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar28,uVar27) &&
      (double)CONCAT44(uVar28,uVar27) != __real_3e45798ee2308c3a) {
    local_3a8.InvBuildScale.field0_0x0._s_0.Z =
         __real_3ff0000000000000 / (param_2->BuildScale).field0_0x0._s_0.Z;
  }
  local_3a8.bScaleNormals = false;
  pFVar17 = FDynamicMesh3::FDynamicMesh3(&local_278);
  FDynamicMesh3::operator=(param_3,pFVar17);
  FDynamicMesh3::~FDynamicMesh3(&local_278);
  FDynamicMesh3::EnableTriangleGroups(param_3,0);
  if (((param_2->bWantNormals != false) || (param_2->bWantTangents != false)) ||
     ((param_2->bWantUVs != false ||
      ((param_2->bWantVertexColors != false || (param_2->bWantMaterialIDs != false)))))) {
    FDynamicMesh3::EnableAttributes(param_3);
  }
  pFVar26 = (FDynamicMeshAttributeSet *)0x0;
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 0;
  local_408.ArrayMax = 0;
  local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_420.ArrayNum = 0;
  local_420.ArrayMax = 0;
  uVar27 = 0;
  if ((local_3a8.Mesh == (FStaticMeshLODResources *)0x0) ||
     (bVar10 = FPositionVertexBuffer::GetAllowCPUAccess
                         (&((local_3a8.Mesh)->VertexBuffers).PositionVertexBuffer), !bVar10)) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_420,0,Default);
  }
  else {
    iVar12 = FStaticMeshLODResources::GetNumVertices(local_3a8.Mesh);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_420,iVar12,Default);
    pFVar21 = pFVar26;
    if (0 < iVar12) {
      do {
        uVar14 = (uint)pFVar21;
        local_2c0 = 0;
        local_2be = 0;
        puVar4 = ((local_3a8.Mesh)->VertexBuffers).PositionVertexBuffer.Data;
        uVar20 = (ulonglong)(uVar14 * ((local_3a8.Mesh)->VertexBuffers).PositionVertexBuffer.Stride)
        ;
        local_2f8._s_0.X =
             (double)*(float *)(puVar4 + uVar20) * local_3a8.BuildScale.field0_0x0._s_0.X;
        local_2f8._s_0.Y =
             (double)*(float *)(puVar4 + uVar20 + 4) * local_3a8.BuildScale.field0_0x0._s_0.Y;
        local_2d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_2cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_2c8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_2f8._s_0.Z =
             (double)*(float *)(puVar4 + uVar20 + 8) * local_3a8.BuildScale.field0_0x0._s_0.Z;
        local_2e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        local_2d4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar13 = FDynamicMesh3::AppendVertex(param_3,(FVertexInfo *)&local_2f8._s_0);
        uVar28 = uVar27;
        if ((int)uVar13 < local_420.ArrayNum) {
          uVar28 = ~uVar13 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        *(uint *)(local_420.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) = uVar14;
        if (uVar13 != uVar14) {
          FDynamicMesh3::Clear(param_3);
          bVar10 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2440566963534036932>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\StaticMeshLODResourcesToDynamicMesh.cpp"
                              ,0x3c,"false");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_420.AllocatorInstance.Data);
          }
          if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.AllocatorInstance.Data);
          }
          if (local_3a8.TriangleOffsetArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_3a8.TriangleOffsetArray.AllocatorInstance.Data);
          }
          if (local_3a8.ValidSections.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_3a8.ValidSections.AllocatorInstance.Data);
          return false;
        }
        pFVar21 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < iVar12);
    }
  }
  uVar28 = 0;
  if ((local_3a8.Mesh == (FStaticMeshLODResources *)0x0) ||
     (cVar9 = (**(code **)(((local_3a8.Mesh)->IndexBuffer).IndexStorage._padding_ + 0x30))(),
     cVar9 == '\0')) {
    local_410 = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_408,&FDynamicMesh3::InvalidID,0);
  }
  else {
    local_410 = local_3a8.NumTriangles;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&local_408,&FDynamicMesh3::InvalidID,local_3a8.NumTriangles);
    local_40c = 0;
    if (0 < local_3a8.NumTriangles) {
      local_3d8 = 0;
      local_410 = local_3a8.NumTriangles;
      pFVar21 = pFVar26;
      local_3f8 = (FStaticMeshSectionArray *)(longlong)local_3a8.NumTriangles;
      do {
        uVar14 = (uint)pFVar21;
        pFVar21 = pFVar26;
        uVar13 = uVar27;
        uVar15 = local_3a8.TriangleOffsetArray.ArrayNum;
        if (0 < local_3a8.TriangleOffsetArray.ArrayNum) {
          do {
            uVar25 = uVar15 >> 1;
            iVar12 = uVar25 + (int)pFVar21;
            if (*(int *)(local_3a8.TriangleOffsetArray.AllocatorInstance.Data + (longlong)iVar12 * 4
                        ) <= (int)uVar14) {
              pFVar21 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar12 + (uVar15 & 1));
            }
            uVar13 = (uint)pFVar21;
            uVar15 = uVar25;
          } while (uVar25 != 0);
        }
        uVar13 = uVar13 - 1;
        uVar15 = uVar27;
        if ((int)uVar13 < local_3a8.TriangleOffsetArray.ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        iVar12 = *(int *)(local_3a8.TriangleOffsetArray.AllocatorInstance.Data +
                         (longlong)(int)uVar13 * 4);
        uVar15 = uVar27;
        if ((int)uVar13 < local_3a8.ValidSections.ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        lVar18 = *(longlong *)
                  (local_3a8.ValidSections.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
        FRawStaticIndexBuffer::GetArrayView(&(local_3a8.Mesh)->IndexBuffer,&local_308);
        lVar18 = (longlong)(int)((uVar14 - iVar12) * 3 + *(int *)(lVar18 + 4));
        if (local_308.b32Bit == false) {
          uVar13 = (uint)*(ushort *)((longlong)local_308.UntypedIndexData + lVar18 * 2 + 4);
          uVar15 = (uint)*(ushort *)((longlong)local_308.UntypedIndexData + lVar18 * 2 + 2);
          uVar25 = (uint)*(ushort *)((longlong)local_308.UntypedIndexData + lVar18 * 2);
        }
        else {
          uVar13 = *(uint *)((longlong)local_308.UntypedIndexData + lVar18 * 4 + 8);
          uVar15 = *(uint *)((longlong)local_308.UntypedIndexData + lVar18 * 4 + 4);
          uVar25 = *(uint *)((longlong)local_308.UntypedIndexData + lVar18 * 4);
        }
        local_3e8[0] = uVar25;
        local_3e8[1] = uVar15;
        local_3e8[2] = uVar13;
        local_338._s_0.A = uVar25;
        local_338._s_0.B = uVar15;
        local_338._s_0.C = uVar13;
        iVar12 = FDynamicMesh3::AppendTriangle(param_3,(FIndex3i *)&local_338._s_0,0);
        if ((iVar12 + 3U & 0xfffffffd) != 0) {
          if (iVar12 == -2) {
            uVar14 = FDynamicMesh3::FindEdge(param_3,uVar25,uVar15);
            uVar15 = FDynamicMesh3::FindEdge(param_3,uVar15,uVar13);
            uVar13 = FDynamicMesh3::FindEdge(param_3,uVar13,uVar25);
            _local_428 = 0;
            if ((uVar14 != 0xffffffff) &&
               (*(int *)(*(longlong *)
                          ((param_3->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar14 >> 9) * 8) + 0xc + (ulonglong)(uVar14 & 0x1ff) * 0x10)
                != -1)) {
              _local_428 = 0x101;
            }
            if ((uVar15 != 0xffffffff) &&
               (*(int *)(*(longlong *)
                          ((param_3->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar15 >> 9) * 8) + 0xc + (ulonglong)(uVar15 & 0x1ff) * 0x10)
                != -1)) {
              _local_428 = CONCAT21(0x101,local_428);
            }
            pFVar21 = pFVar26;
            if ((uVar13 != 0xffffffff) &&
               (*(int *)(*(longlong *)
                          ((param_3->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar13 >> 9) * 8) + 0xc + (ulonglong)(uVar13 & 0x1ff) * 0x10)
                != -1)) {
              _local_428 = CONCAT12(1,_local_428);
              _local_428 = CONCAT21(uStack_427,1);
            }
            do {
              if ((&local_428)[(longlong)pFVar21] != '\0') {
                uVar13 = local_3e8[(longlong)pFVar21];
                local_280 = 0;
                local_27e = 0;
                puVar4 = ((local_3a8.Mesh)->VertexBuffers).PositionVertexBuffer.Data;
                uVar20 = (ulonglong)
                         (uVar13 * ((local_3a8.Mesh)->VertexBuffers).PositionVertexBuffer.Stride);
                local_2b8._s_0.X =
                     (double)*(float *)(puVar4 + uVar20) * local_3a8.BuildScale.field0_0x0._s_0.X;
                local_2b8._s_0.Y =
                     (double)*(float *)(puVar4 + uVar20 + 4) *
                     local_3a8.BuildScale.field0_0x0._s_0.Y;
                local_298 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_28c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                local_288 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
                local_2b8._s_0.Z =
                     (double)*(float *)(puVar4 + uVar20 + 8) *
                     local_3a8.BuildScale.field0_0x0._s_0.Z;
                local_2a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                local_294 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                uVar14 = FDynamicMesh3::AppendVertex(param_3,(FVertexInfo *)&local_2b8._s_0);
                local_3e8[(longlong)pFVar21] = uVar14;
                uVar15 = uVar14 + 1;
                if (local_420.ArrayNum < (int)uVar15) {
                  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar15 - local_420.ArrayNum,&local_420.AllocatorInstance,
                             &local_420.ArrayNum,&local_420.ArrayMax);
LAB_14ca382c7:
                  iVar12 = local_420.ArrayNum;
                }
                else {
                  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
                    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
                  }
                  iVar12 = local_420.ArrayNum;
                  if ((int)uVar15 < local_420.ArrayNum) {
                    uVar25 = local_420.ArrayNum - uVar15;
                    if ((int)(uVar15 | uVar25) < 0) {
                      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x458,
                                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                         );
                      if (bVar10) {
                        pcVar6 = (code *)swi(3);
                        uVar11 = (*pcVar6)();
                        return (bool)uVar11;
                      }
                      iVar12 = local_420.ArrayNum;
                    }
                    if (uVar25 != 0) {
                      iVar16 = (iVar12 - uVar25) - uVar15;
                      if (iVar16 != 0) {
                        memmove(local_420.AllocatorInstance.Data + (longlong)(int)uVar15 * 4,
                                local_420.AllocatorInstance.Data + (longlong)(int)uVar15 * 4 +
                                (longlong)(int)uVar25 * 4,(longlong)iVar16 << 2);
                        iVar12 = local_420.ArrayNum;
                      }
                      local_420.ArrayNum = iVar12 - uVar25;
                      Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&local_420.AllocatorInstance,iVar12 - uVar25,
                                 &local_420.ArrayMax);
                      goto LAB_14ca382c7;
                    }
                  }
                }
                uVar15 = uVar28;
                if ((int)uVar14 < iVar12) {
                  uVar15 = ~uVar14 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  uVar11 = (*pcVar6)();
                  return (bool)uVar11;
                }
                *(uint *)(local_420.AllocatorInstance.Data + (longlong)(int)uVar14 * 4) = uVar13;
              }
              pFVar21 = (FDynamicMeshAttributeSet *)((longlong)&pFVar21->_padding_ + 1);
            } while ((longlong)pFVar21 < 3);
            local_318._0_8_ = CONCAT44(local_3e8[1],local_3e8[0]);
            local_318._s_0.C = local_3e8[2];
            iVar12 = FDynamicMesh3::AppendTriangle(param_3,(FIndex3i *)&local_318._s_0,0);
            uVar14 = local_40c;
          }
          uVar13 = uVar28;
          if ((int)uVar14 < local_408.ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          *(int *)(local_408.AllocatorInstance.Data + local_3d8 * 4) = iVar12;
        }
        local_40c = uVar14 + 1;
        pFVar21 = (FDynamicMeshAttributeSet *)(ulonglong)local_40c;
        local_3d8 = local_3d8 + 1;
      } while (local_3d8 < (longlong)local_3f8);
    }
  }
  pFVar21 = pFVar26;
  if (param_2->bWantMaterialIDs != false) {
    pFVar21 = (param_3->AttributeSet).Ptr;
    pFVar19 = pFVar26;
    if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar21;
    }
    FDynamicMeshAttributeSet::EnableMaterialID(pFVar19);
    pFVar21 = (param_3->AttributeSet).Ptr;
    pFVar19 = pFVar26;
    if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar21;
    }
    pFVar21 = (FDynamicMeshAttributeSet *)(pFVar19->MaterialIDAttrib).Ptr;
  }
  if (0 < *(int *)&(param_1->Sections).field_0x28) {
    pFVar22 = &param_1->Sections;
    pFVar19 = pFVar26;
    pFVar24 = pFVar26;
    local_3f8 = pFVar22;
    do {
      uVar14 = (uint)pFVar19;
      uVar13 = uVar28;
      if ((int)uVar14 < *(int *)&pFVar22->field_0x28) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pFVar23 = pFVar22;
      if (*(FStaticMeshSectionArray **)&pFVar22->field_0x20 != (FStaticMeshSectionArray *)0x0) {
        pFVar23 = *(FStaticMeshSectionArray **)&pFVar22->field_0x20;
      }
      pFVar19 = pFVar26;
      if (*(int *)((longlong)&pFVar24->_padding_ + (longlong)pFVar23) != 0) {
        do {
          uVar15 = *(uint *)((undefined1 *)((longlong)&pFVar24->_padding_ + 4) + (longlong)pFVar23)
                   / 3 + (int)pFVar19;
          uVar13 = uVar28;
          if ((int)uVar15 < local_408.ArrayNum) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          uVar13 = *(uint *)(local_408.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
          if (uVar13 != 0xffffffff) {
            if ((param_3->TriangleGroups).bIsSet != false) {
              *(uint *)(*(longlong *)
                         ((param_3->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4) = uVar14;
              iVar12 = uVar14 + 1;
              if ((int)(uVar14 + 1) < param_3->GroupIDCounter) {
                iVar12 = param_3->GroupIDCounter;
              }
              param_3->GroupIDCounter = iVar12;
            }
            if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
              *(undefined4 *)
               (*(longlong *)
                 ((pFVar21->UVLayers).Array.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
               (ulonglong)(uVar13 & 0x1ff) * 4) =
                   *(undefined4 *)(&pFVar23->field_0x0 + (longlong)&pFVar24->_padding_);
            }
          }
          uVar13 = (int)pFVar19 + 1;
          pFVar19 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
          pFVar22 = local_3f8;
        } while (uVar13 < *(uint *)((longlong)&pFVar24->_padding_ + (longlong)pFVar23));
      }
      pFVar19 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar14 + 1);
      pFVar24 = (FDynamicMeshAttributeSet *)((longlong)&pFVar24->ParentMesh + 4);
    } while ((int)(uVar14 + 1) < *(int *)&(param_1->Sections).field_0x28);
  }
  pFVar8 = local_3a8.Mesh;
  local_3d0[0] = local_410;
  local_3c8 = &local_420;
  local_3c0 = &local_408;
  local_3b8 = param_3;
  if ((((local_3a8.Mesh != (FStaticMeshLODResources *)0x0) &&
       (pFVar3 = ((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar3 != (FStaticMeshVertexDataInterface *)0x0)) &&
      (((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
       (FStaticMeshVertexDataInterface *)0x0)) &&
     (((cVar9 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar9 != '\0' &&
       (cVar9 = (**(code **)((longlong)*(pFVar8->VertexBuffers).StaticMeshVertexBuffer.TexcoordData
                            + 0x58))(), cVar9 != '\0')) &&
      ((((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0 &&
       (param_2->bWantNormals != false)))))) {
    pFVar21 = (param_3->AttributeSet).Ptr;
    pFVar19 = pFVar26;
    if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar21;
    }
    if ((0 < (pFVar19->NormalLayers).Array.ArrayNum) &&
       (pTVar5 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  (pFVar19->NormalLayers).Array.AllocatorInstance.Data,
       pTVar5 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
      `UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
      operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l54::<lambda_3>_>
                (local_3d0,pTVar5,&local_3a8);
    }
  }
  pFVar8 = local_3a8.Mesh;
  if ((((local_3a8.Mesh != (FStaticMeshLODResources *)0x0) &&
       (pFVar3 = ((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar3 != (FStaticMeshVertexDataInterface *)0x0)) &&
      (((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
       (FStaticMeshVertexDataInterface *)0x0)) &&
     (((cVar9 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar9 != '\0' &&
       (cVar9 = (**(code **)((longlong)*(pFVar8->VertexBuffers).StaticMeshVertexBuffer.TexcoordData
                            + 0x58))(), cVar9 != '\0')) &&
      ((((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0 &&
       (param_2->bWantTangents != false)))))) {
    pFVar21 = (param_3->AttributeSet).Ptr;
    pFVar19 = pFVar26;
    if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar21;
    }
    FDynamicMeshAttributeSet::EnableTangents(pFVar19);
    pFVar21 = (param_3->AttributeSet).Ptr;
    if ((1 < (pFVar21->NormalLayers).Array.ArrayNum) &&
       (pTVar5 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  ((pFVar21->NormalLayers).Array.AllocatorInstance.Data + 8),
       pTVar5 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
      `UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
      operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l60::<lambda_4>_>
                (local_3d0,pTVar5,&local_3a8);
    }
    pFVar21 = (param_3->AttributeSet).Ptr;
    pFVar19 = pFVar26;
    if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar21;
    }
    if ((2 < (pFVar19->NormalLayers).Array.ArrayNum) &&
       (pTVar5 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                  ((pFVar19->NormalLayers).Array.AllocatorInstance.Data + 0x10),
       pTVar5 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
      `UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
      operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l63::<lambda_5>_>
                (local_3d0,pTVar5,&local_3a8);
    }
  }
  pFVar8 = local_3a8.Mesh;
  if (((((((local_3a8.Mesh != (FStaticMeshLODResources *)0x0) &&
          (pFVar3 = ((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
          pFVar3 != (FStaticMeshVertexDataInterface *)0x0)) &&
         (((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
          (FStaticMeshVertexDataInterface *)0x0)) &&
        ((cVar9 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar9 != '\0' &&
         (cVar9 = (**(code **)((longlong)
                               *(pFVar8->VertexBuffers).StaticMeshVertexBuffer.TexcoordData + 0x58))
                            (), pFVar8 = local_3a8.Mesh, cVar9 != '\0')))) &&
       (((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr != (uchar *)0x0))
      && (((0 < (int)((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords &&
           (param_2->bWantUVs != false)) &&
          ((pFVar3 = ((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
           pFVar3 != (FStaticMeshVertexDataInterface *)0x0 &&
           (((((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
              (FStaticMeshVertexDataInterface *)0x0 &&
             (cVar9 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar9 != '\0')) &&
            (cVar9 = (**(code **)((longlong)
                                  *(pFVar8->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                                 0x58))(), cVar9 != '\0')))))))) &&
     ((((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr != (uchar *)0x0 &&
      (uVar28 = ((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords,
      0 < (int)uVar28)))) {
    pFVar21 = (param_3->AttributeSet).Ptr;
    pFVar19 = pFVar26;
    if (pFVar21 == (FDynamicMeshAttributeSet *)0x0) {
      (**(code **)(_DAT_00000000 + 0xb0))(0,uVar28);
    }
    else {
      (**(code **)(pFVar21->_padding_ + 0xb0))();
    }
    do {
      iVar12 = (int)pFVar19;
      pFVar21 = (param_3->AttributeSet).Ptr;
      if (pFVar21 == (FDynamicMeshAttributeSet *)0x0) {
        pFVar21 = pFVar26;
      }
      pFVar19 = pFVar26;
      if ((iVar12 < (pFVar21->UVLayers).Array.ArrayNum) && (-1 < iVar12)) {
        if ((iVar12 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        pFVar19 = *(FDynamicMeshAttributeSet **)
                   ((pFVar21->UVLayers).Array.AllocatorInstance.Data + (longlong)iVar12 * 8);
      }
      iVar16 = local_3c8->ArrayNum;
      pFVar21 = pFVar26;
      pFVar24 = pFVar26;
      if (0 < (longlong)iVar16) {
        do {
          pTVar7 = local_3c8;
          uVar14 = (uint)pFVar21;
          uVar13 = uVar27;
          if ((int)uVar14 < local_3c8->ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          FStaticMeshVertexBuffer::GetVertexUV
                    (&((local_3a8.Mesh)->VertexBuffers).StaticMeshVertexBuffer,(uint)local_320,
                     *(uint *)((pTVar7->AllocatorInstance).Data + (longlong)pFVar24 * 4));
          uVar13 = TDynamicMeshOverlay<float,2>::AppendElement
                             ((TDynamicMeshOverlay<float,2> *)pFVar19,local_320);
          if ((uVar13 != uVar14) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ElemID == DstVertID",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversionEngineTypes\\Private\\StaticMeshLODResourcesToDynamicMesh.cpp"
                                  ,0x9c,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          pFVar24 = (FDynamicMeshAttributeSet *)((longlong)&pFVar24->_padding_ + 1);
          pFVar21 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar14 + 1);
        } while ((longlong)pFVar24 < (longlong)iVar16);
      }
      pFVar21 = pFVar26;
      pFVar24 = pFVar26;
      if (0 < local_3d0[0]) {
        do {
          pTVar7 = local_3c0;
          uVar14 = (uint)pFVar21;
          uVar13 = uVar27;
          if ((int)uVar14 < local_3c0->ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          uVar13 = *(uint *)((longlong)&pFVar24->_padding_ +
                            (longlong)(pTVar7->AllocatorInstance).Data);
          if (uVar13 != 0xffffffff) {
            lVar18 = *(longlong *)
                      ((local_3b8->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar13 >> 9) * 8);
            local_32c._s_0.C = *(int *)(lVar18 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
            local_3f8 = *(FStaticMeshSectionArray **)(lVar18 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
            local_32c._s_0.A = (int)local_3f8;
            local_32c._s_0.B = (int)((ulonglong)local_3f8 >> 0x20);
            TDynamicMeshOverlay<float,2>::SetTriangle
                      ((TDynamicMeshOverlay<float,2> *)pFVar19,uVar13,(FIndex3i *)&local_32c._s_0,
                       true);
          }
          pFVar21 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar14 + 1);
          pFVar24 = (FDynamicMeshAttributeSet *)((longlong)&pFVar24->_padding_ + 4);
        } while ((int)(uVar14 + 1) < local_3d0[0]);
      }
      pFVar19 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar12 + 1U);
    } while ((int)(iVar12 + 1U) < (int)uVar28);
  }
  if ((param_4) && (param_2->bWantVertexColors != false)) {
    pFVar21 = (param_3->AttributeSet).Ptr;
    pFVar19 = pFVar26;
    if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar21;
    }
    FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar19);
    pFVar21 = (param_3->AttributeSet).Ptr;
    if (pFVar21 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar26 = pFVar21;
    }
    `UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_2>::
    operator()<UE::Geometry::TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_>,_UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert_::__l74::<lambda_7>_>
              (local_3d0,(pFVar26->ColorLayer).Ptr,(<lambda_7>)param_5);
  }
  if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.AllocatorInstance.Data);
  }
  if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
  if (local_3a8.TriangleOffsetArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.TriangleOffsetArray.AllocatorInstance.Data);
  }
  if (local_3a8.ValidSections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.ValidSections.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 150575a20

bool __thiscall
`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2440566963534036972>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2440566963534036972>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

