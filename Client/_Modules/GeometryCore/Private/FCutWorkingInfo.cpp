// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 10

// FCutWorkingInfo @ 143567650

FCutWorkingInfo * __thiscall
MeshCut::FCutWorkingInfo::FCutWorkingInfo
          (FCutWorkingInfo *this,FDynamicMesh3 *param_1,double param_2)

{
  this->Mesh = param_1;
  *(undefined8 *)&this->FaceVertices = 0;
  *(undefined8 *)&(this->FaceVertices).field_0x8 = 0;
  *(undefined8 *)&(this->FaceVertices).field_0x20 = 0;
  this->SnapToleranceSq = param_2 * param_2;
  *(undefined4 *)&(this->FaceVertices).field_0x28 = 0;
  *(undefined4 *)&(this->FaceVertices).field_0x2c = 0x80;
  *(undefined4 *)&(this->FaceVertices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FaceVertices).field_0x34 = 0;
  *(undefined8 *)&(this->FaceVertices).field_0x40 = 0;
  *(undefined4 *)&(this->FaceVertices).field_0x48 = 0;
  *(undefined8 *)&this->EdgeVertices = 0;
  *(undefined8 *)&(this->EdgeVertices).field_0x8 = 0;
  *(undefined8 *)&(this->EdgeVertices).field_0x20 = 0;
  *(undefined4 *)&(this->EdgeVertices).field_0x28 = 0;
  *(undefined4 *)&(this->EdgeVertices).field_0x2c = 0x80;
  *(undefined4 *)&(this->EdgeVertices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EdgeVertices).field_0x34 = 0;
  *(undefined8 *)&(this->EdgeVertices).field_0x40 = 0;
  *(undefined4 *)&(this->EdgeVertices).field_0x48 = 0;
  (this->BaseFaceNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFaceNormals).ArrayNum = 0;
  (this->BaseFaceNormals).ArrayMax = 0;
  (this->IntersectionVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntersectionVerts).ArrayNum = 0;
  (this->IntersectionVerts).ArrayMax = 0;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  Init(this,param_1);
  return this;
}

// ~FCutWorkingInfo @ 143568e80

void __thiscall MeshCut::FCutWorkingInfo::~FCutWorkingInfo(FCutWorkingInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Segments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntersectionVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseFaceNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EdgeVertices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EdgeVertices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EdgeVertices);
  *(undefined4 *)&(this->FaceVertices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FaceVertices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FaceVertices);
  return;
}

// AddSegments @ 143574220

void __thiscall
MeshCut::FCutWorkingInfo::AddSegments
          (FCutWorkingInfo *this,FIntersectionsQueryResult *param_1,int param_2)

