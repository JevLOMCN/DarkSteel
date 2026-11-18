// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CheckLODLightMapUVs @ 1487293e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UVCheckResult __thiscall
`UStaticMesh::CheckLightMapUVs'::__l2::FLocal::CheckLODLightMapUVs
          (void *this,FStaticMeshLODResources *param_1,int param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  UVCheckResult UVar13;
  uint uVar14;
  ulonglong uVar15;
  TVector2<double>_u_0 *pTVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  char cVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStackY_278 [32];
  undefined1 local_248;
  undefined1 local_247 [3];
  int local_244;
  ForAnyElementType local_240;
  int local_238 [2];
  longlong local_230;
  longlong local_228;
  FStaticMeshLODResources *local_220;
  void *local_218;
  longlong local_210;
  longlong local_208;
  int *local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector2<double>_u_0 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  TVector2<double>_u_0 local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_200 = param_4;
  local_244 = param_2;
  local_220 = param_1;
  local_218 = this;
  iVar11 = FStaticMeshLODResources::GetNumTriangles(param_1);
  lVar19 = (longlong)iVar11;
  if (iVar11 == 0) {
    UVar13 = UVCheck_NoTriangles;
  }
  else {
    uVar24 = 0;
    UVar13 = UVCheck_Missing;
    *param_3 = 0;
    *param_4 = 0;
    local_240.Data = (FScriptContainerElement *)0x0;
    local_238[0] = 0;
    local_238[1] = 0;
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar11,&local_240,local_238,local_238 + 1);
    local_210 = lVar19;
    memset(local_240.Data + (longlong)iVar11 * 4,0,lVar19 * 4);
    dVar9 = __real_bf50624de0000000;
    dVar8 = __real_3ff0041893780000;
    fVar7 = __real_ba83126f;
    dVar6 = __real_3fd5555555555555;
    if (local_244 < (int)(local_220->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords) {
      if (0 < lVar19) {
        local_228 = 0;
        local_230 = 1;
        uVar15 = uVar24;
        local_208 = lVar19;
        do {
          lVar21 = local_228;
          lVar19 = local_230;
          uVar23 = (uint)uVar15;
          GetTriangleUVs(local_218,local_220,uVar23,local_244,(TVector2<double> (*) [3])&local_138);
          pTVar16 = &local_138;
          dVar4 = local_128 + local_138._s_0.X + local_118;
          dVar5 = dStack_120 + local_138._s_0.Y + dStack_110;
          uVar15 = uVar24;
          uVar17 = uVar24;
          do {
            do {
              if ((pTVar16->XY[uVar15] < dVar9) || (dVar8 < pTVar16->XY[uVar15])) {
                *param_4 = *param_4 + 1;
                goto LAB_1487295f2;
              }
              uVar15 = uVar15 + 1;
            } while ((longlong)uVar15 < 2);
            uVar17 = uVar17 + 1;
            pTVar16 = (TVector2<double>_u_0 *)(pTVar16->XY + 2);
            uVar15 = uVar24;
          } while ((longlong)uVar17 < 3);
LAB_1487295f2:
          uVar12 = 0;
          uVar18 = uVar12;
          if ((int)uVar23 < local_238[0]) {
            uVar18 = ~uVar23 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar1 = (code *)swi(3);
            UVar13 = (*pcVar1)();
            return UVar13;
          }
          lVar20 = lVar19;
          if ((*(int *)(local_240.Data + lVar21) == 0) &&
             (lVar20 = local_230, uVar18 = uVar23, local_230 < local_210)) {
            do {
              uVar18 = uVar18 + 1;
              uVar14 = uVar12;
              if ((int)uVar18 < local_238[0]) {
                uVar14 = ~uVar18 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar1 = (code *)swi(3);
                UVar13 = (*pcVar1)();
                return UVar13;
              }
              if (*(int *)(local_240.Data + lVar19 * 4) == 0) {
                GetTriangleUVs(local_218,local_220,uVar18,local_244,
                               (TVector2<double> (*) [3])&local_108);
                local_1c8._s_0.X = local_e8;
                local_1c8._s_0.Y = local_e0;
                local_1c8._s_0.Z = 0.0;
                local_1f8._s_0.X = local_f8;
                dVar2 = local_108._s_0.X + local_f8 + local_e8;
                local_1f8._s_0.Y = local_f0;
                local_1f8._s_0.Z = 0.0;
                dVar3 = local_108._s_0.Y + local_f0 + local_e0;
                local_1e0._s_0.X = local_108._s_0.X;
                local_1e0._s_0.Y = local_108._s_0.Y;
                local_1e0._s_0.Z = 0.0;
                local_1b0._s_0.Z = 0.0;
                local_1b0._s_0.X = dVar4 * dVar6;
                local_1b0._s_0.Y = dVar5 * dVar6;
                bVar10 = ``UStaticMesh::CheckLightMapUVs'::__l2::FLocal::IsPointInTriangle'::__l2::
                         <unnamed-type-Local>::SameSide
                                   (&local_248,(TVector<double> *)&local_1b0._s_0,
                                    (TVector<double> *)&local_1e0._s_0,
                                    (TVector<double> *)&local_1f8._s_0,
                                    (TVector<double> *)&local_1c8._s_0,fVar7);
                if (((bVar10) &&
                    (bVar10 = ``UStaticMesh::CheckLightMapUVs'::__l2::FLocal::IsPointInTriangle'::
                              __l2::<unnamed-type-Local>::SameSide
                                        (&local_248,(TVector<double> *)&local_1b0._s_0,
                                         (TVector<double> *)&local_1f8._s_0,
                                         (TVector<double> *)&local_1e0._s_0,
                                         (TVector<double> *)&local_1c8._s_0,fVar7), bVar10)) &&
                   (bVar10 = ``UStaticMesh::CheckLightMapUVs'::__l2::FLocal::IsPointInTriangle'::
                             __l2::<unnamed-type-Local>::SameSide
                                       (&local_248,(TVector<double> *)&local_1b0._s_0,
                                        (TVector<double> *)&local_1c8._s_0,
                                        (TVector<double> *)&local_1e0._s_0,
                                        (TVector<double> *)&local_1f8._s_0,fVar7), bVar10)) {
                  cVar22 = '\x01';
                }
                else {
                  cVar22 = '\0';
                }
                local_168._s_0.X = local_118;
                local_168._s_0.Y = dStack_110;
                local_168._s_0.Z = 0.0;
                local_198._s_0.X = local_128;
                local_198._s_0.Y = dStack_120;
                local_198._s_0.Z = 0.0;
                local_180._s_0.X = local_138._s_0.X;
                local_180._s_0.Y = local_138._s_0.Y;
                local_180._s_0.Z = 0.0;
                local_150._s_0.Z = 0.0;
                local_150._s_0.X = dVar2 * dVar6;
                local_150._s_0.Y = dVar3 * dVar6;
                bVar10 = ``UStaticMesh::CheckLightMapUVs'::__l2::FLocal::IsPointInTriangle'::__l2::
                         <unnamed-type-Local>::SameSide
                                   (local_247,(TVector<double> *)&local_150._s_0,
                                    (TVector<double> *)&local_180._s_0,
                                    (TVector<double> *)&local_198._s_0,
                                    (TVector<double> *)&local_168._s_0,fVar7);
                if (((bVar10) &&
                    (bVar10 = ``UStaticMesh::CheckLightMapUVs'::__l2::FLocal::IsPointInTriangle'::
                              __l2::<unnamed-type-Local>::SameSide
                                        (local_247,(TVector<double> *)&local_150._s_0,
                                         (TVector<double> *)&local_198._s_0,
                                         (TVector<double> *)&local_180._s_0,
                                         (TVector<double> *)&local_168._s_0,fVar7), bVar10)) &&
                   (bVar10 = ``UStaticMesh::CheckLightMapUVs'::__l2::FLocal::IsPointInTriangle'::
                             __l2::<unnamed-type-Local>::SameSide
                                       (local_247,(TVector<double> *)&local_150._s_0,
                                        (TVector<double> *)&local_168._s_0,
                                        (TVector<double> *)&local_180._s_0,
                                        (TVector<double> *)&local_198._s_0,fVar7), bVar10)) {
                  bVar10 = true;
                }
                else {
                  bVar10 = false;
                }
                if ((cVar22 != '\0') || (bVar10)) {
                  *param_3 = *param_3 + 1;
                  uVar14 = uVar12;
                  if ((int)uVar23 < local_238[0]) {
                    uVar14 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar1 = (code *)swi(3);
                    UVar13 = (*pcVar1)();
                    return UVar13;
                  }
                  *(int *)(local_240.Data + local_228) = *(int *)(local_240.Data + local_228) + 1;
                  *param_3 = *param_3 + 1;
                  uVar14 = uVar12;
                  if ((int)uVar18 < local_238[0]) {
                    uVar14 = ~uVar18 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar1 = (code *)swi(3);
                    UVar13 = (*pcVar1)();
                    return UVar13;
                  }
                  *(int *)(local_240.Data + lVar19 * 4) = *(int *)(local_240.Data + lVar19 * 4) + 1;
                }
              }
              lVar19 = lVar19 + 1;
              lVar20 = local_230;
              lVar21 = local_228;
            } while (lVar19 < local_210);
          }
          local_230 = lVar20 + 1;
          local_228 = lVar21 + 4;
          uVar15 = (ulonglong)(uVar23 + 1);
          local_208 = local_208 + -1;
          param_4 = local_200;
        } while (local_208 != 0);
        local_208 = 0;
      }
      if ((*param_4 != 0) || (UVar13 = UVCheck_OK, *param_3 != 0)) {
        UVar13 = UVCheck_Bad;
      }
    }
    if (local_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data);
    }
  }
  return UVar13;
}

// GetTriangleUVs @ 148740e40

void __thiscall
`UStaticMesh::CheckLightMapUVs'::__l2::FLocal::GetTriangleUVs
          (void *this,FStaticMeshLODResources *param_1,int param_2,int param_3,
          TVector2<double> (*param_4) [3])

