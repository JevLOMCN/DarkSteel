// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// FIntrinsicTriangulation @ 14c6df5e0

FIntrinsicTriangulation * __thiscall
UE::Geometry::FIntrinsicTriangulation::FIntrinsicTriangulation
          (FIntrinsicTriangulation *this,FDynamicMesh3 *param_1)

{
  FSimpleIntrinsicEdgeFlipMesh::FSimpleIntrinsicEdgeFlipMesh
            ((FSimpleIntrinsicEdgeFlipMesh *)this,param_1);
  IntrinsicCorrespondenceUtils::FSignpost::FSignpost(&this->SignpostData,param_1);
  return this;
}

// operator() @ 14c6eaf00

double __thiscall
`UE::Geometry::FIntrinsicTriangulation::TraceEdge'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  int local_58;
  uint local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar5 = *(longlong *)((longlong)this + 8);
  uVar9 = (ulonglong)(**(uint **)this >> 9);
  uVar12 = (ulonglong)(**(uint **)this & 0x1ff);
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + uVar9 * 8);
  uVar1 = *(undefined8 *)(lVar6 + uVar12 * 0xc);
  iVar3 = **(int **)((longlong)this + 0x10);
  local_58 = (int)uVar1;
  if (local_58 == iVar3) {
    iVar10 = 0;
  }
  else if ((int)((ulonglong)uVar1 >> 0x20) == iVar3) {
    iVar10 = 1;
  }
  else {
    iVar10 = -1;
    if (*(int *)(lVar6 + 8 + uVar12 * 0xc) == iVar3) {
      iVar10 = 2;
    }
  }
  lVar11 = uVar12 * 0x18;
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xe0) + uVar9 * 8);
  local_44 = *(undefined4 *)(lVar6 + 8 + uVar12 * 0xc);
  local_4c = *(undefined8 *)(lVar6 + uVar12 * 0xc);
  uVar4 = **(uint **)((longlong)this + 0x18);
  if (*(uint *)((longlong)&local_4c + (longlong)iVar10 * 4) == uVar4) {
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f8) + uVar9 * 8);
    if (iVar10 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        dVar13 = (double)(*pcVar7)();
        return dVar13;
      }
    }
    return *(double *)(lVar5 + lVar11 + (longlong)iVar10 * 8);
  }
  iVar10 = iVar10 + 1;
  dVar13 = *(double *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x228) + (ulonglong)(uVar4 >> 9) * 8) +
            (ulonglong)(uVar4 & 0x1ff) * 0x10);
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f8) + uVar9 * 8);
  iVar10 = iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                    (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  if (2 < iVar10) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      dVar13 = (double)(*pcVar7)();
      return dVar13;
    }
  }
  dVar2 = *(double *)(lVar5 + lVar11 + (longlong)iVar10 * 8);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1b0) + uVar9 * 8);
  if (2 < iVar10) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      dVar13 = (double)(*pcVar7)();
      return dVar13;
    }
  }
  return dVar13 * *(double *)(lVar5 + lVar11 + (longlong)iVar10 * 8) + dVar2;
}

// operator() @ 14c6f9370

void __thiscall
`UE::Geometry::FIntrinsicTriangulation::TraceEdge'::__l2::<lambda_3>::operator()
          (void *this,FSurfacePoint *param_1)

{
  int *piVar1;
  FSurfacePoint *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ForAnyElementType *pFVar11;
  
  pFVar11 = *(ForAnyElementType **)this;
  iVar8 = *(int *)&pFVar11[1].Data;
  if (iVar8 == 0) {
    if (param_1 < (FSurfacePoint *)pFVar11->Data) goto LAB_14c6f9498;
    pFVar2 = (FSurfacePoint *)pFVar11->Data + *(int *)((longlong)&pFVar11[1].Data + 4);
  }
  else {
    uVar10 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar10 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_1->PositionType == Vertex) &&
        (*(int *)(pFVar11->Data + (longlong)*(int *)&pFVar11[1].Data * 0x28 + -0x28) == 0)) &&
       ((param_1->Position).EdgePosition.EdgeID ==
        *(int *)(pFVar11->Data + (longlong)*(int *)&pFVar11[1].Data * 0x28 + -0x20))) {
      return;
    }
    pFVar11 = *(ForAnyElementType **)this;
    if (param_1 < (FSurfacePoint *)pFVar11->Data) goto LAB_14c6f9498;
    pFVar2 = (FSurfacePoint *)pFVar11->Data + *(int *)((longlong)&pFVar11[1].Data + 4);
  }
  if ((param_1 < pFVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14c6f9498:
  iVar8 = *(int *)&pFVar11[1].Data;
  piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,pFVar11,piVar1);
  }
  lVar9 = (longlong)iVar8;
  *(int *)&pFVar11[1].Data = iVar8 + 1;
  uVar5 = *(undefined8 *)&param_1->Position;
  pFVar3 = pFVar11->Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x28) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 8) = uVar5;
  dVar6 = *(double *)((longlong)&param_1->Position + 0x10);
  *(double *)(pFVar3 + lVar9 * 0x28 + 0x10) = (param_1->Position).EdgePosition.Alpha;
  *(double *)(pFVar3 + lVar9 * 0x28 + 0x10 + 8) = dVar6;
  *(undefined8 *)(pFVar3 + lVar9 * 0x28 + 0x20) =
       *(undefined8 *)((longlong)&param_1->Position + 0x18);
  return;
}

// FlipEdge @ 14c735610