{
  int *piVar1;
  TArray<MeshCut::FSegmentToElements,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  code *pcVar10;
  undefined8 uVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  double *pdVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar34;
  double dVar33;
  double dVar35;
  int local_res20 [2];
  uint local_248;
  FScriptContainerElement *local_230;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  double local_1f8 [4];
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 local_1a8 [8];
  int *local_1a0;
  double local_198;
  undefined8 local_190;
  undefined4 local_188;
  double local_180;
  double local_178;
  double local_170;
  TVector<double>_u_0 local_168;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  TVector<double>_u_0 local_130;
  undefined8 local_118;
  double local_110;
  double dStack_108;
  double local_100;
  FScriptContainerElement *local_f8;
  int *local_f0;
  FScriptContainerElement *local_e8;
  int *local_e0;
  
  iVar14 = (param_1->Segments).ArrayNum;
  piVar1 = &(this->Segments).ArrayNum;
  uVar6 = *piVar1;
  pTVar2 = &this->Segments;
  uVar20 = iVar14 + uVar6;
  if ((int)uVar6 < (int)uVar20) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar14,&pTVar2->AllocatorInstance,piVar1,&(this->Segments).ArrayMax);
  }
  else {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if ((int)uVar20 < (int)uVar6) {
      uVar18 = uVar6 - uVar20;
      if (((int)(uVar18 | uVar20) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar18 != 0) {
        pFVar23 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar20 * 0xc;
        iVar14 = ((this->Segments).ArrayNum - uVar18) - uVar20;
        if (iVar14 != 0) {
          memmove(pFVar23,pFVar23 + (longlong)(int)uVar18 * 0xc,(longlong)iVar14 * 0xc);
        }
        piVar1 = &(this->Segments).ArrayNum;
        *piVar1 = *piVar1 - uVar18;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&pTVar2->AllocatorInstance,(this->Segments).ArrayNum,
                   &(this->Segments).ArrayMax);
      }
    }
  }
  dVar12 = __real_3fe0000000000000;
  local_248 = 0;
  local_210 = (longlong)(param_1->Segments).ArrayNum;
  if (0 < local_210) {
    piVar1 = &(this->IntersectionVerts).ArrayMax;
    local_1a0 = (int *)(longlong)param_2;
    uVar24 = (ulonglong)(int)uVar6;
    lVar26 = uVar24 * 0xc;
    local_218 = 0;
    do {
      uVar20 = 0;
      if ((int)local_248 < (param_1->Segments).ArrayNum) {
        uVar20 = ~local_248 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar23 = (param_1->Segments).AllocatorInstance.Data;
      uVar18 = local_248 + (int)uVar24;
      uVar20 = 0;
      if ((int)uVar18 < (this->Segments).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = (this->Segments).AllocatorInstance.Data;
      iVar14 = -1;
      local_220 = 2;
      uVar20 = *(uint *)(pFVar23 + (longlong)local_1a0 * 4 + local_218);
      local_230 = pFVar7 + lVar26 + 4;
      *(uint *)(pFVar7 + lVar26) = uVar20;
      uVar19 = (ulonglong)(uVar20 & 0x1ff);
      pFVar8 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      lVar28 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar20 >> 9) * 8);
      uVar20 = *(uint *)(lVar28 + uVar19 * 0xc);
      uVar24 = (ulonglong)(uVar20 & 0x1ff);
      pdVar25 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + uVar24 * 0x18);
      uVar18 = *(uint *)(lVar28 + 4 + uVar19 * 0xc);
      local_1f8[0] = *pdVar25;
      local_1f8[1] = pdVar25[1];
      uVar17 = (ulonglong)(uVar18 & 0x1ff);
      local_1f8[2] = *(double *)
                      (*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar24 * 0x18);
      pdVar25 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) + uVar17 * 0x18);
      uVar20 = *(uint *)(lVar28 + 8 + uVar19 * 0xc);
      local_1d0 = *(double *)
                   (*(longlong *)(pFVar8 + (ulonglong)(uVar18 >> 9) * 8) + 0x10 + uVar17 * 0x18);
      uVar24 = (ulonglong)(uVar20 & 0x1ff);
      local_1f8[3] = *pdVar25;
      dStack_1d8 = pdVar25[1];
      pFVar23 = pFVar23 + local_218 + 8;
      pdVar25 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + uVar24 * 0x18);
      local_1c8 = *pdVar25;
      dStack_1c0 = pdVar25[1];
      local_190 = *(undefined8 *)(lVar28 + uVar19 * 0xc);
      local_1b8 = *(double *)
                   (*(longlong *)(pFVar8 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar24 * 0x18);
      local_188 = *(undefined4 *)(lVar28 + 8 + uVar19 * 0xc);
      do {
        iVar15 = (this->IntersectionVerts).ArrayNum;
        local_res20[0] = iVar15;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(this->IntersectionVerts).AllocatorInstance,piVar1);
        }
        pFVar8 = (this->IntersectionVerts).AllocatorInstance.Data;
        (this->IntersectionVerts).ArrayNum = iVar15 + 1;
        lVar28 = (longlong)iVar15 * 0x20;
        *(undefined8 *)(pFVar8 + lVar28) = 0;
        *(undefined8 *)(pFVar8 + lVar28 + 8) = 0;
        *(undefined8 *)(pFVar8 + lVar28 + 0x10) = 0;
        *(undefined4 *)(pFVar8 + lVar28 + 0x18) = 0xffffffff;
        *(undefined4 *)(pFVar8 + lVar28 + 0x1c) = 0xffffffff;
        uVar11 = *(undefined8 *)(pFVar23 + 8);
        *(undefined8 *)(pFVar8 + lVar28) = *(undefined8 *)pFVar23;
        *(undefined8 *)(pFVar8 + lVar28 + 8) = uVar11;
        *(undefined8 *)(pFVar8 + lVar28 + 0x10) = *(undefined8 *)(pFVar23 + 0x10);
        *(int *)local_230 = local_res20[0];
        dVar33 = __real_bfe0000000000000;
        dVar3 = *(double *)(pFVar8 + lVar28);
        dVar4 = *(double *)(pFVar8 + lVar28 + 8);
        dVar5 = *(double *)(pFVar8 + lVar28 + 0x10);
        local_198 = this->SnapToleranceSq;
        uVar29 = SUB84(local_198,0);
        uVar34 = (undefined4)((ulonglong)local_198 >> 0x20);
        dVar30 = (dVar4 - local_1f8[1]) * (dVar4 - local_1f8[1]) +
                 (dVar3 - local_1f8[0]) * (dVar3 - local_1f8[0]) +
                 (dVar5 - local_1f8[2]) * (dVar5 - local_1f8[2]);
        dVar31 = dVar30;
        if (local_198 <= dVar30) {
          dVar31 = local_198;
        }
        lVar16 = (ulonglong)(dVar30 < local_198) - 1;
        dVar35 = (dVar4 - dStack_1d8) * (dVar4 - dStack_1d8) +
                 (dVar3 - local_1f8[3]) * (dVar3 - local_1f8[3]) +
                 (dVar5 - local_1d0) * (dVar5 - local_1d0);
        dVar30 = dVar35;
        if (dVar31 <= dVar35) {
          dVar30 = dVar31;
        }
        if (dVar35 < dVar31) {
          lVar16 = 1;
        }
        if (dVar30 <= (dVar4 - dStack_1c0) * (dVar4 - dStack_1c0) +
                      (dVar3 - local_1c8) * (dVar3 - local_1c8) +
                      (dVar5 - local_1b8) * (dVar5 - local_1b8)) {
          if (lVar16 < 0) {
            pdVar25 = local_1f8 + 1;
            iVar15 = 0;
            iVar22 = -1;
            do {
              iVar27 = iVar15 + 1;
              local_150 = 0;
              lVar16 = (longlong)
                       (iVar27 + (iVar27 / 3 + (iVar27 >> 0x1f) +
                                 (int)(((longlong)iVar27 / 3 + ((longlong)iVar27 >> 0x3f) &
                                       0xffffffffU) >> 0x1f)) * -3);
              local_168._s_0.Y = local_1f8[lVar16 * 3 + 1] - *pdVar25;
              local_178 = (local_1f8[lVar16 * 3 + 1] + *pdVar25) * dVar12;
              local_168._s_0.X = local_1f8[lVar16 * 3] - pdVar25[-1];
              local_180 = (local_1f8[lVar16 * 3] + pdVar25[-1]) * dVar12;
              local_168._s_0.Z = local_1f8[lVar16 * 3 + 2] - pdVar25[1];
              local_170 = (local_1f8[lVar16 * 3 + 2] + pdVar25[1]) * dVar12;
              dVar31 = UE::Geometry::Normalize<double>((TVector<double> *)&local_168._s_0,0.0);
              dVar30 = dVar31 * dVar12;
              dVar35 = (dVar4 - local_178) * local_168._s_0.Y +
                       (dVar3 - local_180) * local_168._s_0.X +
                       (dVar5 - local_170) * local_168._s_0.Z;
              if (dVar35 < dVar30) {
                if (dVar31 * dVar33 < dVar35) {
                  dVar30 = dVar3 - (local_168._s_0.X * dVar35 + local_180);
                  dVar32 = dVar4 - (local_168._s_0.Y * dVar35 + local_178);
                  dVar31 = dVar5 - (local_168._s_0.Z * dVar35 + local_170);
                  dVar31 = dVar32 * dVar32 + dVar30 * dVar30 + dVar31 * dVar31;
                }
                else {
                  dVar35 = (local_180 - dVar30 * local_168._s_0.X) - dVar3;
                  dVar31 = (local_178 - dVar30 * local_168._s_0.Y) - dVar4;
                  dVar30 = (local_170 - dVar30 * local_168._s_0.Z) - dVar5;
                  dVar31 = dVar31 * dVar31 + dVar35 * dVar35 + dVar30 * dVar30;
                }
              }
              else {
                dVar31 = (dVar30 * local_168._s_0.X + local_180) - dVar3;
                dVar35 = (dVar30 * local_168._s_0.Y + local_178) - dVar4;
                dVar30 = (dVar30 * local_168._s_0.Z + local_170) - dVar5;
                dVar31 = dVar35 * dVar35 + dVar31 * dVar31 + dVar30 * dVar30;
              }
              bVar13 = (double)CONCAT44(uVar34,uVar29) == dVar31;
              bVar9 = (double)CONCAT44(uVar34,uVar29) < dVar31;
              if ((double)CONCAT44(uVar34,uVar29) <= dVar31) {
                dVar31 = (double)CONCAT44(uVar34,uVar29);
              }
              iVar21 = iVar15;
              if (bVar9 || bVar13) {
                iVar21 = iVar22;
              }
              pdVar25 = pdVar25 + 3;
              uVar29 = SUB84(dVar31,0);
              uVar34 = (undefined4)((ulonglong)dVar31 >> 0x20);
              iVar15 = iVar27;
              iVar22 = iVar21;
            } while (iVar27 < 3);
            uVar29 = SUB84(local_198,0);
            uVar34 = (undefined4)((ulonglong)local_198 >> 0x20);
            if (iVar21 < 0) {
              local_e8 = pFVar8 + lVar28 + 0x1c;
              *(undefined4 *)(pFVar8 + lVar28 + 0x18) = 2;
              *(undefined4 *)local_e8 = *(undefined4 *)(pFVar7 + lVar26);
              local_e0 = local_res20;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                          *)&this->FaceVertices,
                         (TPairInitializer<int_const_&,int_const_&> *)(local_1a8 + 4),
                         (bool *)&local_e8);
            }
            else {
              bVar13 = iVar14 == iVar21;
              iVar14 = iVar21;
              if ((bVar13) &&
                 ((dVar4 - dStack_108) * (dVar4 - dStack_108) +
                  (dVar3 - local_110) * (dVar3 - local_110) +
                  (dVar5 - local_100) * (dVar5 - local_100) < local_198)) {
                iVar15 = -1;
                pdVar25 = local_1f8 + 1;
                iVar22 = 0;
                do {
                  if (iVar22 != iVar21) {
                    iVar27 = iVar22 + 1;
                    local_118 = 0;
                    lVar16 = (longlong)
                             (iVar27 + (iVar27 / 3 + (iVar27 >> 0x1f) +
                                       (int)(((longlong)iVar27 / 3 + ((longlong)iVar27 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3);
                    local_130._s_0.Y = local_1f8[lVar16 * 3 + 1] - *pdVar25;
                    local_140 = (local_1f8[lVar16 * 3 + 1] + *pdVar25) * dVar12;
                    local_130._s_0.X = local_1f8[lVar16 * 3] - pdVar25[-1];
                    local_148 = (local_1f8[lVar16 * 3] + pdVar25[-1]) * dVar12;
                    local_130._s_0.Z = local_1f8[lVar16 * 3 + 2] - pdVar25[1];
                    local_138 = (local_1f8[lVar16 * 3 + 2] + pdVar25[1]) * dVar12;
                    dVar33 = UE::Geometry::Normalize<double>((TVector<double> *)&local_130._s_0,0.0)
                    ;
                    dVar30 = dVar33 * dVar12;
                    dVar31 = (dVar4 - local_140) * local_130._s_0.Y +
                             (dVar3 - local_148) * local_130._s_0.X +
                             (dVar5 - local_138) * local_130._s_0.Z;
                    if (dVar31 < dVar30) {
                      if (dVar33 * __real_bfe0000000000000 < dVar31) {
                        dVar35 = dVar4 - (local_130._s_0.Y * dVar31 + local_140);
                        dVar30 = dVar3 - (local_130._s_0.X * dVar31 + local_148);
                        dVar33 = dVar5 - (local_130._s_0.Z * dVar31 + local_138);
                        dVar33 = dVar35 * dVar35 + dVar30 * dVar30 + dVar33 * dVar33;
                      }
                      else {
                        dVar35 = (local_148 - local_130._s_0.X * dVar30) - dVar3;
                        dVar31 = (local_140 - local_130._s_0.Y * dVar30) - dVar4;
                        dVar33 = (local_138 - local_130._s_0.Z * dVar30) - dVar5;
                        dVar33 = dVar31 * dVar31 + dVar35 * dVar35 + dVar33 * dVar33;
                      }
                    }
                    else {
                      dVar33 = (local_130._s_0.Y * dVar30 + local_140) - dVar4;
                      dVar31 = (local_130._s_0.X * dVar30 + local_148) - dVar3;
                      dVar30 = (local_130._s_0.Z * dVar30 + local_138) - dVar5;
                      dVar33 = dVar33 * dVar33 + dVar31 * dVar31 + dVar30 * dVar30;
                    }
                    if (dVar33 < (double)CONCAT44(uVar34,uVar29)) {
                      uVar29 = SUB84(dVar33,0);
                      uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
                      iVar15 = iVar22;
                    }
                  }
                  iVar22 = iVar22 + 1;
                  pdVar25 = pdVar25 + 3;
                } while (iVar22 < 3);
                if (-1 < iVar15) {
                  iVar14 = iVar15;
                }
              }
              *(undefined4 *)(pFVar8 + lVar28 + 0x18) = 1;
              uVar20 = *(uint *)(*(longlong *)
                                  ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(*(uint *)(pFVar7 + lVar26) >> 9) * 8) +
                                ((ulonglong)(*(uint *)(pFVar7 + lVar26) & 0x1ff) * 3 +
                                (longlong)iVar14) * 4);
              *(uint *)(pFVar8 + lVar28 + 0x1c) = uVar20;
              if ((0x7fffffff < uVar20) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PtOnMesh.ElemID > -1",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                                      ,0x9a,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_f0 = local_res20;
              local_f8 = pFVar8 + lVar28 + 0x1c;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                          *)&this->EdgeVertices,
                         (TPairInitializer<int_const_&,int_const_&> *)local_1a8,(bool *)&local_f8);
              local_110 = *(double *)(pFVar8 + lVar28);
              dStack_108 = *(double *)(pFVar8 + lVar28 + 8);
              local_100 = *(double *)(pFVar8 + lVar28 + 0x10);
            }
          }
          else {
            *(undefined4 *)(pFVar8 + lVar28 + 0x1c) =
                 *(undefined4 *)((longlong)&local_190 + lVar16 * 4);
            *(undefined4 *)(pFVar8 + lVar28 + 0x18) = 0;
          }
        }
        else {
          *(undefined4 *)(pFVar8 + lVar28 + 0x18) = 0;
          *(undefined4 *)(pFVar8 + lVar28 + 0x1c) = local_188;
        }
        local_230 = local_230 + 4;
        pFVar23 = pFVar23 + 0x18;
        local_220 = local_220 + -1;
      } while (local_220 != 0);
      local_248 = local_248 + 1;
      uVar24 = (ulonglong)uVar6;
      local_218 = local_218 + 0x38;
      lVar26 = lVar26 + 0xc;
      local_210 = local_210 + -1;
    } while (local_210 != 0);
  }
  return;
}

