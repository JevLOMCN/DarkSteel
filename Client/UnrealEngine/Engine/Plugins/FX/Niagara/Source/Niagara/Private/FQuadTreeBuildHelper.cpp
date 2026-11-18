// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// Build @ 148f8f1e0

void __thiscall
FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<1>_>::Build
          (FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<1>_> *this)

{
  float fVar1;
  float fVar2;
  FSkelMeshVertexAccessorHelper<1> *pFVar3;
  FRawStaticIndexBuffer16or32Interface *pFVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  FNiagaraUvQuadTree *this_00;
  code *pcVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  TVector2<float> TVar14;
  TBox2<double> *pTVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  TVector2<double>_u_0 local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  TBox2<double> local_b0 [3];
  
  iVar12 = (**(code **)(this->MeshAccessor->IndexBuffer->_padding_ + 0x50))();
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3e45798ee0000000;
  iVar17 = 0;
  if (0 < iVar12 / 3) {
    iVar16 = 2;
    do {
      pFVar3 = this->MeshAccessor;
      pFVar4 = pFVar3->IndexBuffer;
      uVar13 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar16 + -2);
      pFVar5 = pFVar3->LodRenderData;
      if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                              ,0x1f5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar14 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                         (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_c8,
                          uVar13);
      pFVar3 = this->MeshAccessor;
      pFVar4 = pFVar3->IndexBuffer;
      dVar18 = (double)*(float *)TVar14.field0_0x0;
      dVar7 = (double)*(float *)((longlong)TVar14.field0_0x0 + 4);
      local_f8._s_0.X = dVar18;
      local_f8._s_0.Y = dVar7;
      uVar13 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar16 + -1);
      pFVar5 = pFVar3->LodRenderData;
      if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                              ,0x1f5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar14 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                         (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_c0,
                          uVar13);
      pFVar3 = this->MeshAccessor;
      fVar1 = *(float *)TVar14.field0_0x0;
      fVar2 = *(float *)((longlong)TVar14.field0_0x0 + 4);
      pFVar4 = pFVar3->IndexBuffer;
      local_e8 = (double)fVar1;
      local_e0 = (double)fVar2;
      uVar13 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar16);
      pFVar5 = pFVar3->LodRenderData;
      if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                              ,0x1f5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar14 = FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                         (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_b8,
                          uVar13);
      local_d0 = (double)*(float *)((longlong)TVar14.field0_0x0 + 4);
      local_d8 = (double)*(float *)TVar14.field0_0x0;
      dVar18 = (local_d0 - dVar7) * ((double)fVar1 - dVar18) -
               (local_d8 - dVar18) * ((double)fVar2 - dVar7);
      if (dVar8 <= (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar10,
                                    SUB84(dVar18,0) & uVar9)) {
        this_00 = this->QuadTree;
        pTVar15 = UE::Math::TBox2<double>::TBox2<double>
                            (local_b0,(TVector2<double> *)&local_f8._s_0,3);
        FNiagaraUvQuadTree::Insert(this_00,iVar17,pTVar15);
      }
      iVar17 = iVar17 + 1;
      iVar16 = iVar16 + 3;
    } while (iVar17 < iVar12 / 3);
  }
  return;
}

// Build @ 148f8f4d0

void __thiscall
FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<0>_>::Build
          (FQuadTreeBuildHelper<FSkelMeshVertexAccessorHelper<0>_> *this)