EMeshResult __thiscall
UE::Geometry::FIntrinsicTriangulation::FlipEdge
          (FIntrinsicTriangulation *this,int param_1,FEdgeFlipInfo *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  FIndex2i_u_0_s_0 FVar3;
  FIndex2i FVar4;
  EMeshResult EVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_38;
  
  lVar2 = *(longlong *)(this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8);
  if (*(int *)(lVar2 + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10) == -1) {
    return Failed_IsBoundaryEdge;
  }
  FVar3 = ((FIndex2i_u_0 *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10))->_s_0;
  uVar9 = (ulonglong)(FVar3.B & 0x1ff);
  lVar2 = *(longlong *)(this->_padding_ + ((ulonglong)FVar3 >> 0x29) * 8);
  uVar1 = *(undefined8 *)(lVar2 + uVar9 * 0xc);
  local_38 = (int)uVar1;
  if (local_38 == param_1) {
    uVar7 = 0;
  }
  else if ((int)((ulonglong)uVar1 >> 0x20) == param_1) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0xffffffff;
    if (*(int *)(lVar2 + 8 + uVar9 * 0xc) == param_1) {
      uVar7 = 2;
    }
  }
  uVar8 = (ulonglong)(FVar3.A & 0x1ff);
  lVar2 = *(longlong *)(this->_padding_ + (((ulonglong)FVar3 & 0xffffffff) >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar2 + uVar8 * 0xc);
  local_38 = (int)uVar1;
  uVar6 = 0;
  if (local_38 != param_1) {
    if ((int)((ulonglong)uVar1 >> 0x20) == param_1) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0xffffffff;
      if (*(int *)(lVar2 + 8 + uVar8 * 0xc) == param_1) {
        uVar6 = 2;
      }
    }
  }
  EVar5 = FSimpleIntrinsicEdgeFlipMesh::FlipEdge
                    ((FSimpleIntrinsicEdgeFlipMesh *)this,param_1,param_2);
  if (EVar5 == Ok) {
    FVar4.field0_0x0._s_0.B = uVar7;
    FVar4.field0_0x0._s_0.A = uVar6;
    IntrinsicCorrespondenceUtils::FSignpost::OnFlipEdge
              (&this->SignpostData,param_1,(FIndex2i)FVar3,
               (FIndex2i)((FIndex2i_u_0 *)((longlong)&param_2->_padding_ + 4))->_s_0,FVar4,
               *(double *)
                (*(longlong *)(this->_padding_ + ((ulonglong)FVar3 >> 0x29) * 8) + 8 + uVar9 * 0x18)
               ,*(double *)
                 (*(longlong *)(this->_padding_ + (((ulonglong)FVar3 & 0xffffffff) >> 9) * 8) + 8 +
                 (ulonglong)(FVar3.A & 0x1ff) * 0x18));
    EVar5 = Ok;
  }
  return EVar5;
}

// PokeTriangle @ 14c7565f0

EMeshResult __thiscall
UE::Geometry::FIntrinsicTriangulation::PokeTriangle
          (FIntrinsicTriangulation *this,int param_1,TVector<double> *param_2,
          FPokeTriangleInfo *param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  EMeshResult EVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  uint local_140;
  uint uStack_13c;
  FGeometricInfo local_128;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8 [6];
  
  if ((-1 < param_1) &&
     (param_1 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4))) {
    uVar20 = (ulonglong)((uint)param_1 >> 9);
    uVar21 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(this->_padding_ + uVar20 * 8) + uVar21 * 2) - 1U) < 0xfffe
       ) {
      lVar9 = *(longlong *)(this->_padding_ + uVar20 * 8);
      uVar2 = *(undefined8 *)(lVar9 + uVar21 * 0xc);
      uVar5 = *(uint *)(lVar9 + 8 + uVar21 * 0xc);
      lVar9 = *(longlong *)
               ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data + uVar20 * 8)
      ;
      local_118 = *(double *)(lVar9 + 0x10 + uVar21 * 0x18);
      pdVar1 = (double *)(lVar9 + uVar21 * 0x18);
      dVar15 = *pdVar1;
      dVar13 = pdVar1[1];
      EVar19 = FSimpleIntrinsicMesh::PokeTriangle
                         ((FSimpleIntrinsicMesh *)this,param_1,param_2,param_3);
      dVar18 = __real_c01921fb54442d18;
      dVar17 = __real_401921fb54442d18;
      if (EVar19 == Ok) {
        uVar6 = (param_3->NewTriangles).field0_0x0._s_0.A;
        uVar7 = (param_3->NewTriangles).field0_0x0._s_0.B;
        local_140 = (uint)uVar2;
        lVar9 = this->_padding_;
        uVar8 = param_3->NewVertex;
        pFVar10 = (this->SignpostData).GeometricVertexInfo.Blocks.AllocatorInstance.Data;
        local_d8[0]._s_0.X = local_118;
        uStack_13c = (uint)((ulonglong)uVar2 >> 0x20);
        lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar6 >> 9) * 8);
        for (local_100 = *(double *)
                          (*(longlong *)(pFVar10 + (ulonglong)(uStack_13c >> 9) * 8) +
                          (ulonglong)(uStack_13c & 0x1ff) * 0x10) *
                         *(double *)(lVar11 + (ulonglong)(uVar6 & 0x1ff) * 0x18) + dVar13;
            local_100 < 0.0; local_100 = local_100 + __real_401921fb54442d18) {
        }
        for (; __real_401921fb54442d18 < local_100; local_100 = local_100 + __real_c01921fb54442d18)
        {
        }
        uVar16 = (ulonglong)local_100 >> 0x20;
        uVar22 = SUB84(local_100,0);
        for (local_f0._s_0.Y =
                  *(double *)
                   (*(longlong *)(pFVar10 + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 0x10) *
                  *(double *)
                   (*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 0x18) + local_118; local_f0._s_0.Y < 0.0;
            local_f0._s_0.Y = local_f0._s_0.Y + __real_401921fb54442d18) {
        }
        for (; __real_401921fb54442d18 < local_f0._s_0.Y;
            local_f0._s_0.Y = local_f0._s_0.Y + __real_c01921fb54442d18) {
        }
        lVar9 = *(longlong *)(lVar9 + uVar20 * 8);
        for (dVar14 = *(double *)
                       (*(longlong *)(pFVar10 + (ulonglong)(local_140 >> 9) * 8) +
                       (ulonglong)(local_140 & 0x1ff) * 0x10) * *(double *)(lVar9 + uVar21 * 0x18) +
                      dVar15; dVar14 < 0.0; dVar14 = dVar14 + __real_401921fb54442d18) {
        }
        for (; __real_401921fb54442d18 < dVar14; dVar14 = dVar14 + __real_c01921fb54442d18) {
        }
        dVar3 = *(double *)(lVar9 + 0x10 + uVar21 * 0x18);
        local_128.bIsInterior = false;
        local_128._9_7_ = 0;
        local_128.ToRadians = __real_3ff0000000000000;
        dVar4 = *(double *)(lVar11 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
        local_108 = dVar15;
        local_f0._s_0.X = dVar13;
        local_d8[0]._8_8_ = dVar14;
        TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::
        InsertAt(&(this->SignpostData).GeometricVertexInfo,&local_128,uVar8);
        uVar5 = (param_3->NewEdges).field0_0x0._s_0.A;
        dVar13 = UpdateVertexByEdgeTrace
                           (this,uVar8,local_140,dVar14,
                            *(double *)
                             (*(longlong *)(this->_padding_ + (ulonglong)(uVar5 >> 9) * 8) +
                             (ulonglong)(uVar5 & 0x1ff) * 8));
        for (local_f8 = dVar13; local_f8 < 0.0; local_f8 = local_f8 + dVar17) {
        }
        for (; dVar17 < local_f8; local_f8 = local_f8 + dVar18) {
        }
        for (local_f0._s_0.Z = dVar3 + dVar13; local_f0._s_0.Z < 0.0;
            local_f0._s_0.Z = local_f0._s_0.Z + dVar17) {
        }
        for (; dVar17 < local_f0._s_0.Z; local_f0._s_0.Z = local_f0._s_0.Z + dVar18) {
        }
        for (local_d8[0]._16_8_ = dVar3 + dVar4 + dVar13; (double)local_d8[0]._16_8_ < 0.0;
            local_d8[0]._16_8_ = (double)local_d8[0]._16_8_ + dVar17) {
        }
        for (; dVar17 < (double)local_d8[0]._16_8_;
            local_d8[0]._16_8_ = (double)local_d8[0]._16_8_ + dVar18) {
        }
        TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                  (&(this->SignpostData).IntrinsicEdgeAngles,(TVector<double> *)&local_d8[0]._s_0,
                   uVar7);
        TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                  (&(this->SignpostData).IntrinsicEdgeAngles,(TVector<double> *)&local_f0._s_0,uVar6
                  );
        lVar9 = *(longlong *)
                 ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data +
                 uVar20 * 8);
        EVar19 = Ok;
        auVar12._8_4_ = uVar22;
        auVar12._0_8_ = dVar15;
        auVar12._12_4_ = (int)uVar16;
        *(undefined1 (*) [16])(lVar9 + uVar21 * 0x18) = auVar12;
        *(double *)(lVar9 + 0x10 + uVar21 * 0x18) = local_f8;
        dVar15 = (param_2->field0_0x0)._s_0.Y;
        (param_3->BaryCoords).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        (param_3->BaryCoords).field0_0x0._s_0.Y = dVar15;
        (param_3->BaryCoords).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      }
      return EVar19;
    }
  }
  return Failed_NotATriangle;
}