// ClosestEdge @ 14357b130

int __thiscall
MeshCut::FCutWorkingInfo::ClosestEdge
          (FCutWorkingInfo *this,FIndex2i param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FIndex2i_u_0 *pFVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  double dVar24;
  undefined4 uVar25;
  FIndex2i_u_0 local_res10;
  TVector<double>_u_0 local_d8;
  undefined8 local_c0;
  
  dVar12 = __real_bfe0000000000000;
  dVar11 = __real_3fe0000000000000;
  local_res10 = param_1.field0_0x0;
  pFVar16 = &local_res10;
  iVar15 = 0;
  pFVar5 = (this->Mesh->Edges).Blocks.AllocatorInstance.Data;
  pFVar6 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
  uVar23 = (undefined4)__real_7fefffffffffffff;
  uVar25 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  iVar17 = -1;
  do {
    local_c0 = 0;
    uVar7 = *(ulonglong *)
             (*(longlong *)(pFVar5 + (ulonglong)((uint)(pFVar16->_s_0).A >> 9) * 8) +
             (ulonglong)((pFVar16->_s_0).A & 0x1ff) * 0x10);
    uVar14 = (ulonglong)((uint)(uVar7 >> 0x20) & 0x1ff);
    lVar8 = *(longlong *)(pFVar6 + (uVar7 >> 0x29) * 8);
    pdVar1 = (double *)(lVar8 + uVar14 * 0x18);
    dVar18 = *pdVar1;
    dVar19 = pdVar1[1];
    dVar24 = *(double *)(lVar8 + 0x10 + uVar14 * 0x18);
    uVar14 = (ulonglong)((uint)uVar7 & 0x1ff);
    lVar8 = *(longlong *)(pFVar6 + ((uVar7 & 0xffffffff) >> 9) * 8);
    pdVar1 = (double *)(lVar8 + uVar14 * 0x18);
    dVar20 = *pdVar1;
    dVar21 = pdVar1[1];
    local_d8._s_0.X = dVar18 - dVar20;
    dVar18 = (dVar18 + dVar20) * dVar11;
    local_d8._s_0.Y = dVar19 - dVar21;
    dVar19 = (dVar19 + dVar21) * dVar11;
    local_d8._s_0.Z = dVar24 - *(double *)(lVar8 + 0x10 + uVar14 * 0x18);
    dVar20 = (dVar24 + *(double *)(lVar8 + 0x10 + uVar14 * 0x18)) * dVar11;
    dVar21 = UE::Geometry::Normalize<double>((TVector<double> *)&local_d8._s_0,0.0);
    dVar24 = (dVar3 - dVar19) * local_d8._s_0.Y + (dVar2 - dVar18) * local_d8._s_0.X +
             (dVar4 - dVar20) * local_d8._s_0.Z;
    dVar22 = dVar21 * dVar11;
    if (dVar24 < dVar22) {
      if (dVar21 * dVar12 < dVar24) {
        dVar19 = dVar3 - (local_d8._s_0.Y * dVar24 + dVar19);
        dVar18 = dVar2 - (local_d8._s_0.X * dVar24 + dVar18);
        dVar24 = dVar4 - (local_d8._s_0.Z * dVar24 + dVar20);
        dVar24 = dVar18 * dVar18 + dVar19 * dVar19 + dVar24 * dVar24;
      }
      else {
        dVar19 = (dVar19 - local_d8._s_0.Y * dVar22) - dVar3;
        dVar18 = (dVar18 - local_d8._s_0.X * dVar22) - dVar2;
        dVar24 = (dVar20 - local_d8._s_0.Z * dVar22) - dVar4;
        dVar24 = dVar18 * dVar18 + dVar19 * dVar19 + dVar24 * dVar24;
      }
    }
    else {
      dVar24 = (local_d8._s_0.Y * dVar22 + dVar19) - dVar3;
      dVar18 = (local_d8._s_0.X * dVar22 + dVar18) - dVar2;
      dVar19 = (local_d8._s_0.Z * dVar22 + dVar20) - dVar4;
      dVar24 = dVar24 * dVar24 + dVar18 * dVar18 + dVar19 * dVar19;
    }
    bVar9 = (double)CONCAT44(uVar25,uVar23) == dVar24;
    bVar10 = (double)CONCAT44(uVar25,uVar23) < dVar24;
    if ((double)CONCAT44(uVar25,uVar23) <= dVar24) {
      dVar24 = (double)CONCAT44(uVar25,uVar23);
    }
    iVar13 = iVar15;
    if (bVar10 || bVar9) {
      iVar13 = iVar17;
    }
    iVar15 = iVar15 + 1;
    pFVar16 = (FIndex2i_u_0 *)(pFVar16->AB + 1);
    uVar23 = SUB84(dVar24,0);
    uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
    iVar17 = iVar13;
  } while (iVar15 < 2);
  return iVar13;
}

