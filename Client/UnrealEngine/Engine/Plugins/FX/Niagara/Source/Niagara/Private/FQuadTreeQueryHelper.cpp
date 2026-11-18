// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// operator() @ 148f831b0

bool __thiscall
`FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_>::FindFirstTriangle'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  double dVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  TVector2<float> TVar21;
  double *pdVar22;
  TVector<double> *pTVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  uint uVar29;
  double dVar30;
  double dVar31;
  double local_res8;
  double local_res18;
  double local_res20;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  double local_118 [5];
  double local_f0;
  undefined1 local_e8 [8];
  TVector<double> local_e0 [7];
  double dVar28;
  
  iVar16 = param_1 * 3;
  plVar8 = *(longlong **)(*(longlong *)this + 8);
  plVar9 = (longlong *)plVar8[1];
  uVar20 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar16);
  lVar10 = *plVar8;
  if ((lVar10 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                          ,0x1f5,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    uVar19 = (*pcVar11)();
    return (bool)uVar19;
  }
  TVar21 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                     ((FStaticMeshVertexBuffer *)(lVar10 + 0x30),(uint)&local_res8,uVar20);
  fVar1 = *(float *)TVar21.field0_0x0;
  fVar2 = *(float *)((longlong)TVar21.field0_0x0 + 4);
  plVar8 = *(longlong **)(*(longlong *)this + 8);
  plVar9 = (longlong *)plVar8[1];
  uVar20 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar16 + 1);
  lVar10 = *plVar8;
  if ((lVar10 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                          ,0x1f5,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    uVar19 = (*pcVar11)();
    return (bool)uVar19;
  }
  TVar21 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                     ((FStaticMeshVertexBuffer *)(lVar10 + 0x30),(uint)&local_res18,uVar20);
  fVar3 = *(float *)TVar21.field0_0x0;
  fVar4 = *(float *)((longlong)TVar21.field0_0x0 + 4);
  plVar8 = *(longlong **)(*(longlong *)this + 8);
  plVar9 = (longlong *)plVar8[1];
  local_res20 = (double)fVar3;
  uVar20 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar16 + 2);
  lVar10 = *plVar8;
  if ((lVar10 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                          ,0x1f5,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    uVar19 = (*pcVar11)();
    return (bool)uVar19;
  }
  TVar21 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                     ((FStaticMeshVertexBuffer *)(lVar10 + 0x30),(uint)local_e8,uVar20);
  local_res8 = (double)*(float *)TVar21.field0_0x0;
  dVar5 = **(double **)((longlong)this + 8);
  dVar25 = (*(double **)((longlong)this + 8))[1];
  dVar6 = **(double **)((longlong)this + 0x10);
  dVar7 = (*(double **)((longlong)this + 0x10))[1];
  dVar15 = dVar5 * local_res8 + dVar6;
  local_res18 = (double)*(float *)((longlong)TVar21.field0_0x0 + 4);
  dVar13 = dVar5 * (double)fVar1 + dVar6;
  dVar14 = dVar25 * (double)fVar2 + dVar7;
  dVar6 = dVar5 * (double)fVar3 + dVar6;
  dVar5 = dVar25 * (double)fVar4 + dVar7;
  dVar7 = dVar25 * local_res18 + dVar7;
  dVar25 = dVar13;
  if (dVar6 <= dVar13) {
    dVar25 = dVar6;
  }
  dVar24 = dVar14;
  if (dVar5 <= dVar14) {
    dVar24 = dVar5;
  }
  if (dVar15 <= dVar25) {
    dVar25 = dVar15;
  }
  if (dVar7 <= dVar24) {
    dVar24 = dVar7;
  }
  if (dVar24 <= dVar25) {
    dVar24 = dVar25;
  }
  if (dVar24 <= __real_3ff0000000000000) {
    dVar25 = dVar14;
    if (dVar14 <= dVar5) {
      dVar25 = dVar5;
    }
    dVar24 = dVar13;
    if (dVar13 <= dVar6) {
      dVar24 = dVar6;
    }
    if (dVar25 <= dVar7) {
      dVar25 = dVar7;
    }
    if (dVar24 <= dVar15) {
      dVar24 = dVar15;
    }
    if (dVar24 <= dVar25) {
      dVar25 = dVar24;
    }
    if (0.0 <= dVar25) {
      pdVar22 = local_118;
      uVar20 = 0;
      local_118[0] = dVar15 - dVar6;
      local_118[1] = dVar7 - dVar5;
      local_118[2] = dVar13 - dVar15;
      local_118[3] = dVar14 - dVar7;
      local_118[4] = dVar6 - dVar13;
      local_f0 = dVar5 - dVar14;
      while( true ) {
        dVar25 = *pdVar22;
        uVar27 = SUB84(pdVar22[1],0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar29 = (uint)((ulonglong)pdVar22[1] >> 0x20) ^
                 (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dVar28 = (double)CONCAT44(uVar29,uVar27);
        dVar24 = (double)CONCAT44(uVar29,uVar27) + dVar25;
        dVar31 = dVar25 * dVar7 + dVar15 * dVar28;
        dVar26 = (double)CONCAT44(uVar29,uVar27);
        if (dVar25 <= (double)CONCAT44(uVar29,uVar27)) {
          dVar26 = dVar25;
        }
        dVar12 = dVar25 * dVar5 + dVar6 * dVar28;
        if (dVar24 <= dVar26) {
          dVar26 = dVar24;
        }
        dVar30 = dVar25 * dVar14 + dVar13 * dVar28;
        if (0.0 <= dVar26) {
          dVar26 = 0.0;
        }
        dVar17 = dVar30;
        if (dVar30 <= dVar12) {
          dVar17 = dVar12;
        }
        if (dVar17 <= dVar31) {
          dVar17 = dVar31;
        }
        if (dVar17 < dVar26) break;
        if (dVar28 <= dVar25) {
          dVar28 = dVar25;
        }
        if (dVar12 <= dVar30) {
          dVar30 = dVar12;
        }
        if (dVar28 <= dVar24) {
          dVar28 = dVar24;
        }
        if (dVar31 <= dVar30) {
          dVar30 = dVar31;
        }
        if (dVar28 <= 0.0) {
          dVar28 = 0.0;
        }
        if (dVar28 < dVar30) {
          return true;
        }
        uVar20 = uVar20 + 1;
        pdVar22 = pdVar22 + 2;
        if (2 < uVar20) {
          local_148._s_0.X = local_res20;
          local_160._s_0.Z = 0.0;
          local_148._s_0.Z = 0.0;
          local_130._s_0.Z = 0.0;
          local_160._s_0.X = local_res8;
          local_160._s_0.Y = local_res18;
          local_148._s_0.Y = (double)fVar4;
          local_130._s_0.X = (double)fVar1;
          local_130._s_0.Y = (double)fVar2;
          pTVar23 = FMath::GetBaryCentric2D
                              (local_e0,*(TVector<double> **)((longlong)this + 0x20),
                               (TVector<double> *)&local_130._s_0,(TVector<double> *)&local_148._s_0
                               ,(TVector<double> *)&local_160._s_0);
          pdVar22 = *(double **)((longlong)this + 0x18);
          dVar5 = (pTVar23->field0_0x0)._s_0.Y;
          *pdVar22 = (pTVar23->field0_0x0)._s_0.X;
          pdVar22[1] = dVar5;
          pdVar22[2] = (pTVar23->field0_0x0)._s_0.Z;
          **(int **)((longlong)this + 0x28) = param_1;
          return false;
        }
      }
    }
  }
  return true;
}

// operator() @ 148f83680

bool __thiscall
`FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_>::FindFirstTriangle'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  double dVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  TVector2<float> TVar21;
  double *pdVar22;
  TVector<double> *pTVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  uint uVar29;
  double dVar30;
  double dVar31;
  double local_res8;
  double local_res18;
  double local_res20;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  double local_118 [5];
  double local_f0;
  undefined1 local_e8 [8];
  TVector<double> local_e0 [7];
  double dVar28;
  
  iVar16 = param_1 * 3;
  plVar8 = *(longlong **)(*(longlong *)this + 8);
  plVar9 = (longlong *)plVar8[1];
  uVar20 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar16);
  lVar10 = *plVar8;
  if ((lVar10 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                          ,0x1f5,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    uVar19 = (*pcVar11)();
    return (bool)uVar19;
  }
  TVar21 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                     ((FStaticMeshVertexBuffer *)(lVar10 + 0x30),(uint)&local_res8,uVar20);
  fVar1 = *(float *)TVar21.field0_0x0;
  fVar2 = *(float *)((longlong)TVar21.field0_0x0 + 4);
  plVar8 = *(longlong **)(*(longlong *)this + 8);
  plVar9 = (longlong *)plVar8[1];
  uVar20 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar16 + 1);
  lVar10 = *plVar8;
  if ((lVar10 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                          ,0x1f5,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    uVar19 = (*pcVar11)();
    return (bool)uVar19;
  }
  TVar21 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                     ((FStaticMeshVertexBuffer *)(lVar10 + 0x30),(uint)&local_res18,uVar20);
  fVar3 = *(float *)TVar21.field0_0x0;
  fVar4 = *(float *)((longlong)TVar21.field0_0x0 + 4);
  plVar8 = *(longlong **)(*(longlong *)this + 8);
  plVar9 = (longlong *)plVar8[1];
  local_res20 = (double)fVar3;
  uVar20 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar16 + 2);
  lVar10 = *plVar8;
  if ((lVar10 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                          ,0x1f5,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    uVar19 = (*pcVar11)();
    return (bool)uVar19;
  }
  TVar21 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                     ((FStaticMeshVertexBuffer *)(lVar10 + 0x30),(uint)local_e8,uVar20);
  local_res8 = (double)*(float *)TVar21.field0_0x0;
  dVar5 = **(double **)((longlong)this + 8);
  dVar25 = (*(double **)((longlong)this + 8))[1];
  dVar6 = **(double **)((longlong)this + 0x10);
  dVar7 = (*(double **)((longlong)this + 0x10))[1];
  dVar15 = dVar5 * local_res8 + dVar6;
  local_res18 = (double)*(float *)((longlong)TVar21.field0_0x0 + 4);
  dVar13 = dVar5 * (double)fVar1 + dVar6;
  dVar14 = dVar25 * (double)fVar2 + dVar7;
  dVar6 = dVar5 * (double)fVar3 + dVar6;
  dVar5 = dVar25 * (double)fVar4 + dVar7;
  dVar7 = dVar25 * local_res18 + dVar7;
  dVar25 = dVar13;
  if (dVar6 <= dVar13) {
    dVar25 = dVar6;
  }
  dVar24 = dVar14;
  if (dVar5 <= dVar14) {
    dVar24 = dVar5;
  }
  if (dVar15 <= dVar25) {
    dVar25 = dVar15;
  }
  if (dVar7 <= dVar24) {
    dVar24 = dVar7;
  }
  if (dVar24 <= dVar25) {
    dVar24 = dVar25;
  }
  if (dVar24 <= __real_3ff0000000000000) {
    dVar25 = dVar14;
    if (dVar14 <= dVar5) {
      dVar25 = dVar5;
    }
    dVar24 = dVar13;
    if (dVar13 <= dVar6) {
      dVar24 = dVar6;
    }
    if (dVar25 <= dVar7) {
      dVar25 = dVar7;
    }
    if (dVar24 <= dVar15) {
      dVar24 = dVar15;
    }
    if (dVar24 <= dVar25) {
      dVar25 = dVar24;
    }
    if (0.0 <= dVar25) {
      pdVar22 = local_118;
      uVar20 = 0;
      local_118[0] = dVar15 - dVar6;
      local_118[1] = dVar7 - dVar5;
      local_118[2] = dVar13 - dVar15;
      local_118[3] = dVar14 - dVar7;
      local_118[4] = dVar6 - dVar13;
      local_f0 = dVar5 - dVar14;
      while( true ) {
        dVar25 = *pdVar22;
        uVar27 = SUB84(pdVar22[1],0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar29 = (uint)((ulonglong)pdVar22[1] >> 0x20) ^
                 (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dVar28 = (double)CONCAT44(uVar29,uVar27);
        dVar24 = (double)CONCAT44(uVar29,uVar27) + dVar25;
        dVar31 = dVar25 * dVar7 + dVar15 * dVar28;
        dVar26 = (double)CONCAT44(uVar29,uVar27);
        if (dVar25 <= (double)CONCAT44(uVar29,uVar27)) {
          dVar26 = dVar25;
        }
        dVar12 = dVar25 * dVar5 + dVar6 * dVar28;
        if (dVar24 <= dVar26) {
          dVar26 = dVar24;
        }
        dVar30 = dVar25 * dVar14 + dVar13 * dVar28;
        if (0.0 <= dVar26) {
          dVar26 = 0.0;
        }
        dVar17 = dVar30;
        if (dVar30 <= dVar12) {
          dVar17 = dVar12;
        }
        if (dVar17 <= dVar31) {
          dVar17 = dVar31;
        }
        if (dVar17 < dVar26) break;
        if (dVar28 <= dVar25) {
          dVar28 = dVar25;
        }
        if (dVar12 <= dVar30) {
          dVar30 = dVar12;
        }
        if (dVar28 <= dVar24) {
          dVar28 = dVar24;
        }
        if (dVar31 <= dVar30) {
          dVar30 = dVar31;
        }
        if (dVar28 <= 0.0) {
          dVar28 = 0.0;
        }
        if (dVar28 < dVar30) {
          return true;
        }
        uVar20 = uVar20 + 1;
        pdVar22 = pdVar22 + 2;
        if (2 < uVar20) {
          local_148._s_0.X = local_res20;
          local_160._s_0.Z = 0.0;
          local_148._s_0.Z = 0.0;
          local_130._s_0.Z = 0.0;
          local_160._s_0.X = local_res8;
          local_160._s_0.Y = local_res18;
          local_148._s_0.Y = (double)fVar4;
          local_130._s_0.X = (double)fVar1;
          local_130._s_0.Y = (double)fVar2;
          pTVar23 = FMath::GetBaryCentric2D
                              (local_e0,*(TVector<double> **)((longlong)this + 0x20),
                               (TVector<double> *)&local_130._s_0,(TVector<double> *)&local_148._s_0
                               ,(TVector<double> *)&local_160._s_0);
          pdVar22 = *(double **)((longlong)this + 0x18);
          dVar5 = (pTVar23->field0_0x0)._s_0.Y;
          *pdVar22 = (pTVar23->field0_0x0)._s_0.X;
          pdVar22[1] = dVar5;
          pdVar22[2] = (pTVar23->field0_0x0)._s_0.Z;
          **(int **)((longlong)this + 0x28) = param_1;
          return false;
        }
      }
    }
  }
  return true;
}

// BuildTriangleCoordinate @ 148f8fd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_>::BuildTriangleCoordinate
          (FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_> *this,
          TVector<double> *__return_storage_ptr__,TVector2<double> *param_1,int param_2)

{
  FSkelMeshVertexAccessorHelper<1> *pFVar1;
  FRawStaticIndexBuffer16or32Interface *pFVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  TVector2<float> TVar9;
  undefined1 auStackY_108 [32];
  TVector<double>_u_0 local_d8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = this->MeshAccessor;
  iVar5 = param_2 * 3;
  pFVar2 = pFVar1->IndexBuffer;
  uVar7 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,iVar5);
  pFVar3 = pFVar1->LodRenderData;
  if (pFVar3 == (FSkeletalMeshLODRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x1f5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  TVar9 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                    (&(pFVar3->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_c0,uVar7);
  pFVar1 = this->MeshAccessor;
  local_a8._s_0.Z = 0.0;
  local_a8._s_0.Y = (double)*(float *)((longlong)TVar9.field0_0x0 + 4);
  local_a8._s_0.X = (double)*(float *)TVar9.field0_0x0;
  pFVar2 = pFVar1->IndexBuffer;
  uVar7 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,iVar5 + 1);
  pFVar3 = pFVar1->LodRenderData;
  if (pFVar3 == (FSkeletalMeshLODRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x1f5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  TVar9 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                    (&(pFVar3->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_b8,uVar7);
  pFVar1 = this->MeshAccessor;
  local_90._s_0.Z = 0.0;
  local_90._s_0.Y = (double)*(float *)((longlong)TVar9.field0_0x0 + 4);
  local_90._s_0.X = (double)*(float *)TVar9.field0_0x0;
  pFVar2 = pFVar1->IndexBuffer;
  uVar7 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,iVar5 + 2);
  pFVar3 = pFVar1->LodRenderData;
  if (pFVar3 == (FSkeletalMeshLODRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x1f5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  TVar9 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                    (&(pFVar3->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_b0,uVar7);
  local_d8._s_0.Z = 0.0;
  local_78._s_0.X = (double)*(float *)TVar9.field0_0x0;
  local_78._s_0.Y = (double)*(float *)((longlong)TVar9.field0_0x0 + 4);
  local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_78._s_0.Z = 0.0;
  FMath::GetBaryCentric2D
            (__return_storage_ptr__,(TVector<double> *)&local_d8._s_0,
             (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90._s_0,
             (TVector<double> *)&local_78._s_0);
  return __return_storage_ptr__;
}

// BuildTriangleCoordinate @ 148f8ffa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_>::BuildTriangleCoordinate
          (FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_> *this,
          TVector<double> *__return_storage_ptr__,TVector2<double> *param_1,int param_2)

{
  FSkelMeshVertexAccessorHelper<0> *pFVar1;
  FRawStaticIndexBuffer16or32Interface *pFVar2;
  FSkeletalMeshLODRenderData *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  TVector2<float> TVar9;
  undefined1 auStackY_108 [32];
  TVector<double>_u_0 local_d8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = this->MeshAccessor;
  iVar5 = param_2 * 3;
  pFVar2 = pFVar1->IndexBuffer;
  uVar7 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,iVar5);
  pFVar3 = pFVar1->LodRenderData;
  if (pFVar3 == (FSkeletalMeshLODRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x1f5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  TVar9 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                    (&(pFVar3->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_c0,uVar7);
  pFVar1 = this->MeshAccessor;
  local_a8._s_0.Z = 0.0;
  local_a8._s_0.Y = (double)*(float *)((longlong)TVar9.field0_0x0 + 4);
  local_a8._s_0.X = (double)*(float *)TVar9.field0_0x0;
  pFVar2 = pFVar1->IndexBuffer;
  uVar7 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,iVar5 + 1);
  pFVar3 = pFVar1->LodRenderData;
  if (pFVar3 == (FSkeletalMeshLODRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x1f5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  TVar9 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                    (&(pFVar3->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_b8,uVar7);
  pFVar1 = this->MeshAccessor;
  local_90._s_0.Z = 0.0;
  local_90._s_0.Y = (double)*(float *)((longlong)TVar9.field0_0x0 + 4);
  local_90._s_0.X = (double)*(float *)TVar9.field0_0x0;
  pFVar2 = pFVar1->IndexBuffer;
  uVar7 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,iVar5 + 2);
  pFVar3 = pFVar1->LodRenderData;
  if (pFVar3 == (FSkeletalMeshLODRenderData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                       ,0x1f5,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  TVar9 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                    (&(pFVar3->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_b0,uVar7);
  local_d8._s_0.Z = 0.0;
  local_78._s_0.X = (double)*(float *)TVar9.field0_0x0;
  local_78._s_0.Y = (double)*(float *)((longlong)TVar9.field0_0x0 + 4);
  local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_78._s_0.Z = 0.0;
  FMath::GetBaryCentric2D
            (__return_storage_ptr__,(TVector<double> *)&local_d8._s_0,
             (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90._s_0,
             (TVector<double> *)&local_78._s_0);
  return __return_storage_ptr__;
}

// FindOverlappingTriangle @ 148fadf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_>::FindOverlappingTriangle
          (FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<1>_> *this,TVector2<double> *param_1,
          float param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FNiagaraUvQuadTree *pFVar2;
  FSubTree *this_00;
  FSkelMeshVertexAccessorHelper<1> *pFVar3;
  FRawStaticIndexBuffer16or32Interface *pFVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  ForElementType<int> FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TVector2<float> TVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [4];
  int local_204;
  uint local_200;
  TVector2<double> *local_1f8;
  ForElementType<int> local_1f0;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector2<double>_u_0 local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  TStaticArray<int,4,4294967295> local_178;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_168;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1b8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_1b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = this->QuadTree;
  lVar15 = 0;
  local_198 = 1;
  local_168.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0x20;
  local_1f8 = param_1;
  local_1a8 = local_1b8._s_0.X;
  dStack_1a0 = local_1b8._s_0.Y;
  if (((pFVar2->ChildTrees).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (FSubTree *)(pFVar2->ChildTrees).AllocatorInstance.Data;
  FNiagaraUvQuadTree::FSubTree::
  GetIntersectingElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            (this_00,pFVar2,(TBox2<double> *)&local_1b8._s_0,&local_168);
  iVar11 = FNiagaraUvQuadTree::FSubTree::GetQuads
                     (this_00,(TBox2<double> *)&local_1b8._s_0,&local_178);
  if (0 < iVar11) {
    do {
      uVar1 = local_178.Elements[lVar15];
      uVar12 = 0;
      if ((int)uVar1 < (pFVar2->ChildTrees).ArrayNum) {
        uVar12 = ~uVar1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraUvQuadTree::FSubTree::
      GetElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                ((FSubTree *)
                 ((pFVar2->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x50),pFVar2,
                 (TBox2<double> *)&local_1b8._s_0,&local_168);
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar11);
  }
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar8 = __real_3f800000;
  uVar14 = (ulonglong)local_168.ArrayNum;
  local_1f0 = (ForElementType<int>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    local_1f0 = local_168.AllocatorInstance.SecondaryData;
  }
  local_200 = local_168.ArrayNum;
  FVar16 = (ForElementType<int>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar16 = local_168.AllocatorInstance.SecondaryData;
  }
  local_1f0 = (ForElementType<int>)((longlong)local_1f0 + uVar14 * 4);
  uVar17 = uVar14;
  while( true ) {
    FVar9 = local_1f0;
    if ((int)uVar14 != (int)uVar17) {
      local_208[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_208);
    }
    if (FVar16 == FVar9) {
      if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
      }
      return;
    }
    local_204 = *(int *)FVar16;
    pFVar3 = this->MeshAccessor;
    iVar11 = local_204 * 3;
    pFVar4 = pFVar3->IndexBuffer;
    uVar12 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar11);
    pFVar5 = pFVar3->LodRenderData;
    if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                            ,0x1f5,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TVar13 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                       (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_190,uVar12
                       );
    pFVar3 = this->MeshAccessor;
    local_d8._s_0.Z = 0.0;
    local_d8._s_0.Y = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
    local_d8._s_0.X = (double)*(float *)TVar13.field0_0x0;
    pFVar4 = pFVar3->IndexBuffer;
    uVar12 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar11 + 1);
    pFVar5 = pFVar3->LodRenderData;
    if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                            ,0x1f5,L""), bVar10)) break;
    TVar13 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                       (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_188,uVar12
                       );
    pFVar3 = this->MeshAccessor;
    local_c0._s_0.Z = 0.0;
    local_c0._s_0.Y = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
    local_c0._s_0.X = (double)*(float *)TVar13.field0_0x0;
    pFVar4 = pFVar3->IndexBuffer;
    uVar12 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar11 + 2);
    pFVar5 = pFVar3->LodRenderData;
    if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                            ,0x1f5,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TVar13 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                       (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_180,uVar12
                       );
    local_1e8._s_0.Z = 0.0;
    local_a8._s_0.X = (double)*(float *)TVar13.field0_0x0;
    local_a8._s_0.Y = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
    local_1e8._s_0.X = (local_1f8->field0_0x0)._s_0.X;
    local_1e8._s_0.Y = (local_1f8->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = 0.0;
    FMath::GetBaryCentric2D
              ((TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1e8._s_0,
               (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_c0._s_0,
               (TVector<double> *)&local_a8._s_0);
    uVar18 = local_1d0._s_0.X;
    if (local_1d0._s_0.Y <= local_1d0._s_0.X) {
      uVar18 = local_1d0._s_0.Y;
    }
    if (local_1d0._s_0.Z <= (double)uVar18) {
      uVar18 = local_1d0._s_0.Z;
    }
    if ((double)(float)((uint)param_2 ^ uVar1) < (double)uVar18) {
      uVar18 = local_1d0._s_0.X;
      if (local_1d0._s_0.X <= local_1d0._s_0.Y) {
        uVar18 = local_1d0._s_0.Y;
      }
      if ((double)uVar18 <= local_1d0._s_0.Z) {
        uVar18 = local_1d0._s_0.Z;
      }
      if ((double)uVar18 < (double)(param_2 + fVar8)) {
        pFVar6 = (param_3->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_204) &&
            ((FScriptContainerElement *)&local_204 < pFVar6 + (longlong)param_3->ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = param_3->ArrayNum;
        if (iVar11 == param_3->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar11 + 1;
        *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_204;
      }
    }
    uVar14 = (ulonglong)(uint)local_168.ArrayNum;
    FVar16 = (ForElementType<int>)((longlong)FVar16 + 4);
    uVar17 = (ulonglong)local_200;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// FindOverlappingTriangle @ 148fae3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_>::FindOverlappingTriangle
          (FQuadTreeQueryHelper<FSkelMeshVertexAccessorHelper<0>_> *this,TVector2<double> *param_1,
          float param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FNiagaraUvQuadTree *pFVar2;
  FSubTree *this_00;
  FSkelMeshVertexAccessorHelper<0> *pFVar3;
  FRawStaticIndexBuffer16or32Interface *pFVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  ForElementType<int> FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TVector2<float> TVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForElementType<int> FVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [4];
  int local_204;
  uint local_200;
  TVector2<double> *local_1f8;
  ForElementType<int> local_1f0;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector2<double>_u_0 local_1b8;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  TStaticArray<int,4,4294967295> local_178;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_168;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1b8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_1b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = this->QuadTree;
  lVar15 = 0;
  local_198 = 1;
  local_168.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0x20;
  local_1f8 = param_1;
  local_1a8 = local_1b8._s_0.X;
  dStack_1a0 = local_1b8._s_0.Y;
  if (((pFVar2->ChildTrees).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (FSubTree *)(pFVar2->ChildTrees).AllocatorInstance.Data;
  FNiagaraUvQuadTree::FSubTree::
  GetIntersectingElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            (this_00,pFVar2,(TBox2<double> *)&local_1b8._s_0,&local_168);
  iVar11 = FNiagaraUvQuadTree::FSubTree::GetQuads
                     (this_00,(TBox2<double> *)&local_1b8._s_0,&local_178);
  if (0 < iVar11) {
    do {
      uVar1 = local_178.Elements[lVar15];
      uVar12 = 0;
      if ((int)uVar1 < (pFVar2->ChildTrees).ArrayNum) {
        uVar12 = ~uVar1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraUvQuadTree::FSubTree::
      GetElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                ((FSubTree *)
                 ((pFVar2->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x50),pFVar2,
                 (TBox2<double> *)&local_1b8._s_0,&local_168);
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar11);
  }
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar8 = __real_3f800000;
  uVar14 = (ulonglong)local_168.ArrayNum;
  local_1f0 = (ForElementType<int>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    local_1f0 = local_168.AllocatorInstance.SecondaryData;
  }
  local_200 = local_168.ArrayNum;
  FVar16 = (ForElementType<int>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar16 = local_168.AllocatorInstance.SecondaryData;
  }
  local_1f0 = (ForElementType<int>)((longlong)local_1f0 + uVar14 * 4);
  uVar17 = uVar14;
  while( true ) {
    FVar9 = local_1f0;
    if ((int)uVar14 != (int)uVar17) {
      local_208[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_208);
    }
    if (FVar16 == FVar9) {
      if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
      }
      return;
    }
    local_204 = *(int *)FVar16;
    pFVar3 = this->MeshAccessor;
    iVar11 = local_204 * 3;
    pFVar4 = pFVar3->IndexBuffer;
    uVar12 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar11);
    pFVar5 = pFVar3->LodRenderData;
    if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                            ,0x1f5,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TVar13 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                       (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_190,uVar12
                       );
    pFVar3 = this->MeshAccessor;
    local_d8._s_0.Z = 0.0;
    local_d8._s_0.Y = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
    local_d8._s_0.X = (double)*(float *)TVar13.field0_0x0;
    pFVar4 = pFVar3->IndexBuffer;
    uVar12 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar11 + 1);
    pFVar5 = pFVar3->LodRenderData;
    if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                            ,0x1f5,L""), bVar10)) break;
    TVar13 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                       (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_188,uVar12
                       );
    pFVar3 = this->MeshAccessor;
    local_c0._s_0.Z = 0.0;
    local_c0._s_0.Y = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
    local_c0._s_0.X = (double)*(float *)TVar13.field0_0x0;
    pFVar4 = pFVar3->IndexBuffer;
    uVar12 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar11 + 2);
    pFVar5 = pFVar3->LodRenderData;
    if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                            ,0x1f5,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TVar13 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                       (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_180,uVar12
                       );
    local_1e8._s_0.Z = 0.0;
    local_a8._s_0.X = (double)*(float *)TVar13.field0_0x0;
    local_a8._s_0.Y = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
    local_1e8._s_0.X = (local_1f8->field0_0x0)._s_0.X;
    local_1e8._s_0.Y = (local_1f8->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = 0.0;
    FMath::GetBaryCentric2D
              ((TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1e8._s_0,
               (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_c0._s_0,
               (TVector<double> *)&local_a8._s_0);
    uVar18 = local_1d0._s_0.X;
    if (local_1d0._s_0.Y <= local_1d0._s_0.X) {
      uVar18 = local_1d0._s_0.Y;
    }
    if (local_1d0._s_0.Z <= (double)uVar18) {
      uVar18 = local_1d0._s_0.Z;
    }
    if ((double)(float)((uint)param_2 ^ uVar1) < (double)uVar18) {
      uVar18 = local_1d0._s_0.X;
      if (local_1d0._s_0.X <= local_1d0._s_0.Y) {
        uVar18 = local_1d0._s_0.Y;
      }
      if ((double)uVar18 <= local_1d0._s_0.Z) {
        uVar18 = local_1d0._s_0.Z;
      }
      if ((double)uVar18 < (double)(param_2 + fVar8)) {
        pFVar6 = (param_3->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_204) &&
            ((FScriptContainerElement *)&local_204 < pFVar6 + (longlong)param_3->ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = param_3->ArrayNum;
        if (iVar11 == param_3->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar11 + 1;
        *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_204;
      }
    }
    uVar14 = (ulonglong)(uint)local_168.ArrayNum;
    FVar16 = (ForElementType<int>)((longlong)FVar16 + 4);
    uVar17 = (ulonglong)local_200;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// operator() @ 1492173a0

bool __thiscall
`FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindFirstTriangle'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TVector2<float> TVar13;
  double *pdVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar23;
  double dVar24;
  double dVar25;
  double local_res8 [2];
  double local_res18;
  double local_res20;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  double local_108 [5];
  double local_e0;
  TVector<double> local_d8 [8];
  double dVar22;
  
  plVar7 = *(longlong **)(*(longlong *)this + 8);
  lVar17 = (longlong)(param_1 * 3);
  if (*(char *)((longlong)plVar7 + 0x14) == '\0') {
    uVar16 = (uint)*(ushort *)(plVar7[1] + lVar17 * 2);
  }
  else {
    uVar16 = *(uint *)(plVar7[1] + lVar17 * 4);
  }
  TVar13 = FStaticMeshVertexBuffer::GetVertexUV
                     ((FStaticMeshVertexBuffer *)(*plVar7 + 0xd0),(uint)local_res8,uVar16);
  fVar1 = *(float *)TVar13.field0_0x0;
  fVar2 = *(float *)((longlong)TVar13.field0_0x0 + 4);
  plVar7 = *(longlong **)(*(longlong *)this + 8);
  if (*(char *)((longlong)plVar7 + 0x14) == '\0') {
    uVar16 = (uint)*(ushort *)(plVar7[1] + 2 + lVar17 * 2);
  }
  else {
    uVar16 = *(uint *)(plVar7[1] + 4 + lVar17 * 4);
  }
  TVar13 = FStaticMeshVertexBuffer::GetVertexUV
                     ((FStaticMeshVertexBuffer *)(*plVar7 + 0xd0),(uint)local_res8,uVar16);
  fVar3 = *(float *)TVar13.field0_0x0;
  plVar7 = *(longlong **)(*(longlong *)this + 8);
  local_138._s_0.Y = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
  if (*(char *)((longlong)plVar7 + 0x14) == '\0') {
    uVar16 = (uint)*(ushort *)(plVar7[1] + 4 + lVar17 * 2);
  }
  else {
    uVar16 = *(uint *)(plVar7[1] + 8 + lVar17 * 4);
  }
  local_res20 = (double)fVar3;
  TVar13 = FStaticMeshVertexBuffer::GetVertexUV
                     ((FStaticMeshVertexBuffer *)(*plVar7 + 0xd0),(uint)&local_res18,uVar16);
  local_res8[0] = (double)*(float *)TVar13.field0_0x0;
  dVar4 = **(double **)((longlong)this + 8);
  dVar19 = (*(double **)((longlong)this + 8))[1];
  dVar5 = **(double **)((longlong)this + 0x10);
  dVar6 = (*(double **)((longlong)this + 0x10))[1];
  dVar11 = dVar4 * local_res8[0] + dVar5;
  local_res18 = (double)*(float *)((longlong)TVar13.field0_0x0 + 4);
  dVar9 = dVar4 * (double)fVar1 + dVar5;
  dVar10 = dVar19 * (double)fVar2 + dVar6;
  dVar5 = dVar4 * (double)fVar3 + dVar5;
  dVar4 = dVar19 * local_138._s_0.Y + dVar6;
  dVar6 = dVar19 * local_res18 + dVar6;
  dVar19 = dVar9;
  if (dVar5 <= dVar9) {
    dVar19 = dVar5;
  }
  dVar18 = dVar10;
  if (dVar4 <= dVar10) {
    dVar18 = dVar4;
  }
  if (dVar11 <= dVar19) {
    dVar19 = dVar11;
  }
  if (dVar6 <= dVar18) {
    dVar18 = dVar6;
  }
  if (dVar18 <= dVar19) {
    dVar18 = dVar19;
  }
  if (dVar18 <= __real_3ff0000000000000) {
    dVar19 = dVar10;
    if (dVar10 <= dVar4) {
      dVar19 = dVar4;
    }
    dVar18 = dVar9;
    if (dVar9 <= dVar5) {
      dVar18 = dVar5;
    }
    if (dVar19 <= dVar6) {
      dVar19 = dVar6;
    }
    if (dVar18 <= dVar11) {
      dVar18 = dVar11;
    }
    if (dVar18 <= dVar19) {
      dVar19 = dVar18;
    }
    if (0.0 <= dVar19) {
      pdVar14 = local_108;
      uVar16 = 0;
      local_108[0] = dVar11 - dVar5;
      local_108[1] = dVar6 - dVar4;
      local_108[2] = dVar9 - dVar11;
      local_108[3] = dVar10 - dVar6;
      local_108[4] = dVar5 - dVar9;
      local_e0 = dVar4 - dVar10;
      while( true ) {
        dVar19 = *pdVar14;
        uVar21 = SUB84(pdVar14[1],0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar23 = (uint)((ulonglong)pdVar14[1] >> 0x20) ^
                 (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dVar22 = (double)CONCAT44(uVar23,uVar21);
        dVar18 = (double)CONCAT44(uVar23,uVar21) + dVar19;
        dVar25 = dVar19 * dVar6 + dVar11 * dVar22;
        dVar20 = (double)CONCAT44(uVar23,uVar21);
        if (dVar19 <= (double)CONCAT44(uVar23,uVar21)) {
          dVar20 = dVar19;
        }
        dVar8 = dVar19 * dVar4 + dVar5 * dVar22;
        if (dVar18 <= dVar20) {
          dVar20 = dVar18;
        }
        dVar24 = dVar19 * dVar10 + dVar9 * dVar22;
        if (0.0 <= dVar20) {
          dVar20 = 0.0;
        }
        dVar12 = dVar24;
        if (dVar24 <= dVar8) {
          dVar12 = dVar8;
        }
        if (dVar12 <= dVar25) {
          dVar12 = dVar25;
        }
        if (dVar12 < dVar20) break;
        if (dVar22 <= dVar19) {
          dVar22 = dVar19;
        }
        if (dVar8 <= dVar24) {
          dVar24 = dVar8;
        }
        if (dVar22 <= dVar18) {
          dVar22 = dVar18;
        }
        if (dVar25 <= dVar24) {
          dVar24 = dVar25;
        }
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        if (dVar22 < dVar24) {
          return true;
        }
        uVar16 = uVar16 + 1;
        pdVar14 = pdVar14 + 2;
        if (2 < uVar16) {
          local_138._s_0.X = local_res20;
          local_150._s_0.Z = 0.0;
          local_138._s_0.Z = 0.0;
          local_120._s_0.Z = 0.0;
          local_150._s_0.X = local_res8[0];
          local_150._s_0.Y = local_res18;
          local_120._s_0.X = (double)fVar1;
          local_120._s_0.Y = (double)fVar2;
          pTVar15 = FMath::GetBaryCentric2D
                              (local_d8,*(TVector<double> **)((longlong)this + 0x20),
                               (TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0
                               ,(TVector<double> *)&local_150._s_0);
          pdVar14 = *(double **)((longlong)this + 0x18);
          dVar4 = (pTVar15->field0_0x0)._s_0.Y;
          *pdVar14 = (pTVar15->field0_0x0)._s_0.X;
          pdVar14[1] = dVar4;
          pdVar14[2] = (pTVar15->field0_0x0)._s_0.Z;
          **(int **)((longlong)this + 0x28) = param_1;
          return false;
        }
      }
    }
  }
  return true;
}

// BuildTriangleCoordinate @ 149220d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::BuildTriangleCoordinate
          (FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper> *this,
          TVector<double> *__return_storage_ptr__,TVector2<double> *param_1,int param_2)

{
  FStaticMeshVertexAccessorHelper *pFVar1;
  void *pvVar2;
  TVector2<float> TVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [8];
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  lVar4 = (longlong)(param_2 * 3);
  pFVar1 = this->MeshAccessor;
  pvVar2 = (pFVar1->IndexBuffer).UntypedIndexData;
  if ((pFVar1->IndexBuffer).b32Bit == false) {
    uVar5 = (uint)*(ushort *)((longlong)pvVar2 + lVar4 * 2);
  }
  else {
    uVar5 = *(uint *)((longlong)pvVar2 + lVar4 * 4);
  }
  TVar3 = FStaticMeshVertexBuffer::GetVertexUV
                    (&(pFVar1->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,(uint)local_a8,
                     uVar5);
  pFVar1 = this->MeshAccessor;
  local_88._s_0.Z = 0.0;
  local_88._s_0.Y = (double)*(float *)((longlong)TVar3.field0_0x0 + 4);
  local_88._s_0.X = (double)*(float *)TVar3.field0_0x0;
  pvVar2 = (pFVar1->IndexBuffer).UntypedIndexData;
  if ((pFVar1->IndexBuffer).b32Bit == false) {
    uVar5 = (uint)*(ushort *)((longlong)pvVar2 + lVar4 * 2 + 2);
  }
  else {
    uVar5 = *(uint *)((longlong)pvVar2 + lVar4 * 4 + 4);
  }
  TVar3 = FStaticMeshVertexBuffer::GetVertexUV
                    (&(pFVar1->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,(uint)local_a8,
                     uVar5);
  pFVar1 = this->MeshAccessor;
  local_70._s_0.Z = 0.0;
  local_70._s_0.Y = (double)*(float *)((longlong)TVar3.field0_0x0 + 4);
  local_70._s_0.X = (double)*(float *)TVar3.field0_0x0;
  pvVar2 = (pFVar1->IndexBuffer).UntypedIndexData;
  if ((pFVar1->IndexBuffer).b32Bit == false) {
    uVar5 = (uint)*(ushort *)((longlong)pvVar2 + lVar4 * 2 + 4);
  }
  else {
    uVar5 = *(uint *)((longlong)pvVar2 + lVar4 * 4 + 8);
  }
  TVar3 = FStaticMeshVertexBuffer::GetVertexUV
                    (&(pFVar1->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,(uint)local_a8,
                     uVar5);
  local_a0._s_0.Z = 0.0;
  local_58._s_0.X = (double)*(float *)TVar3.field0_0x0;
  local_58._s_0.Y = (double)*(float *)((longlong)TVar3.field0_0x0 + 4);
  local_a0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_a0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_58._s_0.Z = 0.0;
  FMath::GetBaryCentric2D
            (__return_storage_ptr__,(TVector<double> *)&local_a0._s_0,
             (TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70._s_0,
             (TVector<double> *)&local_58._s_0);
  return __return_storage_ptr__;
}

// FindOverlappingTriangle @ 149230110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper>::FindOverlappingTriangle
          (FQuadTreeQueryHelper<FStaticMeshVertexAccessorHelper> *this,TVector2<double> *param_1,
          float param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  ForElementType<int> FVar1;
  uint uVar2;
  FNiagaraUvQuadTree *pFVar3;
  FSubTree *this_00;
  FStaticMeshVertexAccessorHelper *pFVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  TVector2<float> TVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForElementType<int> FVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [4];
  int local_1f4;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector2<double>_u_0 local_1c0;
  double local_1b0;
  double dStack_1a8;
  undefined1 local_1a0;
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  TStaticArray<int,4,4294967295> local_180;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_168;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1c0._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_1c0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = this->QuadTree;
  lVar14 = 0;
  local_1a0 = 1;
  local_168.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0x20;
  local_1b0 = local_1c0._s_0.X;
  dStack_1a8 = local_1c0._s_0.Y;
  if (((pFVar3->ChildTrees).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (FSubTree *)(pFVar3->ChildTrees).AllocatorInstance.Data;
  FNiagaraUvQuadTree::FSubTree::
  GetIntersectingElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            (this_00,pFVar3,(TBox2<double> *)&local_1c0._s_0,&local_168);
  iVar10 = FNiagaraUvQuadTree::FSubTree::GetQuads
                     (this_00,(TBox2<double> *)&local_1c0._s_0,&local_180);
  if (0 < iVar10) {
    do {
      uVar2 = local_180.Elements[lVar14];
      uVar16 = 0;
      if ((int)uVar2 < (pFVar3->ChildTrees).ArrayNum) {
        uVar16 = ~uVar2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraUvQuadTree::FSubTree::
      GetElements<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                ((FSubTree *)
                 ((pFVar3->ChildTrees).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x50),pFVar3,
                 (TBox2<double> *)&local_1c0._s_0,&local_168);
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar10);
  }
  iVar10 = local_168.ArrayNum;
  uVar2 = __xmm_80000000800000008000000080000000;
  fVar8 = __real_3f800000;
  uVar13 = (ulonglong)local_168.ArrayNum;
  FVar15 = (ForElementType<int>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar15 = local_168.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<int>)((longlong)FVar15 + uVar13 * 4);
  while( true ) {
    if ((uint)uVar13 != iVar10) {
      local_1f8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    if (FVar15 == FVar1) break;
    local_1f4 = *(int *)FVar15;
    pFVar4 = this->MeshAccessor;
    lVar14 = (longlong)(local_1f4 * 3);
    pvVar5 = (pFVar4->IndexBuffer).UntypedIndexData;
    if ((pFVar4->IndexBuffer).b32Bit == false) {
      uVar16 = (uint)*(ushort *)((longlong)pvVar5 + lVar14 * 2);
    }
    else {
      uVar16 = *(uint *)((longlong)pvVar5 + lVar14 * 4);
    }
    TVar12 = FStaticMeshVertexBuffer::GetVertexUV
                       (&(pFVar4->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,
                        (uint)local_198,uVar16);
    pFVar4 = this->MeshAccessor;
    local_d8._s_0.Z = 0.0;
    local_d8._s_0.Y = (double)*(float *)((longlong)TVar12.field0_0x0 + 4);
    local_d8._s_0.X = (double)*(float *)TVar12.field0_0x0;
    pvVar5 = (pFVar4->IndexBuffer).UntypedIndexData;
    if ((pFVar4->IndexBuffer).b32Bit == false) {
      uVar16 = (uint)*(ushort *)((longlong)pvVar5 + lVar14 * 2 + 2);
    }
    else {
      uVar16 = *(uint *)((longlong)pvVar5 + lVar14 * 4 + 4);
    }
    TVar12 = FStaticMeshVertexBuffer::GetVertexUV
                       (&(pFVar4->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,
                        (uint)local_190,uVar16);
    pFVar4 = this->MeshAccessor;
    local_c0._s_0.Z = 0.0;
    local_c0._s_0.Y = (double)*(float *)((longlong)TVar12.field0_0x0 + 4);
    local_c0._s_0.X = (double)*(float *)TVar12.field0_0x0;
    pvVar5 = (pFVar4->IndexBuffer).UntypedIndexData;
    if ((pFVar4->IndexBuffer).b32Bit == false) {
      uVar16 = (uint)*(ushort *)((longlong)pvVar5 + lVar14 * 2 + 4);
    }
    else {
      uVar16 = *(uint *)((longlong)pvVar5 + lVar14 * 4 + 8);
    }
    TVar12 = FStaticMeshVertexBuffer::GetVertexUV
                       (&(pFVar4->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,
                        (uint)local_188,uVar16);
    local_1f0._s_0.Z = 0.0;
    local_a8._s_0.X = (double)*(float *)TVar12.field0_0x0;
    local_a8._s_0.Y = (double)*(float *)((longlong)TVar12.field0_0x0 + 4);
    local_1f0._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_1f0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_a8._s_0.Z = 0.0;
    FMath::GetBaryCentric2D
              ((TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_1f0._s_0,
               (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_c0._s_0,
               (TVector<double> *)&local_a8._s_0);
    uVar17 = local_1d8._s_0.X;
    if (local_1d8._s_0.Y <= local_1d8._s_0.X) {
      uVar17 = local_1d8._s_0.Y;
    }
    if (local_1d8._s_0.Z <= (double)uVar17) {
      uVar17 = local_1d8._s_0.Z;
    }
    if ((double)(float)((uint)param_2 ^ uVar2) < (double)uVar17) {
      uVar17 = local_1d8._s_0.X;
      if (local_1d8._s_0.X <= local_1d8._s_0.Y) {
        uVar17 = local_1d8._s_0.Y;
      }
      if ((double)uVar17 <= local_1d8._s_0.Z) {
        uVar17 = local_1d8._s_0.Z;
      }
      if ((double)uVar17 < (double)(param_2 + fVar8)) {
        pFVar6 = (param_3->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_1f4) &&
            ((FScriptContainerElement *)&local_1f4 < pFVar6 + (longlong)param_3->ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = param_3->ArrayNum;
        if (iVar11 == param_3->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar11 + 1;
        *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_1f4;
      }
    }
    uVar13 = (ulonglong)(uint)local_168.ArrayNum;
    FVar15 = (ForElementType<int>)((longlong)FVar15 + 4);
  }
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  return;
}