// SplitEdge @ 14c7684d0

EMeshResult __thiscall
UE::Geometry::FIntrinsicTriangulation::SplitEdge
          (FIntrinsicTriangulation *this,int param_1,FEdgeSplitInfo *param_2,double param_3)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FEdgeSplitInfo *pFVar7;
  EMeshResult EVar8;
  TVector<double> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  int iStack_1ac;
  FGeometricInfo local_1a8;
  int local_198;
  ulonglong local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  longlong local_140;
  TVector<double>_u_0 local_138;
  FEdgeSplitInfo *local_120;
  ulonglong local_118;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [3];
  
  dVar18 = __real_3ff0000000000000;
  local_120 = param_2;
  if (__real_3ff0000000000000 <= param_3) {
    param_3 = __real_3ff0000000000000;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if ((-1 < param_1) &&
     (param_1 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4))) {
    uVar10 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8) +
                           uVar10 * 2) - 1U) < 0xfffe) {
      lVar5 = *(longlong *)(this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8);
      lVar11 = lVar5 + uVar10 * 0x10;
      uVar2 = *(uint *)(lVar11 + 8);
      uVar3 = *(uint *)(lVar11 + 0xc);
      if (*(int *)(lVar5 + 0xc + uVar10 * 0x10) == -1) {
        uVar10 = (ulonglong)(uVar2 & 0x1ff);
        uVar15 = (ulonglong)(uVar2 >> 9);
        lVar11 = *(longlong *)(this->_padding_ + uVar15 * 8);
        uVar20 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
        local_1a8.ToRadians._0_4_ = (uint)uVar20;
        if (local_1a8.ToRadians._0_4_ == param_1) {
          iVar13 = 0;
        }
        else if ((int)((ulonglong)uVar20 >> 0x20) == param_1) {
          iVar13 = 1;
        }
        else {
          iVar13 = -1;
          if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == param_1) {
            iVar13 = 2;
          }
        }
        lVar11 = *(longlong *)(this->_padding_ + uVar15 * 8);
        local_1a8._8_4_ = *(undefined4 *)(lVar11 + 8 + uVar10 * 0xc);
        local_1a8.ToRadians = *(double *)(lVar11 + uVar10 * 0xc);
        local_198 = *(int *)((longlong)&local_1a8.ToRadians + (longlong)iVar13 * 4);
        local_190 = uVar10 * 3;
        uVar2 = *(uint *)((longlong)&local_1a8.ToRadians +
                         (longlong)*(int *)((longlong)&this->_padding_ + (longlong)iVar13 * 4 + 4) *
                         4);
        FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                  ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_188._s_0,iVar13,
                   (TVector<double> *)
                   (*(longlong *)
                     ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data +
                     uVar15 * 8) + uVar10 * 0x18));
        lVar11 = this->_padding_;
        lVar5 = *(longlong *)(this->_padding_ + uVar15 * 8);
        local_1a8.ToRadians = *(double *)(lVar5 + uVar10 * 0xc);
        uVar3 = *(uint *)(lVar5 + 8 + uVar10 * 0xc);
        local_170._s_0.X =
             *(double *)
              (*(longlong *)(lVar11 + (ulonglong)(local_1a8.ToRadians._0_4_ >> 9) * 8) +
              (ulonglong)(local_1a8.ToRadians._0_4_ & 0x1ff) * 8);
        local_170._s_0.Y =
             *(double *)
              (*(longlong *)(lVar11 + ((ulonglong)local_1a8.ToRadians >> 0x29) * 8) +
              (ulonglong)((uint)((ulonglong)local_1a8.ToRadians >> 0x20) & 0x1ff) * 8);
        local_170._s_0.Z =
             *(double *)
              (*(longlong *)(lVar11 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 8)
        ;
        FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                  ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_110._s_0,iVar13,
                   (TVector<double> *)&local_170._s_0);
        EVar8 = FSimpleIntrinsicMesh::SplitEdge
                          ((FSimpleIntrinsicMesh *)this,param_1,param_2,param_3);
        uVar10 = local_190;
        if (EVar8 != Ok) {
          return EVar8;
        }
        uVar3 = param_2->NewVertex;
        uVar4 = (param_2->NewTriangles).field0_0x0._s_0.A;
        FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                  ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_138._s_0,iVar13,
                   (TVector<double> *)(*(longlong *)(this->_padding_ + uVar15 * 8) + local_190 * 8))
        ;
        local_1a8.ToRadians = dVar18;
        local_1a8.bIsInterior = false;
        local_1a8._9_7_ = 0;
        dVar18 = *(double *)
                  (*(longlong *)
                    ((this->SignpostData).GeometricVertexInfo.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 0x10);
        TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::
        InsertAt(&(this->SignpostData).GeometricVertexInfo,&local_1a8,uVar3);
        local_158._s_0.Y = local_188._s_0.Y;
        local_170._s_0.X = local_188._s_0.X;
        local_170._s_0.Z = local_188._s_0.Z;
        local_158._s_0.Z = AsZeroToTwoPi(local_138._s_0.Z * dVar18 + local_188._s_0.Z);
        dVar18 = *(double *)
                  (*(longlong *)(this->_padding_ + (ulonglong)(uVar4 >> 9) * 8) +
                  (ulonglong)(uVar4 & 0x1ff) * 0x18);
        dVar16 = UpdateVertexByEdgeTrace
                           (this,uVar3,local_198,local_188._s_0.X,local_110._s_0.X * param_3);
        dVar17 = AsZeroToTwoPi(local_138._s_0.Y + dVar18);
        dVar16 = dVar16 - dVar17;
        dVar18 = AsZeroToTwoPi(dVar18);
        local_170._s_0.Y = AsZeroToTwoPi(dVar18 + dVar16);
        local_158._s_0.X = AsZeroToTwoPi(dVar16);
        TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                  (&(this->SignpostData).IntrinsicEdgeAngles,(TVector<double> *)&local_158._s_0,
                   uVar4);
        iVar13 = 3 - iVar13;
        pTVar9 = FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                           ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f8._s_0,
                            iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                                     (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) &
                                           0xffffffffU) >> 0x1f)) * -3,
                            (TVector<double> *)&local_170._s_0);
        dVar16 = (pTVar9->field0_0x0)._s_0.Y;
        dVar18 = (pTVar9->field0_0x0)._s_0.Z;
        lVar11 = *(longlong *)
                  ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data +
                  uVar15 * 8);
        pdVar1 = (double *)(lVar11 + uVar10 * 8);
        *pdVar1 = (pTVar9->field0_0x0)._s_0.X;
        pdVar1[1] = dVar16;
        *(double *)(lVar11 + 0x10 + uVar10 * 8) = dVar18;
        return Ok;
      }
      uVar10 = (ulonglong)(uVar2 & 0x1ff);
      uVar15 = (ulonglong)(uVar2 >> 9);
      lVar11 = *(longlong *)(this->_padding_ + uVar15 * 8);
      uVar20 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
      local_1a8.ToRadians._0_4_ = (uint)uVar20;
      if (local_1a8.ToRadians._0_4_ == param_1) {
        iVar13 = 0;
      }
      else if ((int)((ulonglong)uVar20 >> 0x20) == param_1) {
        iVar13 = 1;
      }
      else {
        iVar13 = -1;
        if (*(int *)(lVar11 + 8 + uVar10 * 0xc) == param_1) {
          iVar13 = 2;
        }
      }
      lVar11 = *(longlong *)(this->_padding_ + uVar15 * 8);
      local_1a8._8_4_ = *(undefined4 *)(lVar11 + 8 + uVar10 * 0xc);
      local_1a8.ToRadians = *(double *)(lVar11 + uVar10 * 0xc);
      local_198 = *(int *)((longlong)&local_1a8.ToRadians + (longlong)iVar13 * 4);
      local_118 = (ulonglong)
                  *(uint *)((longlong)&local_1a8.ToRadians +
                           (longlong)*(int *)((longlong)&this->_padding_ + (longlong)iVar13 * 4 + 4)
                           * 4);
      local_140 = uVar10 * 3;
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_110._s_0,iVar13,
                 (TVector<double> *)
                 (*(longlong *)
                   ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data +
                   uVar15 * 8) + uVar10 * 0x18));
      lVar11 = this->_padding_;
      lVar5 = *(longlong *)(this->_padding_ + uVar15 * 8);
      local_1a8.ToRadians = *(double *)(lVar5 + uVar10 * 0xc);
      uVar2 = *(uint *)(lVar5 + 8 + uVar10 * 0xc);
      local_170._s_0.X =
           *(double *)
            (*(longlong *)(lVar11 + (ulonglong)(local_1a8.ToRadians._0_4_ >> 9) * 8) +
            (ulonglong)(local_1a8.ToRadians._0_4_ & 0x1ff) * 8);
      local_170._s_0.Y =
           *(double *)
            (*(longlong *)(lVar11 + ((ulonglong)local_1a8.ToRadians >> 0x29) * 8) +
            (ulonglong)((uint)((ulonglong)local_1a8.ToRadians >> 0x20) & 0x1ff) * 8);
      local_170._s_0.Z =
           *(double *)
            (*(longlong *)(lVar11 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8);
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f8._s_0,iVar13,
                 (TVector<double> *)&local_170._s_0);
      local_1a8.ToRadians = (double)(ulonglong)(uVar3 & 0x1ff);
      local_190 = (ulonglong)(uVar3 >> 9);
      lVar11 = *(longlong *)(this->_padding_ + local_190 * 8);
      uVar20 = *(undefined8 *)(lVar11 + (longlong)local_1a8.ToRadians * 0xc);
      local_170._0_4_ = (undefined4)uVar20;
      iVar14 = 0;
      if (local_170._0_4_ != param_1) {
        if ((int)((ulonglong)uVar20 >> 0x20) == param_1) {
          iVar14 = 1;
        }
        else {
          iVar14 = -1;
          if (*(int *)(lVar11 + 8 + (longlong)local_1a8.ToRadians * 0xc) == param_1) {
            iVar14 = 2;
          }
        }
      }
      lVar11 = *(longlong *)(this->_padding_ + local_190 * 8);
      local_170._8_4_ = *(undefined4 *)(lVar11 + 8 + (longlong)local_1a8.ToRadians * 0xc);
      local_170._s_0.X = *(double *)(lVar11 + (longlong)local_1a8.ToRadians * 0xc);
      local_188._s_0.X =
           (double)(ulonglong)
                   *(uint *)((longlong)&local_170 +
                            (longlong)
                            *(int *)((longlong)&this->_padding_ + (longlong)iVar14 * 4 + 4) * 4);
      local_170._s_0.X = (double)((ulonglong)(uVar3 & 0x1ff) * 3);
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_138._s_0,iVar14,
                 (TVector<double> *)
                 (*(longlong *)
                   ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data +
                   local_190 * 8) + (ulonglong)(uVar3 & 0x1ff) * 0x18));
      pFVar7 = local_120;
      EVar8 = FSimpleIntrinsicMesh::SplitEdge
                        ((FSimpleIntrinsicMesh *)this,param_1,local_120,param_3);
      if (EVar8 != Ok) {
        return EVar8;
      }
      pFVar6 = (this->SignpostData).GeometricVertexInfo.Blocks.AllocatorInstance.Data;
      uVar2 = pFVar7->NewVertex;
      uVar3 = (pFVar7->NewTriangles).field0_0x0._s_0.A;
      uVar4 = (pFVar7->NewTriangles).field0_0x0._s_0.B;
      dVar16 = *(double *)
                (*(longlong *)(pFVar6 + ((local_118 & 0xffffffff) >> 9) * 8) +
                (ulonglong)((uint)local_118 & 0x1ff) * 0x10);
      uVar12 = SUB84(local_188._s_0.X,0);
      uVar10 = (ulonglong)local_188._s_0.X & 0xffffffff;
      local_188._s_0.Y = 0.0;
      local_188._s_0.X = dVar18;
      dVar18 = *(double *)
                (*(longlong *)(pFVar6 + (uVar10 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 0x10);
      TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSignpost::FGeometricInfo,512>::
      InsertAt(&(this->SignpostData).GeometricVertexInfo,(FGeometricInfo *)&local_188._s_0,uVar2);
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_188._s_0,iVar13,
                 (TVector<double> *)(*(longlong *)(this->_padding_ + uVar15 * 8) + local_140 * 8));
      FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_170._s_0,iVar14,
                 (TVector<double> *)
                 (*(longlong *)(this->_padding_ + local_190 * 8) + (longlong)local_170._s_0.X * 8));
      local_c0._s_0.Y = local_110._s_0.Y;
      local_90[0]._s_0.Z = local_138._s_0.X;
      local_d8._s_0.X = local_110._s_0.X;
      local_d8._s_0.Z = local_110._s_0.Z;
      local_a8._s_0.Y = local_138._s_0.Y;
      local_90[0]._s_0.Y = local_138._s_0.Z;
      local_c0._s_0.Z = AsZeroToTwoPi(local_188._s_0.Z * dVar16 + local_110._s_0.Z);
      lVar11 = this->_padding_;
      local_a8._s_0.Z =
           AsZeroToTwoPi(dVar18 * *(double *)
                                   (*(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8) + 8 +
                                   (ulonglong)(uVar4 & 0x1ff) * 0x18) + local_138._s_0.Z);
      uVar10 = (ulonglong)(uVar3 & 0x1ff);
      lVar11 = *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 9) * 8);
      dVar18 = *(double *)(lVar11 + uVar10 * 0x18);
      uVar20 = local_188._s_0.Y;
      dVar16 = AsZeroToTwoPi(dVar18 + local_188._s_0.Y);
      dVar17 = AsZeroToTwoPi((double)uVar20 + *(double *)(lVar11 + uVar10 * 0x18) + local_170._s_0.X
                            );
      dVar19 = UpdateVertexByEdgeTrace
                         (this,uVar2,local_198,local_110._s_0.X,local_f8._s_0.X * param_3);
      dVar19 = dVar19 - dVar16;
      local_c0._s_0.X = AsZeroToTwoPi(dVar19);
      dVar18 = AsZeroToTwoPi(dVar18);
      local_d8._s_0.Y = AsZeroToTwoPi(dVar18 + dVar19);
      local_a8._s_0.X = AsZeroToTwoPi(dVar19 + dVar16);
      local_90[0]._0_8_ = AsZeroToTwoPi(dVar19 + dVar17);
      TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                (&(this->SignpostData).IntrinsicEdgeAngles,(TVector<double> *)&local_90[0]._s_0,
                 uVar4);
      TDynamicVector<UE::Math::TVector<double>,512>::InsertAt
                (&(this->SignpostData).IntrinsicEdgeAngles,(TVector<double> *)&local_c0._s_0,uVar3);
      iVar13 = 3 - iVar13;
      pTVar9 = FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                         ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f8._s_0,
                          iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                                   (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) &
                                         0xffffffffU) >> 0x1f)) * -3,
                          (TVector<double> *)&local_d8._s_0);
      iVar14 = 3 - iVar14;
      dVar16 = (pTVar9->field0_0x0)._s_0.Y;
      dVar18 = (pTVar9->field0_0x0)._s_0.Z;
      lVar11 = *(longlong *)
                ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data + uVar15 * 8
                );
      pdVar1 = (double *)(lVar11 + local_140 * 8);
      *pdVar1 = (pTVar9->field0_0x0)._s_0.X;
      pdVar1[1] = dVar16;
      *(double *)(lVar11 + 0x10 + local_140 * 8) = dVar18;
      pTVar9 = FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
                         ((FSimpleIntrinsicEdgeFlipMesh *)this,(TVector<double> *)&local_f8._s_0,
                          iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                                   (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) &
                                         0xffffffffU) >> 0x1f)) * -3,
                          (TVector<double> *)&local_a8._s_0);
      dVar16 = (pTVar9->field0_0x0)._s_0.Y;
      dVar18 = (pTVar9->field0_0x0)._s_0.Z;
      lVar11 = *(longlong *)
                ((this->SignpostData).IntrinsicEdgeAngles.Blocks.AllocatorInstance.Data +
                local_190 * 8);
      pdVar1 = (double *)(lVar11 + (longlong)local_1a8.ToRadians * 0x18);
      *pdVar1 = (pTVar9->field0_0x0)._s_0.X;
      pdVar1[1] = dVar16;
      *(double *)(lVar11 + 0x10 + (longlong)local_1a8.ToRadians * 0x18) = dVar18;
      return Ok;
    }
  }
  return Failed_NotAnEdge;
}