// ConnectEdges @ 143586890

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
MeshCut::FCutWorkingInfo::ConnectEdges
          (FCutWorkingInfo *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  bool local_268;
  uint local_264;
  undefined1 local_258;
  undefined1 local_257 [3];
  undefined4 local_254;
  undefined4 local_250;
  int local_24c;
  int local_248;
  TArray<int,TSizedDefaultAllocator<32>_> local_240;
  longlong local_230;
  TArray<int,TSizedDefaultAllocator<32>_> *local_228;
  FScriptContainerElement *local_220;
  FMeshSurfacePath local_218;
  longlong local_1f0;
  TVector<double>_u_0 local_1e8;
  double local_1c8;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  undefined1 local_178 [16];
  double dStack_168;
  TVector<double> local_160;
  TVector<double> local_148;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> local_128;
  double local_e8;
  ulonglong uVar19;
  
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  local_268 = true;
  local_228 = param_2;
  if (param_2 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    if ((param_1 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("VertexChains || !SegmentToChain",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                            ,0x12e,L"If SegmentToChain isn\'t null, VertexChains must not be null"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      uVar14 = (*pcVar3)();
      return (bool)uVar14;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_2,(this->Segments).ArrayNum,Default);
    pFVar21 = (param_2->AllocatorInstance).Data;
    iVar15 = param_2->ArrayNum;
    pFVar2 = pFVar21 + (longlong)iVar15 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar15) {
        local_258 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_258);
      }
      if (pFVar21 == pFVar2) break;
      *(undefined4 *)pFVar21 = 0xffffffff;
      pFVar21 = pFVar21 + 4;
    }
  }
  dVar10 = __real_3f50624dd2f1a9fc;
  dVar9 = __real_3e45798ee2308c3a;
  dVar8 = __real_3e45798ee0000000;
  dVar7 = __real_3ff0000000000000;
  local_264 = 0;
  local_1f0 = (longlong)(this->Segments).ArrayNum;
  bVar13 = true;
  if (0 < local_1f0) {
    local_230 = 0;
    do {
      lVar23 = local_230;
      uVar18 = 0;
      if ((int)local_264 < (this->Segments).ArrayNum) {
        uVar18 = ~local_264 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      pFVar2 = (this->Segments).AllocatorInstance.Data;
      uVar18 = *(uint *)(pFVar2 + lVar23 * 0xc + 4);
      if (uVar18 != *(uint *)(pFVar2 + lVar23 * 0xc + 8)) {
        uVar17 = 0;
        if ((int)uVar18 < (this->IntersectionVerts).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar14 = (*pcVar3)();
          return (bool)uVar14;
        }
        pFVar21 = (this->IntersectionVerts).AllocatorInstance.Data;
        uVar17 = *(uint *)(pFVar2 + lVar23 * 0xc + 8);
        lVar24 = (longlong)(int)uVar18 * 0x20;
        uVar18 = 0;
        if ((int)uVar17 < (this->IntersectionVerts).ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar14 = (*pcVar3)();
          return (bool)uVar14;
        }
        lVar25 = (longlong)(int)uVar17 * 0x20;
        pFVar22 = (this->IntersectionVerts).AllocatorInstance.Data;
        local_220 = pFVar22;
        if ((((*(int *)(pFVar21 + lVar24 + 0x18) != 0) || (*(int *)(pFVar22 + lVar25 + 0x18) != 0))
            || (*(int *)(pFVar21 + lVar24 + 0x1c) == -1)) ||
           (*(int *)(pFVar22 + lVar25 + 0x1c) == -1)) {
          local_257[0] = 0;
          bVar13 = `MeshCut::FCutWorkingInfo::ConnectEdges'::__l24::<lambda_1>::operator()
                             (local_257);
          if (!bVar13) {
            local_268 = false;
            goto LAB_143587577;
          }
        }
        pTVar11 = local_228;
        if (*(int *)(pFVar21 + lVar24 + 0x1c) == *(int *)(pFVar22 + lVar25 + 0x1c)) {
          if (param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            if (local_228 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              iVar15 = param_1->ArrayNum;
              uVar18 = 0;
              if ((int)local_264 < local_228->ArrayNum) {
                uVar18 = ~local_264 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                uVar14 = (*pcVar3)();
                return (bool)uVar14;
              }
              *(int *)((pTVar11->AllocatorInstance).Data + local_230 * 4) = iVar15;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            local_254 = 1;
            if (((pFVar2 <= (FScriptContainerElement *)&local_254) &&
                ((FScriptContainerElement *)&local_254 < pFVar2 + (longlong)param_1->ArrayMax * 4))
               && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar13)) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return (bool)uVar14;
            }
            iVar15 = param_1->ArrayNum;
            if (iVar15 == param_1->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar15 + 1;
            pFVar21 = pFVar21 + lVar24 + 0x1c;
            *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_254;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (((pFVar2 <= pFVar21) && (pFVar21 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return (bool)uVar14;
            }
            iVar15 = param_1->ArrayNum;
            if (iVar15 == param_1->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar15 + 1;
            *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 4) =
                 *(undefined4 *)pFVar21;
          }
        }
        else {
          iVar15 = UE::Geometry::FDynamicMesh3::FindEdge
                             (this->Mesh,*(int *)(pFVar21 + lVar24 + 0x1c),
                              *(int *)(pFVar22 + lVar25 + 0x1c));
          pTVar11 = local_228;
          if (iVar15 == -1) {
            local_218._padding_ = (longlong)&___7FMeshSurfacePath_Geometry_UE__6B_;
            local_218.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_218.Path.ArrayNum = 0;
            local_218.Path.ArrayMax = 0;
            local_218.Mesh = this->Mesh;
            local_218.bIsClosed = false;
            local_248 = UE::Geometry::FDynamicMesh3::GetVtxSingleTriangle
                                  (local_218.Mesh,*(int *)(pFVar21 + lVar24 + 0x1c));
            uVar18 = *(uint *)(pFVar2 + lVar23 * 0xc);
            lVar23 = (longlong)(int)uVar18;
            uVar19 = 0;
            uVar17 = 0;
            if ((int)uVar18 < (this->BaseFaceNormals).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return (bool)uVar14;
            }
            pFVar22 = local_220;
            uVar5 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            uVar30 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            uVar4 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            pFVar2 = (this->BaseFaceNormals).AllocatorInstance.Data;
            dVar31 = *(double *)(local_220 + lVar25 + 8) - *(double *)(pFVar21 + lVar24 + 8);
            dVar33 = *(double *)(local_220 + lVar25 + 0x10) - *(double *)(pFVar21 + lVar24 + 0x10);
            dVar28 = *(double *)(local_220 + lVar25) - *(double *)(pFVar21 + lVar24);
            dVar32 = *(double *)(pFVar2 + lVar23 * 0x18 + 8) * dVar33 -
                     *(double *)(pFVar2 + lVar23 * 0x18 + 0x10) * dVar31;
            dVar29 = *(double *)(pFVar2 + lVar23 * 0x18 + 0x10) * dVar28 -
                     *(double *)(pFVar2 + lVar23 * 0x18) * dVar33;
            auVar26._0_8_ = dVar32 * dVar32;
            auVar26._8_8_ = 0;
            dVar6 = *(double *)(pFVar2 + lVar23 * 0x18) * dVar31 -
                    *(double *)(pFVar2 + lVar23 * 0x18 + 8) * dVar28;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = dVar29 * dVar29 + auVar26._0_8_ + dVar6 * dVar6;
            auVar27 = sqrtpd(auVar26,auVar27);
            if (auVar27._0_8_ <= 0.0) {
              dVar29 = dVar28 * dVar28 + dVar31 * dVar31 + dVar33 * dVar33;
              if (dVar29 < this->SnapToleranceSq || dVar29 == this->SnapToleranceSq) {
                UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (this->Mesh,local_248,(TVector<double> *)local_178,&local_160,&local_148);
                uVar12 = uVar19;
                uVar20 = 0x30;
                do {
                  uVar16 = uVar12;
                  dVar32 = *(double *)(local_178 + uVar16) - *(double *)(local_178 + uVar20);
                  dVar28 = *(double *)(local_178 + uVar16 + 8) - *(double *)(local_178 + uVar20 + 8)
                  ;
                  dVar6 = *(double *)((longlong)&dStack_168 + uVar16) -
                          *(double *)((longlong)&dStack_168 + uVar20);
                  dVar29 = dVar32 * dVar32 + dVar28 * dVar28 + dVar6 * dVar6;
                  if (dVar8 < dVar29) {
                    local_1c8 = dVar7 / SQRT(dVar29);
                    uVar5 = local_1c8 * dVar6;
                    uVar4 = local_1c8 * dVar32;
                    uVar30 = local_1c8 * dVar28;
                    goto LAB_1435871bf;
                  }
                  uVar18 = (int)uVar19 + 1;
                  uVar19 = (ulonglong)uVar18;
                  uVar12 = uVar16 + 0x18;
                  uVar20 = uVar16;
                } while ((int)uVar18 < 3);
                local_e8 = (double)uVar5;
LAB_1435871bf:
                dVar29 = SQRT((double)uVar30 * (double)uVar30 + (double)uVar4 * (double)uVar4 +
                              (double)uVar5 * (double)uVar5);
                if (0.0 < dVar29) {
                  dVar29 = dVar7 / dVar29;
                  local_1e8._s_0.Z = (double)uVar5 * dVar29;
                  local_1e8._s_0.Y = (double)uVar30 * dVar29;
                  local_1e8._s_0.X = (double)uVar4 * dVar29;
                  goto LAB_143587205;
                }
                bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<8422413275269955961>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                                    ,0x179,"Normalize(WalkPlaneNormal) > 0");
                if (bVar13) {
                  pcVar3 = (code *)swi(3);
                  uVar14 = (*pcVar3)();
                  return (bool)uVar14;
                }
              }
              local_218._padding_ = (longlong)&___7FMeshSurfacePath_Geometry_UE__6B_;
              if (local_218.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Path.AllocatorInstance.Data);
              }
            }
            else {
              dVar28 = dVar7 / auVar27._0_8_;
              local_1e8._s_0.Z = dVar28 * dVar6;
              local_1e8._s_0.Y = dVar28 * dVar29;
              local_1e8._s_0.X = dVar28 * dVar32;
LAB_143587205:
              uVar18 = *(uint *)(pFVar22 + lVar25 + 0x1c);
              uVar17 = *(uint *)(pFVar21 + lVar24 + 0x1c);
              local_128._0_8_ = 0;
              local_128._40_8_ = 0;
              pFVar2 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
              lVar23 = *(longlong *)(pFVar2 + (ulonglong)(uVar18 >> 9) * 8);
              pdVar1 = (double *)(lVar23 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
              local_1b8._s_0.X = *pdVar1;
              local_1b8._s_0.Y = pdVar1[1];
              local_1b8._s_0.Z = *(double *)(lVar23 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
              lVar23 = *(longlong *)(pFVar2 + (ulonglong)(uVar17 >> 9) * 8);
              pdVar1 = (double *)(lVar23 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
              local_198._s_0.X = *pdVar1;
              local_198._s_0.Y = pdVar1[1];
              local_198._s_0.Z = *(double *)(lVar23 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
              bVar13 = UE::Geometry::FMeshSurfacePath::AddViaPlanarWalk
                                 (&local_218,local_248,uVar17,(TVector<double> *)&local_198._s_0,-1,
                                  uVar18,(TVector<double> *)&local_1b8._s_0,
                                  (TVector<double> *)&local_1e8._s_0,&local_128,false,dVar9,
                                  this->SnapToleranceSq,dVar10);
              uVar4 = local_240._8_8_;
              if (bVar13) {
                iVar15 = local_240.ArrayMax;
                local_240._8_8_ = (ulonglong)(uint)local_240.ArrayMax << 0x20;
                if (((longlong)uVar4 < 0) && (iVar15 != 0)) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,0,&local_240.AllocatorInstance,0,&local_240.ArrayMax);
                }
                bVar13 = UE::Geometry::FMeshSurfacePath::EmbedSimplePath
                                   (&local_218,false,&local_240,false,this->SnapToleranceSq);
                if (!bVar13) goto LAB_143587503;
                if (((local_240.ArrayNum < 1) ||
                    (*(int *)local_240.AllocatorInstance.Data != *(int *)(pFVar21 + lVar24 + 0x1c)))
                   && (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<8422413275269955979>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                                           ,0x18b,
                                           "EmbeddedPath.Num() > 0 && EmbeddedPath[0] == PtA.ElemID"
                                          ), bVar13)) {
                  pcVar3 = (code *)swi(3);
                  uVar14 = (*pcVar3)();
                  return (bool)uVar14;
                }
                pTVar11 = local_228;
                if (param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                  if (local_228 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                    iVar15 = param_1->ArrayNum;
                    uVar18 = 0;
                    if ((int)local_264 < local_228->ArrayNum) {
                      uVar18 = ~local_264 >> 0x1f;
                    }
                    if ((uVar18 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar3 = (code *)swi(3);
                      uVar14 = (*pcVar3)();
                      return (bool)uVar14;
                    }
                    *(int *)((pTVar11->AllocatorInstance).Data + local_230 * 4) = iVar15;
                  }
                  pFVar2 = (param_1->AllocatorInstance).Data;
                  local_24c = local_240.ArrayNum;
                  if (((pFVar2 <= (FScriptContainerElement *)&local_24c) &&
                      ((FScriptContainerElement *)&local_24c <
                       pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar3 = (code *)swi(3);
                    uVar14 = (*pcVar3)();
                    return (bool)uVar14;
                  }
                  iVar15 = param_1->ArrayNum;
                  if (iVar15 == param_1->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar15 + 1;
                  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_24c;
                  if ((param_1 == &local_240) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)this != (void*)&Source",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x96e,L""), bVar13)) {
                    pcVar3 = (code *)swi(3);
                    uVar14 = (*pcVar3)();
                    return (bool)uVar14;
                  }
                  lVar23 = (longlong)local_240.ArrayNum;
                  if (local_240.ArrayNum != 0) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (4,4,local_240.ArrayNum,&param_1->AllocatorInstance,
                                        &param_1->ArrayNum,&param_1->ArrayMax);
                    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar15 * 4,
                           local_240.AllocatorInstance.Data,lVar23 << 2);
                  }
                }
              }
              else {
LAB_143587503:
                local_268 = false;
              }
              local_218._padding_ = (longlong)&___7FMeshSurfacePath_Geometry_UE__6B_;
              if (local_218.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Path.AllocatorInstance.Data);
              }
            }
          }
          else if (param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            if (local_228 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              iVar15 = param_1->ArrayNum;
              uVar18 = 0;
              if ((int)local_264 < local_228->ArrayNum) {
                uVar18 = ~local_264 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                uVar14 = (*pcVar3)();
                return (bool)uVar14;
              }
              *(int *)((pTVar11->AllocatorInstance).Data + local_230 * 4) = iVar15;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            local_250 = 2;
            if (((pFVar2 <= (FScriptContainerElement *)&local_250) &&
                ((FScriptContainerElement *)&local_250 < pFVar2 + (longlong)param_1->ArrayMax * 4))
               && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar13)) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return (bool)uVar14;
            }
            iVar15 = param_1->ArrayNum;
            if (iVar15 == param_1->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar15 + 1;
            pFVar21 = pFVar21 + lVar24 + 0x1c;
            *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_250;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (((pFVar2 <= pFVar21) && (pFVar21 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return (bool)uVar14;
            }
            iVar15 = param_1->ArrayNum;
            if (iVar15 == param_1->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar15 + 1;
            pFVar22 = local_220 + lVar25 + 0x1c;
            *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 4) =
                 *(undefined4 *)pFVar21;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (((pFVar2 <= pFVar22) && (pFVar22 < pFVar2 + (longlong)param_1->ArrayMax * 4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar3 = (code *)swi(3);
              uVar14 = (*pcVar3)();
              return (bool)uVar14;
            }
            iVar15 = param_1->ArrayNum;
            if (iVar15 == param_1->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar15 + 1;
            *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 4) =
                 *(undefined4 *)pFVar22;
          }
        }
      }
LAB_143587577:
      local_264 = local_264 + 1;
      local_230 = local_230 + 1;
      bVar13 = local_268;
    } while (local_230 < local_1f0);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  return bVar13;
}

// Init @ 1435b5c80

void __thiscall MeshCut::FCutWorkingInfo::Init(FCutWorkingInfo *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  TVector<double> local_48;
  
  pTVar2 = &this->BaseFaceNormals;
  piVar1 = &(this->BaseFaceNormals).ArrayNum;
  uVar16 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  iVar12 = *piVar1;
  if (iVar12 < (int)uVar16) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar16 - iVar12,&pTVar2->AllocatorInstance,piVar1,
               &(this->BaseFaceNormals).ArrayMax);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar12) {
      uVar17 = iVar12 - uVar16;
      if (((int)(uVar16 | uVar17) < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar17 != 0) {
        pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x18;
        iVar12 = (*piVar1 - uVar17) - uVar16;
        if (iVar12 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar17 * 0x18,(longlong)iVar12 * 0x18);
        }
        *piVar1 = *piVar1 - uVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&pTVar2->AllocatorInstance,*piVar1,&(this->BaseFaceNormals).ArrayMax);
      }
    }
  }
  uVar16 = 0;
  uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar17 != 0) &&
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar16 = 1;
    bVar18 = uVar17 == 1;
    if ((int)uVar17 < 2) goto LAB_1435b5e19;
    do {
      sVar4 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 2);
      if ((sVar4 != 0) && (sVar4 != -1)) break;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar17);
  }
  bVar18 = uVar16 == uVar17;
LAB_1435b5e19:
  if (!bVar18) {
LAB_1435b5e20:
    do {
      pTVar14 = UE::Geometry::FDynamicMesh3::GetTriNormal(param_1,&local_48,uVar16);
      uVar8 = *(undefined4 *)&pTVar14->field0_0x0;
      uVar9 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 4);
      uVar10 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 8);
      uVar11 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 0xc);
      dVar3 = (pTVar14->field0_0x0)._s_0.Z;
      uVar13 = 0;
      if ((int)uVar16 < *piVar1) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar15 = (longlong)(int)uVar16;
      uVar16 = uVar16 + 1;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      pFVar5 = pFVar6 + lVar15 * 0x18;
      *(undefined4 *)pFVar5 = uVar8;
      *(undefined4 *)(pFVar5 + 4) = uVar9;
      *(undefined4 *)(pFVar5 + 8) = uVar10;
      *(undefined4 *)(pFVar5 + 0xc) = uVar11;
      *(double *)(pFVar6 + lVar15 * 0x18 + 0x10) = dVar3;
      if ((int)uVar16 < (int)uVar17) {
        pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          if ((*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                         (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) goto LAB_1435b5e20;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar17);
      }
    } while (uVar16 != uVar17);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             &this->FaceVertices);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> *)
             &this->EdgeVertices);
  (this->IntersectionVerts).ArrayNum = 0;
  if ((this->IntersectionVerts).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->IntersectionVerts).AllocatorInstance,0,
               &(this->IntersectionVerts).ArrayMax);
  }
  (this->Segments).ArrayNum = 0;
  if ((this->Segments).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Segments).AllocatorInstance,0,&(this->Segments).ArrayMax);
  }
  return;
}

// InsertEdgeVertices @ 1435b7cb0

void __thiscall MeshCut::FCutWorkingInfo::InsertEdgeVertices(FCutWorkingInfo *this)

{
  FMutex *this_00;
  double *pdVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  FDynamicMesh3 *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  FIndex2i FVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  short sVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 *puVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  ForAnyElementType FVar30;
  int iVar31;
  uint *puVar32;
  longlong lVar33;
  double dVar34;
  double dVar35;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18;
  uint local_res20 [2];
  ForAnyElementType local_168;
  int local_160;
  int iStack_15c;
  uint local_158 [4];
  uint local_148;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 local_134;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 local_11c;
  undefined4 local_114;
  double local_108;
  double local_100;
  double local_f8;
  TVector<double>_u_0 local_f0;
  double local_d8;
  int local_d0;
  undefined1 local_cc [4];
  FScriptContainerElement *local_c8;
  uint *local_c0;
  double local_a8;
  undefined4 local_a0;
  int iStack_9c;
  
  dVar18 = __real_3fe0000000000000;
  dVar17 = __real_3ff0000000000000;
  iVar21 = *(int *)&(this->EdgeVertices).field_0x8 - *(int *)&(this->EdgeVertices).field_0x34;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  iStack_15c = 0;
  do {
    if (iVar21 < 1) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      return;
    }
    iVar21 = *(int *)&(this->EdgeVertices).field_0x28;
    iVar25 = 0;
    iVar31 = 0;
    iStack_9c = 0;
    if (iVar21 != 0) {
      puVar7 = *(uint **)&(this->EdgeVertices).field_0x20;
      puVar32 = (uint *)&(this->EdgeVertices).field_0x10;
      if (puVar7 != (uint *)0x0) {
        puVar32 = puVar7;
      }
      uVar23 = *puVar32;
      while (uVar23 == 0) {
        lVar27 = (longlong)iVar25;
        iVar31 = iVar31 + 0x20;
        iVar25 = iVar25 + 1;
        iStack_9c = iVar21;
        if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_1435b7daf;
        uVar23 = puVar32[lVar27 + 1];
      }
      uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_d0 = (int)lVar27;
      iStack_9c = iVar31 + -1 + local_d0;
      if (iVar21 < iStack_9c) {
        iStack_9c = iVar21;
      }
    }
LAB_1435b7daf:
    local_a0 = 0xffffffff;
    uVar23 = *(uint *)(*(longlong *)&this->EdgeVertices + (longlong)iStack_9c * 0x10);
    uVar6 = *(uint *)(*(longlong *)&this->EdgeVertices + 4 + (longlong)iStack_9c * 0x10);
    local_160 = 0;
    local_res18 = uVar6;
    if ((iStack_15c < 0) && (iStack_15c != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_168,0,&iStack_15c);
    }
    iVar21 = *(int *)&(this->EdgeVertices).field_0x48;
    if (iVar21 != 0) {
      puVar8 = *(undefined1 **)&(this->EdgeVertices).field_0x40;
      puVar26 = &(this->EdgeVertices).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar26 = puVar8;
      }
      iVar21 = *(int *)(puVar26 + ((longlong)iVar21 - 1U & (longlong)(int)uVar23) * 4);
      iVar25 = iVar21;
      if (iVar21 != -1) {
        do {
          iVar21 = *(int *)(*(longlong *)&this->EdgeVertices + 8 + (longlong)iVar25 * 0x10);
          if (*(uint *)(*(longlong *)&this->EdgeVertices + (longlong)iVar25 * 0x10) == uVar23)
          break;
          iVar25 = iVar21;
        } while (iVar21 != -1);
      }
joined_r0x0001435b7e7e:
      if (iVar25 != -1) {
        pFVar29 = (FScriptContainerElement *)
                  (*(longlong *)&this->EdgeVertices + 4 + (longlong)iVar25 * 0x10);
        if (((local_168.Data <= pFVar29) && (pFVar29 < local_168.Data + (longlong)iStack_15c * 4))
           && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (local_160 == iStack_15c) {
          local_160 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_168,&iStack_15c);
        }
        iVar25 = local_160 + 1;
        *(uint *)(local_168.Data + (longlong)local_160 * 4) = *(uint *)pFVar29;
        local_160 = iVar25;
        if (iVar21 == -1) goto LAB_1435b7f86;
        do {
          iVar31 = iVar21;
          uVar22 = *(uint *)(*(longlong *)&this->EdgeVertices + (longlong)iVar31 * 0x10);
          iVar21 = *(int *)(*(longlong *)&this->EdgeVertices + 8 + (longlong)iVar31 * 0x10);
          if (uVar22 == uVar23) break;
        } while (iVar21 != -1);
        iVar25 = iVar21;
        if (uVar22 == uVar23) {
          iVar25 = iVar31;
        }
        goto joined_r0x0001435b7e7e;
      }
    }
LAB_1435b7f86:
    uVar22 = 0;
    if ((int)uVar6 < (this->IntersectionVerts).ArrayNum) {
      uVar22 = ~uVar6 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar9 = this->Mesh;
    local_d8 = 0.0;
    pFVar29 = (this->IntersectionVerts).AllocatorInstance.Data;
    pFVar10 = (pFVar9->Vertices).Blocks.AllocatorInstance.Data;
    lVar33 = (longlong)(int)uVar6 * 0x20;
    uVar3 = *(ulonglong *)
             (*(longlong *)
               ((pFVar9->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8) +
             (ulonglong)(uVar23 & 0x1ff) * 0x10);
    uVar24 = (ulonglong)((uint)uVar3 & 0x1ff);
    lVar27 = *(longlong *)(pFVar10 + ((uVar3 & 0xffffffff) >> 9) * 8);
    pdVar1 = (double *)(lVar27 + uVar24 * 0x18);
    dVar34 = *pdVar1;
    dVar12 = pdVar1[1];
    dVar35 = *(double *)(lVar27 + 0x10 + uVar24 * 0x18);
    uVar24 = (ulonglong)((uint)(uVar3 >> 0x20) & 0x1ff);
    lVar27 = *(longlong *)(pFVar10 + (uVar3 >> 0x29) * 8);
    pdVar1 = (double *)(lVar27 + uVar24 * 0x18);
    dVar13 = *pdVar1;
    dVar14 = pdVar1[1];
    local_a8 = *(double *)(lVar27 + 0x10 + uVar24 * 0x18);
    local_f0._s_0.X = dVar13 - dVar34;
    local_108 = (dVar34 + dVar13) * dVar18;
    local_f0._s_0.Y = dVar14 - dVar12;
    local_100 = (dVar12 + dVar14) * dVar18;
    local_f0._s_0.Z = local_a8 - dVar35;
    local_f8 = (dVar35 + local_a8) * dVar18;
    local_d8 = UE::Geometry::Normalize<double>((TVector<double> *)&local_f0._s_0,0.0);
    local_d8 = local_d8 * dVar18;
    dVar35 = (((*(double *)(pFVar29 + lVar33) - local_108) * local_f0._s_0.X +
               (*(double *)(pFVar29 + lVar33 + 8) - local_100) * local_f0._s_0.Y +
              (*(double *)(pFVar29 + lVar33 + 0x10) - local_f8) * local_f0._s_0.Z) / local_d8 +
             dVar17) * dVar18;
    if (0.0 <= dVar35) {
      if (dVar17 <= dVar35) {
        dVar35 = dVar17;
      }
    }
    else {
      dVar35 = 0.0;
    }
    local_144 = 0xffffffffffffffff;
    local_13c = 0xffffffffffffffff;
    local_134 = 0xffffffffffffffff;
    uStack_124 = 0xffffffff;
    uStack_120 = 0xffffffff;
    local_11c = 0xffffffffffffffff;
    local_114 = 0xffffffff;
    iVar21 = (**(code **)(pFVar9->_padding_ + 0x30))(pFVar9,uVar23,&local_148,dVar35);
    if ((iVar21 != 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result == EMeshResult::Ok",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                            ,0x105,L"Failed to add vertex on Edge ID %d"), bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar9 = this->Mesh;
    sVar20 = _dclass(*(undefined8 *)(pFVar29 + lVar33));
    if (((sVar20 < 1) && (sVar20 = _dclass(*(undefined8 *)(pFVar29 + lVar33 + 8)), sVar20 < 1)) &&
       (sVar20 = _dclass(*(undefined8 *)(pFVar29 + lVar33 + 0x10)), sVar20 < 1)) {
      uVar15 = *(undefined8 *)(pFVar29 + lVar33 + 8);
      uVar5 = *(undefined8 *)(pFVar29 + lVar33 + 0x10);
      lVar27 = *(longlong *)
                ((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(local_128 >> 9) * 8)
      ;
      puVar2 = (undefined8 *)(lVar27 + (ulonglong)(local_128 & 0x1ff) * 0x18);
      *puVar2 = *(undefined8 *)(pFVar29 + lVar33);
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar27 + 0x10 + (ulonglong)(local_128 & 0x1ff) * 0x18) = uVar5;
      if ((pFVar9->ChangeStampShape).bIsEnabled != false) {
        this_00 = &(pFVar9->ChangeStampShape).Mutex;
        LOCK();
        bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
        if (bVar19) {
          this_00->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar19) {
          UE::FMutex::LockSlow(this_00);
        }
        puVar7 = &(pFVar9->ChangeStampShape).Value;
        *puVar7 = *puVar7 + 1;
        LOCK();
        aVar4 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
      }
    }
    *(uint *)(pFVar29 + lVar33 + 0x1c) = local_128;
    *(undefined4 *)(pFVar29 + lVar33 + 0x18) = 0;
    local_res10[0] = uVar23;
    if (*(int *)&(this->EdgeVertices).field_0x8 != *(int *)&(this->EdgeVertices).field_0x34) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      RemoveImpl<int>((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                       *)&this->EdgeVertices,uVar23,(int *)local_res10);
    }
    iVar21 = local_160;
    if (1 < local_160) {
      local_158[0] = local_148;
      local_158[1] = (undefined4)local_11c;
      pFVar29 = local_168.Data + (longlong)local_160 * 4;
      FVar30.Data = local_168.Data;
      while( true ) {
        if (local_160 != iVar21) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar30.Data == pFVar29) break;
        local_res20[0] = *(uint *)FVar30.Data;
        lVar27 = (longlong)(int)local_res20[0];
        if (local_res18 == local_res20[0]) {
LAB_1435b83ed:
          FVar30.Data = FVar30.Data + 4;
        }
        else {
          uVar23 = 0;
          if ((int)local_res20[0] < (this->IntersectionVerts).ArrayNum) {
            uVar23 = ~local_res20[0] >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar28 = (this->IntersectionVerts).AllocatorInstance.Data + lVar27 * 0x20;
          pFVar10 = pFVar28 + 0x1c;
          lVar27 = *(longlong *)
                    ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_128 >> 9) * 8);
          pdVar1 = (double *)(lVar27 + (ulonglong)(local_128 & 0x1ff) * 0x18);
          local_a8 = *(double *)(lVar27 + 0x10 + (ulonglong)(local_128 & 0x1ff) * 0x18);
          dVar35 = *pdVar1 - *(double *)&pFVar28->field_0x0;
          dVar34 = pdVar1[1] - *(double *)(pFVar28 + 8);
          if (this->SnapToleranceSq <=
              dVar34 * dVar34 + dVar35 * dVar35 +
              (local_a8 - *(double *)(pFVar28 + 0x10)) * (local_a8 - *(double *)(pFVar28 + 0x10))) {
            FVar16.field0_0x0._s_0.B = local_158[1];
            FVar16.field0_0x0._s_0.A = local_158[0];
            iVar25 = ClosestEdge(this,FVar16,(TVector<double> *)pFVar28);
            uVar23 = local_158[iVar25];
            *(undefined4 *)&pFVar28[0x18].field_0x0 = 1;
            *(uint *)pFVar10 = uVar23;
            local_c0 = local_res20;
            local_c8 = pFVar10;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                        *)&this->EdgeVertices,(TPairInitializer<int_const_&,int_const_&> *)local_cc,
                       (bool *)(local_cc + 4));
            goto LAB_1435b83ed;
          }
          *(undefined4 *)&pFVar28[0x18].field_0x0 = 0;
          FVar30.Data = FVar30.Data + 4;
          *(uint *)pFVar10 = local_128;
        }
      }
    }
    iVar21 = *(int *)&(this->EdgeVertices).field_0x8 - *(int *)&(this->EdgeVertices).field_0x34;
  } while( true );
}

// InsertFaceVertices @ 1435b8490

void __thiscall MeshCut::FCutWorkingInfo::InsertFaceVertices(FCutWorkingInfo *this)

{
  FMutex *this_00;
  double *pdVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  FDynamicMesh3 *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  short sVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  int iVar27;
  uint *puVar28;
  FScriptContainerElement *pFVar29;
  double dVar30;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20;
  ForAnyElementType local_238;
  int local_230;
  int iStack_22c;
  uint local_228 [4];
  undefined1 local_218 [4];
  undefined8 local_214;
  undefined4 local_20c;
  uint local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  int local_1f4;
  int local_1d8;
  undefined1 local_1d4 [12];
  FIndex3i_u_0 local_1c8;
  FIndex3i_u_0 local_1b8;
  FScriptContainerElement *local_1a8;
  uint *local_1a0;
  FScriptContainerElement *local_198;
  uint *local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double> local_118;
  double local_f0;
  undefined4 local_e8;
  int iStack_e4;
  TVector<double> local_c8;
  TVector<double> local_b0;
  TVector<double> local_98 [3];
  
  dVar14 = __real_7fefffffffffffff;
  dVar13 = __real_3ff0000000000000;
  iVar17 = *(int *)&(this->FaceVertices).field_0x8 - *(int *)&(this->FaceVertices).field_0x34;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  iStack_22c = 0;
  do {
    if (iVar17 < 1) {
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data);
      }
      return;
    }
    iVar17 = *(int *)&(this->FaceVertices).field_0x28;
    iVar20 = 0;
    iVar27 = 0;
    iStack_e4 = 0;
    if (iVar17 != 0) {
      puVar6 = *(uint **)&(this->FaceVertices).field_0x20;
      puVar28 = (uint *)&(this->FaceVertices).field_0x10;
      if (puVar6 != (uint *)0x0) {
        puVar28 = puVar6;
      }
      uVar19 = *puVar28;
      while (uVar19 == 0) {
        lVar23 = (longlong)iVar20;
        iVar27 = iVar27 + 0x20;
        iVar20 = iVar20 + 1;
        iStack_e4 = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1435b857f;
        uVar19 = puVar28[lVar23 + 1];
      }
      uVar22 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_1d8 = (int)lVar23;
      iStack_e4 = iVar27 + -1 + local_1d8;
      if (iVar17 < iStack_e4) {
        iStack_e4 = iVar17;
      }
    }
LAB_1435b857f:
    local_e8 = 0xffffffff;
    uVar19 = *(uint *)(*(longlong *)&this->FaceVertices + (longlong)iStack_e4 * 0x10);
    uVar5 = *(uint *)(*(longlong *)&this->FaceVertices + 4 + (longlong)iStack_e4 * 0x10);
    local_230 = 0;
    local_res20 = uVar5;
    if ((iStack_22c < 0) && (iStack_22c != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_238,0,&iStack_22c);
    }
    iVar17 = *(int *)&(this->FaceVertices).field_0x48;
    if (iVar17 != 0) {
      puVar7 = *(undefined1 **)&(this->FaceVertices).field_0x40;
      puVar21 = &(this->FaceVertices).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar21 = puVar7;
      }
      iVar17 = *(int *)(puVar21 + ((longlong)iVar17 - 1U & (longlong)(int)uVar19) * 4);
      iVar20 = iVar17;
      if (iVar17 != -1) {
        do {
          iVar17 = *(int *)(*(longlong *)&this->FaceVertices + 8 + (longlong)iVar20 * 0x10);
          if (*(uint *)(*(longlong *)&this->FaceVertices + (longlong)iVar20 * 0x10) == uVar19)
          break;
          iVar20 = iVar17;
        } while (iVar17 != -1);
      }
joined_r0x0001435b864e:
      if (iVar20 != -1) {
        pFVar24 = (FScriptContainerElement *)
                  (*(longlong *)&this->FaceVertices + 4 + (longlong)iVar20 * 0x10);
        if (((local_238.Data <= pFVar24) && (pFVar24 < local_238.Data + (longlong)iStack_22c * 4))
           && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (local_230 == iStack_22c) {
          local_230 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_238,&iStack_22c);
        }
        iVar20 = local_230 + 1;
        *(uint *)(local_238.Data + (longlong)local_230 * 4) = *(uint *)pFVar24;
        local_230 = iVar20;
        if (iVar17 == -1) goto LAB_1435b8756;
        do {
          iVar27 = iVar17;
          uVar18 = *(uint *)(*(longlong *)&this->FaceVertices + (longlong)iVar27 * 0x10);
          iVar17 = *(int *)(*(longlong *)&this->FaceVertices + 8 + (longlong)iVar27 * 0x10);
          if (uVar18 == uVar19) break;
        } while (iVar17 != -1);
        iVar20 = iVar17;
        if (uVar18 == uVar19) {
          iVar20 = iVar27;
        }
        goto joined_r0x0001435b864e;
      }
    }
LAB_1435b8756:
    uVar18 = 0;
    if ((int)uVar5 < (this->IntersectionVerts).ArrayNum) {
      uVar18 = ~uVar5 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = this->Mesh;
    uVar25 = (ulonglong)(uVar19 & 0x1ff);
    pFVar24 = (pFVar8->Vertices).Blocks.AllocatorInstance.Data;
    pFVar29 = (this->IntersectionVerts).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
    lVar23 = *(longlong *)
              ((pFVar8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8);
    uVar5 = *(uint *)(lVar23 + uVar25 * 0xc);
    uVar22 = (ulonglong)(uVar5 & 0x1ff);
    pdVar1 = (double *)(*(longlong *)(pFVar24 + (ulonglong)(uVar5 >> 9) * 8) + uVar22 * 0x18);
    local_168._s_0.X = *pdVar1;
    local_168._s_0.Y = pdVar1[1];
    local_168._s_0.Z =
         *(double *)(*(longlong *)(pFVar24 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar22 * 0x18);
    uVar5 = *(uint *)(lVar23 + 4 + uVar25 * 0xc);
    uVar22 = (ulonglong)(uVar5 & 0x1ff);
    pdVar1 = (double *)(*(longlong *)(pFVar24 + (ulonglong)(uVar5 >> 9) * 8) + uVar22 * 0x18);
    local_150._s_0.X = *pdVar1;
    local_150._s_0.Y = pdVar1[1];
    local_150._s_0.Z =
         *(double *)(*(longlong *)(pFVar24 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar22 * 0x18);
    uVar5 = *(uint *)(lVar23 + 8 + uVar25 * 0xc);
    uVar22 = (ulonglong)(uVar5 & 0x1ff);
    pdVar1 = (double *)(*(longlong *)(pFVar24 + (ulonglong)(uVar5 >> 9) * 8) + uVar22 * 0x18);
    local_138._s_0.X = *pdVar1;
    local_138._s_0.Y = pdVar1[1];
    local_138._s_0.Z =
         *(double *)(*(longlong *)(pFVar24 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar22 * 0x18);
    UE::Geometry::VectorUtil::BarycentricCoords<double>
              (&local_118,(TVector<double> *)pFVar29,(TVector<double> *)&local_168._s_0,
               (TVector<double> *)&local_150._s_0,(TVector<double> *)&local_138._s_0);
    local_214 = 0xffffffffffffffff;
    local_20c = 0xffffffff;
    local_204 = 0xffffffffffffffff;
    local_1fc = 0xffffffffffffffff;
    local_1f4 = -1;
    iVar17 = (**(code **)(pFVar8->_padding_ + 0xb8))(pFVar8,uVar19,&local_118,local_218);
    if ((iVar17 != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result == EMeshResult::Ok",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                            ,0xc5,L"Failed to add vertex on Triangle ID %d"), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar5 = local_208;
    pFVar8 = this->Mesh;
    sVar16 = _dclass((int)*(undefined8 *)&pFVar29->field_0x0);
    if (((sVar16 < 1) && (sVar16 = _dclass((int)*(undefined8 *)(pFVar29 + 8)), sVar16 < 1)) &&
       (sVar16 = _dclass((int)*(undefined8 *)(pFVar29 + 0x10)), sVar16 < 1)) {
      uVar11 = *(undefined8 *)(pFVar29 + 8);
      uVar4 = *(undefined8 *)(pFVar29 + 0x10);
      lVar23 = *(longlong *)
                ((pFVar8->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar23 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
      *puVar2 = *(undefined8 *)&pFVar29->field_0x0;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar23 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18) = uVar4;
      if ((pFVar8->ChangeStampShape).bIsEnabled != false) {
        this_00 = &(pFVar8->ChangeStampShape).Mutex;
        LOCK();
        bVar15 = this_00->State == (atomic<unsigned_char>)0x0;
        if (bVar15) {
          this_00->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar15) {
          UE::FMutex::LockSlow(this_00);
        }
        puVar6 = &(pFVar8->ChangeStampShape).Value;
        *puVar6 = *puVar6 + 1;
        LOCK();
        aVar3 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
      }
    }
    *(uint *)(pFVar29 + 0x1c) = uVar5;
    *(undefined4 *)&pFVar29[0x18].field_0x0 = 0;
    local_res10[0] = uVar19;
    if (*(int *)&(this->FaceVertices).field_0x8 != *(int *)&(this->FaceVertices).field_0x34) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      RemoveImpl<int>((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                       *)&this->FaceVertices,uVar19,(int *)local_res10);
    }
    iVar17 = local_230;
    local_228[1] = (undefined4)local_204;
    local_228[2] = local_204._4_4_;
    local_228[0] = uVar19;
    if (1 < local_230) {
      pFVar24 = local_238.Data + (longlong)local_230 * 4;
      FVar26.Data = local_238.Data;
      while( true ) {
        if (local_230 != iVar17) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar26.Data == pFVar24) break;
        local_res18[0] = *(uint *)FVar26.Data;
        lVar23 = (longlong)(int)local_res18[0];
        if (local_res20 == local_res18[0]) {
LAB_1435b8c63:
          FVar26.Data = FVar26.Data + 4;
        }
        else {
          uVar19 = 0;
          if ((int)local_res18[0] < (this->IntersectionVerts).ArrayNum) {
            uVar19 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar29 = (this->IntersectionVerts).AllocatorInstance.Data + lVar23 * 0x20;
          lVar23 = *(longlong *)
                    ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_208 >> 9) * 8);
          pdVar1 = (double *)(lVar23 + (ulonglong)(local_208 & 0x1ff) * 0x18);
          local_f0 = *(double *)(lVar23 + 0x10 + (ulonglong)(local_208 & 0x1ff) * 0x18);
          dVar10 = *pdVar1 - *(double *)&pFVar29->field_0x0;
          dVar30 = pdVar1[1] - *(double *)(pFVar29 + 8);
          if (this->SnapToleranceSq <=
              dVar30 * dVar30 + dVar10 * dVar10 +
              (local_f0 - *(double *)(pFVar29 + 0x10)) * (local_f0 - *(double *)(pFVar29 + 0x10))) {
            local_1c8._0_8_ = local_1fc;
            local_1c8._s_0.C = local_1f4;
            uVar19 = OnEdge(this,(FIndex3i *)&local_1c8._s_0,(TVector<double> *)pFVar29,
                            this->SnapToleranceSq);
            if (0x7fffffff < uVar19) {
              lVar23 = 0;
              do {
                UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                          (this->Mesh,local_228[lVar23],&local_c8,&local_b0,local_98);
                UE::Geometry::VectorUtil::BarycentricCoords<double>
                          ((TVector<double> *)&local_188._s_0,(TVector<double> *)pFVar29,&local_c8,
                           &local_b0,local_98);
                if (((0.0 <= local_188._s_0.X) && (0.0 <= local_188._s_0.Y)) &&
                   ((0.0 <= local_188._s_0.Z &&
                    (((local_188._s_0.X < dVar13 && (local_188._s_0.Y <= dVar13)) &&
                     (local_188._s_0.Z <= dVar13)))))) {
                  if ((*(int *)&pFVar29[0x18].field_0x0 != 2) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pt.Type == EVertexType::Face",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshMeshCut.cpp"
                                          ,0x1ca,L""), bVar15)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar19 = local_228[lVar23];
                  goto LAB_1435b8bcd;
                }
                lVar23 = lVar23 + 1;
              } while (lVar23 < 3);
              local_1b8._0_8_ = local_1fc;
              local_1b8._s_0.C = local_1f4;
              uVar19 = OnEdge(this,(FIndex3i *)&local_1b8._s_0,(TVector<double> *)pFVar29,dVar14);
            }
            *(undefined4 *)&pFVar29[0x18].field_0x0 = 1;
            uVar19 = *(uint *)((longlong)&local_1fc + (longlong)(int)uVar19 * 4);
          }
          else {
            *(undefined4 *)&pFVar29[0x18].field_0x0 = 0;
            uVar19 = local_208;
          }
LAB_1435b8bcd:
          pFVar12 = pFVar29 + 0x1c;
          *(uint *)pFVar12 = uVar19;
          if (*(int *)&pFVar29[0x18].field_0x0 != 1) {
            if (*(int *)&pFVar29[0x18].field_0x0 == 2) {
              local_190 = local_res18;
              local_198 = pFVar12;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                          *)&this->FaceVertices,
                         (TPairInitializer<int_const_&,int_const_&> *)(local_1d4 + 4),
                         (bool *)&local_198);
            }
            goto LAB_1435b8c63;
          }
          local_1a0 = local_res18;
          local_1a8 = pFVar12;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                      *)&this->EdgeVertices,(TPairInitializer<int_const_&,int_const_&> *)local_1d4,
                     (bool *)&local_1a8);
          FVar26.Data = FVar26.Data + 4;
        }
      }
    }
    iVar17 = *(int *)&(this->FaceVertices).field_0x8 - *(int *)&(this->FaceVertices).field_0x34;
  } while( true );
}

// OnEdge @ 1435bcfb0

int __thiscall
MeshCut::FCutWorkingInfo::OnEdge
          (FCutWorkingInfo *this,FIndex3i *param_1,TVector<double> *param_2,double param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  TVector<double>_u_0 local_c8;
  undefined8 local_b0;
  
  dVar11 = __real_bfe0000000000000;
  dVar10 = __real_3fe0000000000000;
  iVar14 = 0;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  pFVar6 = (this->Mesh->Edges).Blocks.AllocatorInstance.Data;
  pFVar7 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
  iVar15 = -1;
  do {
    uVar5 = (param_1->field0_0x0)._s_0.A;
    local_b0 = 0;
    uVar8 = *(ulonglong *)
             (*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) +
             (ulonglong)(uVar5 & 0x1ff) * 0x10);
    uVar13 = (ulonglong)((uint)(uVar8 >> 0x20) & 0x1ff);
    lVar9 = *(longlong *)(pFVar7 + (uVar8 >> 0x29) * 8);
    pdVar1 = (double *)(lVar9 + uVar13 * 0x18);
    dVar16 = *pdVar1;
    dVar17 = pdVar1[1];
    dVar21 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
    uVar13 = (ulonglong)((uint)uVar8 & 0x1ff);
    lVar9 = *(longlong *)(pFVar7 + ((uVar8 & 0xffffffff) >> 9) * 8);
    pdVar1 = (double *)(lVar9 + uVar13 * 0x18);
    dVar18 = *pdVar1;
    dVar19 = pdVar1[1];
    local_c8._s_0.X = dVar16 - dVar18;
    dVar16 = (dVar16 + dVar18) * dVar10;
    local_c8._s_0.Y = dVar17 - dVar19;
    dVar17 = (dVar17 + dVar19) * dVar10;
    local_c8._s_0.Z = dVar21 - *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
    dVar18 = (dVar21 + *(double *)(lVar9 + 0x10 + uVar13 * 0x18)) * dVar10;
    dVar19 = UE::Geometry::Normalize<double>((TVector<double> *)&local_c8._s_0,0.0);
    dVar21 = (dVar3 - dVar17) * local_c8._s_0.Y + (dVar2 - dVar16) * local_c8._s_0.X +
             (dVar4 - dVar18) * local_c8._s_0.Z;
    dVar20 = dVar19 * dVar10;
    if (dVar21 < dVar20) {
      if (dVar19 * dVar11 < dVar21) {
        dVar17 = dVar3 - (local_c8._s_0.Y * dVar21 + dVar17);
        dVar16 = dVar2 - (local_c8._s_0.X * dVar21 + dVar16);
        dVar21 = dVar4 - (local_c8._s_0.Z * dVar21 + dVar18);
        dVar21 = dVar16 * dVar16 + dVar17 * dVar17 + dVar21 * dVar21;
      }
      else {
        dVar17 = (dVar17 - local_c8._s_0.Y * dVar20) - dVar3;
        dVar16 = (dVar16 - local_c8._s_0.X * dVar20) - dVar2;
        dVar21 = (dVar18 - local_c8._s_0.Z * dVar20) - dVar4;
        dVar21 = dVar16 * dVar16 + dVar17 * dVar17 + dVar21 * dVar21;
      }
    }
    else {
      dVar21 = (local_c8._s_0.Y * dVar20 + dVar17) - dVar3;
      dVar16 = (local_c8._s_0.X * dVar20 + dVar16) - dVar2;
      dVar17 = (local_c8._s_0.Z * dVar20 + dVar18) - dVar4;
      dVar21 = dVar21 * dVar21 + dVar16 * dVar16 + dVar17 * dVar17;
    }
    iVar12 = iVar14;
    if (param_3 <= dVar21) {
      iVar12 = iVar15;
      dVar21 = param_3;
    }
    param_3 = dVar21;
    iVar14 = iVar14 + 1;
    param_1 = (FIndex3i *)((longlong)&param_1->field0_0x0 + 4);
    iVar15 = iVar12;
  } while (iVar14 < 3);
  return iVar12;
}

// operator() @ 15049f8f0

bool __thiscall `MeshCut::FCutWorkingInfo::ConnectEdges'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8422413275269955910>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8422413275269955910>,
                       &`public:___cdecl_`public:_bool___cdecl_MeshCut::FCutWorkingInfo::ConnectEdges(TArray<int,TSizedDefaultAllocator<32>_>*___ptr64,TArray<int,TSizedDefaultAllocator<32>_>*___ptr64)___ptr64'::`24'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