{
  float fVar1;
  float fVar2;
  FSkelMeshVertexAccessorHelper<0> *pFVar3;
  FRawStaticIndexBuffer16or32Interface *pFVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  FNiagaraUvQuadTree *this_00;
  code *pcVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  TVector2<float> TVar14;
  TBox2<double> *pTVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  TVector2<double>_u_0 local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  TBox2<double> local_b0 [3];
  
  iVar12 = (**(code **)(this->MeshAccessor->IndexBuffer->_padding_ + 0x50))();
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3e45798ee0000000;
  iVar17 = 0;
  if (0 < iVar12 / 3) {
    iVar16 = 2;
    do {
      pFVar3 = this->MeshAccessor;
      pFVar4 = pFVar3->IndexBuffer;
      uVar13 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar16 + -2);
      pFVar5 = pFVar3->LodRenderData;
      if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                              ,0x1f5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar14 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                         (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_c8,
                          uVar13);
      pFVar3 = this->MeshAccessor;
      pFVar4 = pFVar3->IndexBuffer;
      dVar18 = (double)*(float *)TVar14.field0_0x0;
      dVar7 = (double)*(float *)((longlong)TVar14.field0_0x0 + 4);
      local_f8._s_0.X = dVar18;
      local_f8._s_0.Y = dVar7;
      uVar13 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar16 + -1);
      pFVar5 = pFVar3->LodRenderData;
      if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                              ,0x1f5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar14 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                         (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_c0,
                          uVar13);
      pFVar3 = this->MeshAccessor;
      fVar1 = *(float *)TVar14.field0_0x0;
      fVar2 = *(float *)((longlong)TVar14.field0_0x0 + 4);
      pFVar4 = pFVar3->IndexBuffer;
      local_e8 = (double)fVar1;
      local_e0 = (double)fVar2;
      uVar13 = (**(code **)(pFVar4->_padding_ + 0x60))(pFVar4,iVar16);
      pFVar5 = pFVar3->LodRenderData;
      if ((pFVar5 == (FSkeletalMeshLODRenderData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NDISkeletalMeshCommon.h"
                              ,0x1f5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TVar14 = FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                         (&(pFVar5->StaticVertexBuffers).StaticMeshVertexBuffer,(uint)local_b8,
                          uVar13);
      local_d0 = (double)*(float *)((longlong)TVar14.field0_0x0 + 4);
      local_d8 = (double)*(float *)TVar14.field0_0x0;
      dVar18 = (local_d0 - dVar7) * ((double)fVar1 - dVar18) -
               (local_d8 - dVar18) * ((double)fVar2 - dVar7);
      if (dVar8 <= (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar10,
                                    SUB84(dVar18,0) & uVar9)) {
        this_00 = this->QuadTree;
        pTVar15 = UE::Math::TBox2<double>::TBox2<double>
                            (local_b0,(TVector2<double> *)&local_f8._s_0,3);
        FNiagaraUvQuadTree::Insert(this_00,iVar17,pTVar15);
      }
      iVar17 = iVar17 + 1;
      iVar16 = iVar16 + 3;
    } while (iVar17 < iVar12 / 3);
  }
  return;
}

// Build @ 14921ea10

void __thiscall
FQuadTreeBuildHelper<FStaticMeshVertexAccessorHelper>::Build
          (FQuadTreeBuildHelper<FStaticMeshVertexAccessorHelper> *this)

{
  float fVar1;
  float fVar2;
  FStaticMeshLODResources *pFVar3;
  FStaticMeshVertexAccessorHelper *pFVar4;
  void *pvVar5;
  FNiagaraUvQuadTree *this_00;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  TVector2<float> TVar11;
  TBox2<double> *pTVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  TVector2<double>_u_0 local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  TBox2<double> local_a0 [3];
  
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3e45798ee0000000;
  pFVar3 = this->MeshAccessor->LodRenderData;
  iVar13 = (pFVar3->IndexBuffer).CachedNumIndices;
  if (iVar13 < 0) {
    iVar13 = (int)(pFVar3->IndexBuffer).IndexStorage._padding_;
    if ((pFVar3->IndexBuffer).b32Bit == false) {
      iVar13 = iVar13 / 2;
    }
    else {
      iVar13 = (int)((iVar13 >> 0x1f & 3U) + iVar13) >> 2;
    }
  }
  iVar14 = 0;
  iVar13 = iVar13 / 3 + (iVar13 >> 0x1f) +
           (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar18 = (longlong)iVar13;
  if (0 < iVar13) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      pFVar4 = this->MeshAccessor;
      pvVar5 = (pFVar4->IndexBuffer).UntypedIndexData;
      if ((pFVar4->IndexBuffer).b32Bit == false) {
        uVar17 = (uint)*(ushort *)(lVar16 + (longlong)pvVar5);
      }
      else {
        uVar17 = *(uint *)(lVar15 + (longlong)pvVar5);
      }
      TVar11 = FStaticMeshVertexBuffer::GetVertexUV
                         (&(pFVar4->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,
                          (uint)local_b8,uVar17);
      pFVar4 = this->MeshAccessor;
      dVar6 = (double)*(float *)TVar11.field0_0x0;
      pvVar5 = (pFVar4->IndexBuffer).UntypedIndexData;
      dVar7 = (double)*(float *)((longlong)TVar11.field0_0x0 + 4);
      if ((pFVar4->IndexBuffer).b32Bit == false) {
        uVar17 = (uint)*(ushort *)(lVar16 + 2 + (longlong)pvVar5);
      }
      else {
        uVar17 = *(uint *)(lVar15 + 4 + (longlong)pvVar5);
      }
      local_e8._s_0.X = dVar6;
      local_e8._s_0.Y = dVar7;
      TVar11 = FStaticMeshVertexBuffer::GetVertexUV
                         (&(pFVar4->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,
                          (uint)local_b0,uVar17);
      fVar1 = *(float *)TVar11.field0_0x0;
      fVar2 = *(float *)((longlong)TVar11.field0_0x0 + 4);
      pFVar4 = this->MeshAccessor;
      pvVar5 = (pFVar4->IndexBuffer).UntypedIndexData;
      if ((pFVar4->IndexBuffer).b32Bit == false) {
        uVar17 = (uint)*(ushort *)(lVar16 + 4 + (longlong)pvVar5);
      }
      else {
        uVar17 = *(uint *)(lVar15 + 8 + (longlong)pvVar5);
      }
      local_d8 = (double)fVar1;
      local_d0 = (double)fVar2;
      TVar11 = FStaticMeshVertexBuffer::GetVertexUV
                         (&(pFVar4->LodRenderData->VertexBuffers).StaticMeshVertexBuffer,
                          (uint)local_a8,uVar17);
      local_c8 = (double)*(float *)TVar11.field0_0x0;
      local_c0 = (double)*(float *)((longlong)TVar11.field0_0x0 + 4);
      dVar6 = ((double)fVar1 - dVar6) * (local_c0 - dVar7) -
              ((double)fVar2 - dVar7) * (local_c8 - dVar6);
      if (dVar8 <= (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar10,SUB84(dVar6,0) & uVar9
                                   )) {
        this_00 = this->QuadTree;
        pTVar12 = UE::Math::TBox2<double>::TBox2<double>
                            (local_a0,(TVector2<double> *)&local_e8._s_0,3);
        FNiagaraUvQuadTree::Insert(this_00,iVar14,pTVar12);
      }
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 0xc;
      lVar16 = lVar16 + 6;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