// TraceEdge @ 14c76c260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FIntrinsicTriangulation::TraceEdge
          (FIntrinsicTriangulation *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,double param_2,bool param_3)

{
  double dVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStackY_238 [32];
  uint local_1e8 [2];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *local_1e0 [2];
  int local_1d0 [2];
  ulonglong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *local_1b0;
  FIntrinsicTriangulation *local_1a8;
  undefined8 *local_1a0;
  FIntrinsicTriangulation *local_198;
  int *local_190;
  uint *local_188;
  int local_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  double local_170;
  double dStack_168;
  undefined8 local_160;
  FMeshGeodesicSurfaceTracer local_158;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_238;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar12 = __return_storage_ptr__;
  if (((-1 < param_1) &&
      (param_1 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4))) &&
     ((ushort)(*(short *)(*(longlong *)(this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_1b8 = (this->SignpostData)._padding_;
    uVar16 = (ulonglong)(param_1 & 0x1ff);
    uVar14 = (ulonglong)((uint)param_1 >> 9);
    dVar1 = *(double *)(*(longlong *)(this->_padding_ + uVar14 * 8) + uVar16 * 8);
    uVar2 = *(ulonglong *)(*(longlong *)(this->_padding_ + uVar14 * 8) + uVar16 * 0x10);
    local_1e8[0] = (uint)uVar2;
    local_1c8 = uVar2 >> 0x20;
    if (param_3) {
      local_1c8 = uVar2 & 0xffffffff;
      local_1e8[0] = (uint)(uVar2 >> 0x20);
    }
    local_1c0 = *(undefined8 *)(*(longlong *)(this->_padding_ + uVar14 * 8) + 8 + uVar16 * 0x10);
    local_1a0 = &local_1c0;
    local_190 = local_1d0;
    local_188 = local_1e8;
    local_1d0[0] = param_1;
    local_1b0 = __return_storage_ptr__;
    local_1a8 = this;
    local_198 = this;
    dVar5 = `UE::Geometry::FIntrinsicTriangulation::TraceEdge'::__l2::<lambda_1>::operator()
                      (&local_1a0);
    SignpostSufaceTraceUtil::TraceFromIntrinsicVert
              (&local_158,&this->SignpostData,local_1e8[0],dVar5,dVar1);
    iVar8 = local_158.SurfaceTrace.ArrayNum;
    local_1e0[0] = __return_storage_ptr__;
    `UE::Geometry::FIntrinsicTriangulation::TraceEdge'::__l2::<lambda_3>::operator()
              (local_1e0,
               (FSurfacePoint *)
               (*(longlong *)
                 ((this->SignpostData).IntrinsicVertexPositions.Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_1e8[0] >> 9) * 8) + (ulonglong)(local_1e8[0] & 0x1ff) * 0x28));
    lVar7 = local_1b8;
    dVar5 = __real_3fe0000000000000;
    dVar1 = __real_3ff0000000000000;
    uVar17 = 1;
    if (1 < iVar8 + -1) {
      lVar15 = 0x58;
      do {
        uVar10 = 0;
        if ((int)uVar17 < local_158.SurfaceTrace.ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                     *)(*pcVar4)();
          return pTVar12;
        }
        if (local_158.SurfaceTrace.AllocatorInstance.Data[lVar15 + 0x48] ==
            (FScriptContainerElement)0x0) {
          local_170 = *(double *)(local_158.SurfaceTrace.AllocatorInstance.Data + lVar15 + 0x30);
          dStack_168 = *(double *)
                        (local_158.SurfaceTrace.AllocatorInstance.Data + lVar15 + 0x30 + 8);
          uStack_178 = *(uint *)(local_158.SurfaceTrace.AllocatorInstance.Data + lVar15 + 0x10);
          local_160 = *(undefined8 *)(local_158.SurfaceTrace.AllocatorInstance.Data + lVar15 + 0x40)
          ;
          local_180 = 2;
        }
        else {
          uStack_178 = *(uint *)(local_158.SurfaceTrace.AllocatorInstance.Data + lVar15 + 0x4c);
          dVar6 = dVar1 - *(double *)(local_158.SurfaceTrace.AllocatorInstance.Data + lVar15 + 0x50)
          ;
          if (dVar1 <= dVar1 - *(double *)
                                (local_158.SurfaceTrace.AllocatorInstance.Data + lVar15 + 0x50)) {
            dVar6 = dVar1;
          }
          if (dVar6 <= 0.0) {
            dVar6 = 0.0;
          }
          if (dVar5 < dVar6) {
            if (param_2 <= dVar1 - dVar6) goto LAB_14c76c54f;
            uStack_178 = *(uint *)(*(longlong *)
                                    (*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(uStack_178 >> 9) * 8
                                    ) + (ulonglong)(uStack_178 & 0x1ff) * 0x10);
            local_180 = 0;
          }
          else if (param_2 <= dVar6) {
LAB_14c76c54f:
            local_180 = 1;
            local_170 = dVar6;
          }
          else {
            uStack_178 = (uint)((ulonglong)
                                *(undefined8 *)
                                 (*(longlong *)
                                   (*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(uStack_178 >> 9) * 8)
                                 + (ulonglong)(uStack_178 & 0x1ff) * 0x10) >> 0x20);
            local_180 = 0;
          }
        }
        iVar11 = __return_storage_ptr__->ArrayNum;
        if (iVar11 == 0) {
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar3 <= (FScriptContainerElement *)&local_180) &&
             ((FScriptContainerElement *)&local_180 <
              pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) {
LAB_14c76c689:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                         *)(*pcVar4)();
              return pTVar12;
            }
          }
LAB_14c76c6bd:
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == __return_storage_ptr__->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          lVar13 = (longlong)iVar11;
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(ulonglong *)(pFVar3 + lVar13 * 0x28) = CONCAT44(uStack_17c,local_180);
          *(ulonglong *)(pFVar3 + lVar13 * 0x28 + 8) = CONCAT44(uStack_174,uStack_178);
          *(double *)(pFVar3 + lVar13 * 0x28 + 0x10) = local_170;
          *(double *)(pFVar3 + lVar13 * 0x28 + 0x10 + 8) = dStack_168;
          *(undefined8 *)(pFVar3 + lVar13 * 0x28 + 0x20) = local_160;
        }
        else {
          uVar10 = 0;
          if ((int)(iVar11 - 1U) < iVar11) {
            uVar10 = ~(iVar11 - 1U) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                       *)(*pcVar4)();
            return pTVar12;
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((local_180 != 0) ||
              (*(int *)(pFVar3 + (longlong)__return_storage_ptr__->ArrayNum * 0x28 + -0x28) != 0))
             || (uStack_178 !=
                 *(uint *)(pFVar3 + (longlong)__return_storage_ptr__->ArrayNum * 0x28 + -0x20))) {
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)&local_180) &&
               ((FScriptContainerElement *)&local_180 <
                pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x28)) goto LAB_14c76c689;
            goto LAB_14c76c6bd;
          }
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 0x58;
        this = local_1a8;
        pTVar12 = local_1b0;
      } while ((int)uVar17 < iVar8 + -1);
    }
    `UE::Geometry::FIntrinsicTriangulation::TraceEdge'::__l2::<lambda_3>::operator()
              (local_1e0,
               (FSurfacePoint *)
               (*(longlong *)
                 ((this->SignpostData).IntrinsicVertexPositions.Blocks.AllocatorInstance.Data +
                 ((local_1c8 & 0xffffffff) >> 9) * 8) + (ulonglong)((uint)local_1c8 & 0x1ff) * 0x28)
              );
    if (local_158.SurfaceTrace.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.SurfaceTrace.AllocatorInstance.Data);
    }
  }
  return pTVar12;
}

// UpdateVertexByEdgeTrace @ 14c77bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
UE::Geometry::FIntrinsicTriangulation::UpdateVertexByEdgeTrace
          (FIntrinsicTriangulation *this,int param_1,int param_2,double param_3,double param_4)

{
  TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512> *pTVar1;
  uint *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_218 [32];
  bool local_1e8 [8];
  TVector2<double>_u_0 local_1e0;
  TVector2<double>_u_0 local_1d0;
  EPositionType local_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  TVector<double>_u_0 local_198;
  FSurfacePoint local_180;
  double local_158;
  FMeshGeodesicSurfaceTracer local_148;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  SignpostSufaceTraceUtil::TraceFromIntrinsicVert
            (&local_148,&this->SignpostData,param_2,param_3,param_4);
  uVar15 = 0;
  if ((int)(local_148.SurfaceTrace.ArrayNum - 1U) < local_148.SurfaceTrace.ArrayNum) {
    uVar15 = ~(local_148.SurfaceTrace.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    dVar9 = (double)(*pcVar8)();
    return dVar9;
  }
  lVar12 = (longlong)local_148.SurfaceTrace.ArrayNum * 0x58;
  local_1c0 = Triangle;
  uStack_1b8 = *(uint *)(local_148.SurfaceTrace.AllocatorInstance.Data + lVar12 + -0x48);
  lVar14 = (longlong)(int)uStack_1b8;
  local_1d0._s_0.X =
       (double)*(undefined8 *)(local_148.SurfaceTrace.AllocatorInstance.Data + lVar12 + -0x38);
  local_1d0._s_0.Y =
       (double)*(undefined8 *)(local_148.SurfaceTrace.AllocatorInstance.Data + lVar12 + -0x38 + 8);
  dVar9 = *(double *)(local_148.SurfaceTrace.AllocatorInstance.Data + lVar12 + -0x28);
  dVar10 = *(double *)(local_148.SurfaceTrace.AllocatorInstance.Data + lVar12 + -0x28 + 8);
  uVar5 = *(undefined8 *)(local_148.SurfaceTrace.AllocatorInstance.Data + lVar12 + -0x18);
  uVar15 = 0;
  if ((int)uStack_1b8 < (int)(this->SignpostData)._padding_) {
    uVar15 = ~uStack_1b8 >> 0x1f;
  }
  local_1b0 = dVar9;
  dStack_1a8 = dVar10;
  local_1a0 = uVar5;
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    dVar9 = (double)(*pcVar8)();
    return dVar9;
  }
  uVar7 = __xmm_80000000000000008000000000000000._4_4_;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  iVar6 = *(int *)((this->SignpostData)._padding_ + lVar14 * 4);
  if (local_148.ScratchTri2.EdgeOrientationSign.field0_0x0._s_0.A == -1) {
    local_1d0._4_4_ = local_1d0._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_1d0._0_4_ = local_1d0._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_1d0._12_4_ = local_1d0._12_4_ ^ _UNK_15066df7c;
    local_1d0._8_4_ = local_1d0._8_4_ ^ _UNK_15066df78;
  }
  if (local_148.ScratchTri2.PermutedTriEIDs.field0_0x0._s_0.A == iVar6) {
    iVar13 = 0;
  }
  else if (local_148.ScratchTri2.PermutedTriEIDs.field0_0x0._s_0.B == iVar6) {
    iVar13 = 1;
  }
  else {
    iVar13 = -1;
    if (local_148.ScratchTri2.PermutedTriEIDs.field0_0x0._s_0.C == iVar6) {
      iVar13 = 2;
    }
  }
  GeodesicSingleTriangleUtils::FTangentTri2::ChangeBasis
            (&local_148.ScratchTri2,(TVector2<double> *)&local_1e0._s_0,
             (TVector2<double> *)&local_1d0._s_0,iVar13);
  uVar19 = SUB84(local_1e0._s_0.X,0);
  uVar20 = (uint)((ulonglong)local_1e0._0_8_ >> 0x20);
  uVar17 = SUB84(local_1e0._s_0.Y,0);
  uVar18 = (uint)((ulonglong)local_1e0._8_8_ >> 0x20);
  if (*(int *)((longlong)(local_148.ScratchTri2.Tri2d.V + -1) + (longlong)iVar13 * 4) == -1) {
    uVar19 = uVar19 ^ uVar15;
    uVar20 = uVar20 ^ uVar7;
    uVar17 = uVar17 ^ uVar15;
    uVar18 = uVar18 ^ uVar7;
    local_1e0._s_0.X = (double)CONCAT44(uVar20,uVar19);
    local_1e0._s_0.Y = (double)CONCAT44(uVar18,uVar17);
  }
  local_158 = FGenericPlatformMath::Atan2
                        ((double)CONCAT44(uVar18,uVar17),(double)CONCAT44(uVar20,uVar19));
  for (local_158 = local_158 + __real_400921fb54442d18; local_158 < 0.0;
      local_158 = local_158 + __real_401921fb54442d18) {
  }
  for (; __real_401921fb54442d18 < local_158; local_158 = local_158 + __real_c01921fb54442d18) {
  }
  local_180._4_4_ = uStack_1bc;
  local_180.PositionType = local_1c0;
  local_180.Position._0_8_ = CONCAT44(uStack_1b4,uStack_1b8);
  local_180.Position.EdgePosition.Alpha = dVar9;
  local_180.Position._16_8_ = dVar10;
  local_180.Position._24_8_ = uVar5;
  IntrinsicCorrespondenceUtils::AsR3Position
            ((TVector<double> *)&local_198._s_0,&local_180,
             (FDynamicMesh3 *)(this->SignpostData)._padding_,local_1e8);
  uVar16 = (ulonglong)(param_1 & 0x1ff);
  lVar12 = *(longlong *)(this->_padding_ + (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar3 = (double *)(lVar12 + uVar16 * 0x18);
  *pdVar3 = local_198._s_0.X;
  pdVar3[1] = local_198._s_0.Y;
  *(double *)(lVar12 + 0x10 + uVar16 * 0x18) = local_198._s_0.Z;
  uVar7 = (this->SignpostData).IntrinsicVertexPositions.CurBlock;
  uVar15 = (this->SignpostData).IntrinsicVertexPositions.CurBlockUsed;
  uVar17 = uVar7 * 0x200 + uVar15;
  if (param_1 == uVar17) {
    if (uVar15 == 0x200) {
      if (uVar7 == (this->SignpostData).IntrinsicVertexPositions.Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::
        AddAllocatedBlock(&(this->SignpostData).IntrinsicVertexPositions);
      }
      pTVar1 = &(this->SignpostData).IntrinsicVertexPositions;
      pTVar1->CurBlock = pTVar1->CurBlock + 1;
      uVar15 = 0;
      uVar7 = (this->SignpostData).IntrinsicVertexPositions.CurBlock;
      (this->SignpostData).IntrinsicVertexPositions.CurBlockUsed = 0;
    }
  }
  else {
    if ((uint)param_1 <= uVar17) {
      lVar12 = *(longlong *)
                ((this->SignpostData).IntrinsicVertexPositions.Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_1 >> 9) * 8);
      puVar4 = (undefined8 *)(lVar12 + uVar16 * 0x28);
      *puVar4 = local_180._0_8_;
      puVar4[1] = local_180.Position._0_8_;
      pdVar3 = (double *)(lVar12 + 0x10 + uVar16 * 0x28);
      *pdVar3 = local_180.Position.EdgePosition.Alpha;
      pdVar3[1] = (double)local_180.Position._16_8_;
      *(undefined8 *)(lVar12 + 0x20 + uVar16 * 0x28) = local_180.Position._24_8_;
      goto LAB_14c77bf37;
    }
    TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::Resize
              (&(this->SignpostData).IntrinsicVertexPositions,param_1);
    uVar15 = (this->SignpostData).IntrinsicVertexPositions.CurBlockUsed;
    if (uVar15 == 0x200) {
      if ((this->SignpostData).IntrinsicVertexPositions.CurBlock ==
          (this->SignpostData).IntrinsicVertexPositions.Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,512>::
        AddAllocatedBlock(&(this->SignpostData).IntrinsicVertexPositions);
      }
      pTVar1 = &(this->SignpostData).IntrinsicVertexPositions;
      pTVar1->CurBlock = pTVar1->CurBlock + 1;
      (this->SignpostData).IntrinsicVertexPositions.CurBlockUsed = 0;
      uVar15 = 0;
    }
    uVar7 = (this->SignpostData).IntrinsicVertexPositions.CurBlock;
  }
  lVar14 = (longlong)(int)uVar15;
  lVar12 = *(longlong *)
            ((this->SignpostData).IntrinsicVertexPositions.Blocks.AllocatorInstance.Data +
            (longlong)(int)uVar7 * 8);
  puVar4 = (undefined8 *)(lVar12 + lVar14 * 0x28);
  *puVar4 = local_180._0_8_;
  puVar4[1] = local_180.Position._0_8_;
  pdVar3 = (double *)(lVar12 + 0x10 + lVar14 * 0x28);
  *pdVar3 = local_180.Position.EdgePosition.Alpha;
  pdVar3[1] = (double)local_180.Position._16_8_;
  *(undefined8 *)(lVar12 + 0x20 + lVar14 * 0x28) = local_180.Position._24_8_;
  puVar2 = &(this->SignpostData).IntrinsicVertexPositions.CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_14c77bf37:
  if (local_148.SurfaceTrace.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.SurfaceTrace.AllocatorInstance.Data);
  }
  return local_158;
}