{
  uchar *puVar1;
  ushort *puVar2;
  uchar *puVar3;
  FStaticMeshVertexDataInterface FVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  float local_res10;
  float fStackX_14;
  FIndexArrayView local_48 [2];
  
  uVar6 = (ulonglong)(uint)param_3;
  iVar8 = FStaticMeshLODResources::GetNumTriangles(param_1);
  if ((iVar8 <= param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TriangleIndex < MeshLOD.GetNumTriangles()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0x2659,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FRawStaticIndexBuffer::GetArrayView(&param_1->IndexBuffer,local_48);
  lVar9 = (longlong)(param_2 * 3);
  if (local_48[0].b32Bit == false) {
    uVar10 = (ulonglong)*(ushort *)((longlong)local_48[0].UntypedIndexData + lVar9 * 2);
    uVar12 = (uint)*(ushort *)((longlong)local_48[0].UntypedIndexData + lVar9 * 2 + 2);
    uVar11 = (uint)*(ushort *)((longlong)local_48[0].UntypedIndexData + lVar9 * 2 + 4);
  }
  else {
    uVar10 = (ulonglong)*(uint *)((longlong)local_48[0].UntypedIndexData + lVar9 * 4);
    uVar12 = *(uint *)((longlong)local_48[0].UntypedIndexData + lVar9 * 4 + 4);
    uVar11 = *(uint *)((longlong)local_48[0].UntypedIndexData + lVar9 * 4 + 8);
  }
  puVar3 = (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
  FVar4 = *(param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
  lVar9 = (param_1->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords * uVar10 + uVar6;
  if ((param_1->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
    puVar2 = (ushort *)(puVar3 + lVar9 * 4);
    lVar9 = (**(code **)((longlong)FVar4 + 0x50))();
    if ((puVar3 + lVar9 < puVar2 + 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((puVar2 < (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10 = FGenericPlatformMath::LoadHalf(puVar2);
    fStackX_14 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
  }
  else {
    puVar1 = puVar3 + lVar9 * 8;
    lVar9 = (**(code **)((longlong)FVar4 + 0x50))();
    if ((puVar3 + lVar9 < puVar1 + 8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((puVar1 < (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10 = (float)*(undefined8 *)puVar1;
    fStackX_14 = (float)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
  }
  (*param_4)[0].field0_0x0._s_0.X = (double)local_res10;
  (*param_4)[0].field0_0x0._s_0.Y = (double)fStackX_14;
  puVar3 = (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
  FVar4 = *(param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
  lVar9 = (ulonglong)(param_1->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
          (ulonglong)uVar12 + uVar6;
  if ((param_1->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
    puVar2 = (ushort *)(puVar3 + lVar9 * 4);
    lVar9 = (**(code **)((longlong)FVar4 + 0x50))();
    if ((puVar3 + lVar9 < puVar2 + 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((puVar2 < (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10 = FGenericPlatformMath::LoadHalf(puVar2);
    fStackX_14 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
  }
  else {
    puVar1 = puVar3 + lVar9 * 8;
    lVar9 = (**(code **)((longlong)FVar4 + 0x50))();
    if ((puVar3 + lVar9 < puVar1 + 8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((puVar1 < (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10 = (float)*(undefined8 *)puVar1;
    fStackX_14 = (float)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
  }
  (*param_4)[1].field0_0x0._s_0.X = (double)local_res10;
  (*param_4)[1].field0_0x0._s_0.Y = (double)fStackX_14;
  puVar3 = (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
  FVar4 = *(param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordData;
  lVar9 = (ulonglong)(param_1->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
          (ulonglong)uVar11 + uVar6;
  if ((param_1->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
    puVar2 = (ushort *)(puVar3 + lVar9 * 4);
    lVar9 = (**(code **)((longlong)FVar4 + 0x50))();
    if ((puVar3 + lVar9 < puVar2 + 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((puVar2 < (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fStackX_14 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
    local_res10 = FGenericPlatformMath::LoadHalf(puVar2);
  }
  else {
    puVar1 = puVar3 + lVar9 * 8;
    lVar9 = (**(code **)((longlong)FVar4 + 0x50))();
    if ((puVar3 + lVar9 < puVar1 + 8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((puVar1 < (param_1->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                           ,0x17c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10 = (float)*(undefined8 *)puVar1;
    fStackX_14 = (float)((ulonglong)*(undefined8 *)puVar1 >> 0x20);
  }
  (*param_4)[2].field0_0x0._s_0.X = (double)local_res10;
  (*param_4)[2].field0_0x0._s_0.Y = (double)fStackX_14;
  return;
}

// SameSide @ 148755bf0

bool __thiscall
``UStaticMesh::CheckLightMapUVs'::__l2::FLocal::IsPointInTriangle'::__l2::<unnamed-type-Local>::
SameSide(void *this,TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
        TVector<double> *param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar8 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Z - dVar8;
  dVar9 = (param_4->field0_0x0)._s_0.Z - dVar8;
  dVar8 = (param_1->field0_0x0)._s_0.Z - dVar8;
  dVar3 = (param_2->field0_0x0)._s_0.X - dVar2;
  dVar4 = (param_2->field0_0x0)._s_0.Y - dVar1;
  dVar5 = (param_1->field0_0x0)._s_0.Y - dVar1;
  dVar6 = (param_1->field0_0x0)._s_0.X - dVar2;
  dVar1 = (param_4->field0_0x0)._s_0.Y - dVar1;
  dVar2 = (param_4->field0_0x0)._s_0.X - dVar2;
  return (double)(float)((uint)param_5 ^ __xmm_80000000800000008000000080000000) <=
         (dVar7 * dVar1 - dVar4 * dVar9) * (dVar8 * dVar1 - dVar5 * dVar9) +
         (dVar3 * dVar9 - dVar7 * dVar2) * (dVar6 * dVar9 - dVar8 * dVar2) +
         (dVar4 * dVar2 - dVar3 * dVar1) * (dVar5 * dVar2 - dVar6 * dVar1);
}

// GetReferencedObjs @ 148b42110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
`UEngine::HandleObjCommand'::__l25::FLocal::GetReferencedObjs
          (UObject *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_c0;
  FReferenceFinder local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  FReferenceFinder::FReferenceFinder(&local_a8,&local_c0,param_1,true,false,false,false);
  FReferenceFinder::FindReferences(&local_a8,param_1,(UObject *)0x0,(FProperty *)0x0);
  if (param_2 == &local_c0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = (ulonglong)local_c0.ArrayNum;
  if (local_c0.ArrayNum != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_c0.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8,local_c0.AllocatorInstance.Data,
           uVar6 << 3);
    uVar6 = local_c0._8_8_ & 0xffffffff;
  }
  iVar4 = (int)uVar6;
  pFVar1 = local_c0.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar4) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c8)
      ;
    }
    if (FVar5.Data == pFVar1) break;
    GetReferencedObjs(*(UObject **)FVar5.Data,param_2);
    uVar6 = local_c0._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 8;
  }
  FReferenceFinder::~FReferenceFinder(&local_a8);
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

