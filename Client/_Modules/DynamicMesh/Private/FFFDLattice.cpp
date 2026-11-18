// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 22

// FFFDLattice @ 14c6de850

FFFDLattice * __thiscall
UE::Geometry::FFFDLattice::FFFDLattice
          (FFFDLattice *this,FVector3i *param_1,FDynamicMesh3 *param_2,float param_3)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  FFFDLattice *pFVar13;
  TAxisAlignedBox3<double> *pTVar14;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  TAxisAlignedBox3<double> local_48;
  
  uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->Transform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->Transform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Transform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Transform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->Transform).Translation.field0_0x0._s_0.X = (double)uVar5;
  (this->Transform).Translation.field0_0x0._s_0.Y = (double)uVar6;
  (this->Transform).Scale3D.field0_0x0._s_0.X = (double)uVar9;
  (this->Transform).Scale3D.field0_0x0._s_0.Y = (double)uVar10;
  (this->Transform).Translation.field0_0x0._s_0.Z = dVar3;
  (this->Transform).Scale3D.field0_0x0._s_0.Z = (double)uVar11;
  *(undefined8 *)&(this->Dimensions).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Dimensions).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  (this->InitialBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->InitialBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->InitialBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->InitialBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->InitialBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->InitialBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->VertexEmbeddings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexEmbeddings).ArrayNum = 0;
  (this->VertexEmbeddings).ArrayMax = 0;
  if ((((param_1->field0_0x0)._s_0.X < 2) || ((param_1->field0_0x0)._s_0.Y < 2)) ||
     ((param_1->field0_0x0)._s_0.Z < 2)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InDims.X > 1 && InDims.Y > 1 && InDims.Z > 1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                        ,0x41,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FFFDLattice *)(*pcVar4)();
      return pFVar13;
    }
  }
  pTVar14 = FDynamicMesh3::GetBounds(param_2,&local_48,false);
  dVar3 = (pTVar14->Min).field0_0x0._s_0.Y;
  (this->InitialBounds).Min.field0_0x0._s_0.X = (pTVar14->Min).field0_0x0._s_0.X;
  (this->InitialBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (pTVar14->Max).field0_0x0._s_0.X;
  (this->InitialBounds).Min.field0_0x0._s_0.Z = (pTVar14->Min).field0_0x0._s_0.Z;
  (this->InitialBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (pTVar14->Max).field0_0x0._s_0.Z;
  (this->InitialBounds).Max.field0_0x0._s_0.Y = (pTVar14->Max).field0_0x0._s_0.Y;
  (this->InitialBounds).Max.field0_0x0._s_0.Z = dVar3;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar3 = (this->InitialBounds).Min.field0_0x0._s_0.X;
  pTVar1 = &(this->InitialBounds).Max;
  if ((((pTVar1->field0_0x0)._s_0.X <= dVar3 && dVar3 != (pTVar1->field0_0x0)._s_0.X) ||
      (dVar3 = (this->InitialBounds).Min.field0_0x0._s_0.Y,
      pdVar2 = &(this->InitialBounds).Max.field0_0x0._s_0.Y, *pdVar2 <= dVar3 && dVar3 != *pdVar2))
     || (dVar3 = (this->InitialBounds).Min.field0_0x0._s_0.Z,
        pdVar2 = &(this->InitialBounds).Max.field0_0x0._s_0.Z, *pdVar2 <= dVar3 && dVar3 != *pdVar2)
     ) {
    local_90 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    uStack_8c = (undefined4)
                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    (this->InitialBounds).Min.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->InitialBounds).Min.field0_0x0._s_0.Y = (double)uVar5;
    uStack_88 = (undefined4)uVar5;
    uStack_84 = (undefined4)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)((longlong)&(this->InitialBounds).Min.field0_0x0 + 0x10) = uVar7;
    *(undefined4 *)((longlong)&(this->InitialBounds).Min.field0_0x0 + 0x14) = uVar8;
    *(undefined4 *)&(this->InitialBounds).Max.field0_0x0 = local_90;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 4) = uStack_8c;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 8) = uStack_88;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 0xc) = uStack_84;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 0x10) = uVar7;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 0x14) = uVar8;
  }
  InitLattice(this,param_3);
  ComputeInitialEmbedding(this,param_2,(FLatticeExecutionInfo)0x186a000000001);
  return this;
}

// FFFDLattice @ 14c6dea40

FFFDLattice * __thiscall
UE::Geometry::FFFDLattice::FFFDLattice
          (FFFDLattice *this,FVector3i *param_1,FDynamicMesh3 *param_2,float param_3,
          TAxisAlignedBox3<double> *param_4,TTransformSRT3<double> *param_5)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  double dVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FFFDLattice *pFVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  dVar3 = (param_5->Rotation).field0_0x0._s_0.Y;
  (this->Transform).Rotation.field0_0x0._s_0.X = (param_5->Rotation).field0_0x0._s_0.X;
  (this->Transform).Rotation.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_5->Rotation).field0_0x0._s_0.W;
  (this->Transform).Rotation.field0_0x0._s_0.Z = (param_5->Rotation).field0_0x0._s_0.Z;
  (this->Transform).Rotation.field0_0x0._s_0.W = dVar3;
  dVar3 = (param_5->Translation).field0_0x0._s_0.Y;
  (this->Transform).Translation.field0_0x0._s_0.X = (param_5->Translation).field0_0x0._s_0.X;
  (this->Transform).Translation.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_5->Scale3D).field0_0x0._s_0.X;
  (this->Transform).Translation.field0_0x0._s_0.Z = (param_5->Translation).field0_0x0._s_0.Z;
  (this->Transform).Scale3D.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_5->Scale3D).field0_0x0._s_0.Z;
  (this->Transform).Scale3D.field0_0x0._s_0.Y = (param_5->Scale3D).field0_0x0._s_0.Y;
  (this->Transform).Scale3D.field0_0x0._s_0.Z = dVar3;
  *(undefined8 *)&(this->Dimensions).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Dimensions).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_4->Min).field0_0x0._s_0.Y;
  (this->InitialBounds).Min.field0_0x0._s_0.X = (param_4->Min).field0_0x0._s_0.X;
  (this->InitialBounds).Min.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_4->Max).field0_0x0._s_0.X;
  (this->InitialBounds).Min.field0_0x0._s_0.Z = (param_4->Min).field0_0x0._s_0.Z;
  (this->InitialBounds).Max.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_4->Max).field0_0x0._s_0.Z;
  (this->InitialBounds).Max.field0_0x0._s_0.Y = (param_4->Max).field0_0x0._s_0.Y;
  (this->InitialBounds).Max.field0_0x0._s_0.Z = dVar3;
  (this->VertexEmbeddings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexEmbeddings).ArrayNum = 0;
  (this->VertexEmbeddings).ArrayMax = 0;
  if ((((param_1->field0_0x0)._s_0.X < 2) || ((param_1->field0_0x0)._s_0.Y < 2)) ||
     ((param_1->field0_0x0)._s_0.Z < 2)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDims.X > 1 && InDims.Y > 1 && InDims.Z > 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                       ,0x53,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FFFDLattice *)(*pcVar4)();
      return pFVar9;
    }
  }
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar3 = (this->InitialBounds).Min.field0_0x0._s_0.X;
  pTVar1 = &(this->InitialBounds).Max;
  if ((((pTVar1->field0_0x0)._s_0.X <= dVar3 && dVar3 != (pTVar1->field0_0x0)._s_0.X) ||
      (dVar3 = (this->InitialBounds).Min.field0_0x0._s_0.Y,
      pdVar2 = &(this->InitialBounds).Max.field0_0x0._s_0.Y, *pdVar2 <= dVar3 && dVar3 != *pdVar2))
     || (dVar3 = (this->InitialBounds).Min.field0_0x0._s_0.Z,
        pdVar2 = &(this->InitialBounds).Max.field0_0x0._s_0.Z, *pdVar2 <= dVar3 && dVar3 != *pdVar2)
     ) {
    local_30 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    uStack_2c = (undefined4)
                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    (this->InitialBounds).Min.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->InitialBounds).Min.field0_0x0._s_0.Y = (double)uVar5;
    uStack_28 = (undefined4)uVar5;
    uStack_24 = (undefined4)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)((longlong)&(this->InitialBounds).Min.field0_0x0 + 0x10) = uVar6;
    *(undefined4 *)((longlong)&(this->InitialBounds).Min.field0_0x0 + 0x14) = uVar7;
    *(undefined4 *)&(this->InitialBounds).Max.field0_0x0 = local_30;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 4) = uStack_2c;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 8) = uStack_28;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 0xc) = uStack_24;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 0x10) = uVar6;
    *(undefined4 *)((longlong)&(this->InitialBounds).Max.field0_0x0 + 0x14) = uVar7;
  }
  InitLattice(this,param_3);
  if (param_2 != (FDynamicMesh3 *)0x0) {
    ComputeInitialEmbedding(this,param_2,(FLatticeExecutionInfo)0x186a000000001);
  }
  return this;
}

// operator() @ 14c6e7d00

void __thiscall
`UE::Geometry::FFFDLattice::ComputeInitialEmbedding'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  TTransformSRT3<double> *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  double dVar16;
  TVector<double>_u_0 local_58;
  double local_30;
  TVector<double>_u_0 local_28;
  
  lVar2 = *(longlong *)this;
  lVar14 = (longlong)param_1;
  uVar9 = 0;
  if (param_1 < *(int *)(lVar2 + 0xb0)) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar2 + lVar14 * 0x28) = 0xffffffffffffffff;
  *(undefined4 *)(lVar2 + 8 + lVar14 * 0x28) = 0xffffffff;
  lVar3 = *(longlong *)((longlong)this + 8);
  if ((-1 < param_1) && (param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar13 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           uVar13 * 2) - 1U) < 0xfffe) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
      this_00 = *(TTransformSRT3<double> **)this;
      pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
      local_28._s_0.X = *pdVar1;
      local_28._s_0.Y = pdVar1[1];
      local_28._s_0.Z = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
      UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                (this_00,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_28._s_0);
      pdVar1 = *(double **)((longlong)this + 0x10);
      if ((((*pdVar1 <= local_58._s_0.X) && (pdVar1[1] <= local_58._s_0.Y)) &&
          (pdVar1[2] <= local_58._s_0.Z)) &&
         (((local_58._s_0.X < pdVar1[3] || local_58._s_0.X == pdVar1[3] &&
           (local_58._s_0.Y < pdVar1[4] || local_58._s_0.Y == pdVar1[4])) &&
          (local_58._s_0.Z < pdVar1[5] || local_58._s_0.Z == pdVar1[5])))) {
        dVar6 = (local_58._s_0.X - this_00[1].Rotation.field0_0x0._s_0.Z) /
                this_00[1].Scale3D.field0_0x0._s_0.Y;
        local_30 = (local_58._s_0.Z - this_00[1].Translation.field0_0x0._s_0.X) /
                   this_00[2].Rotation.field0_0x0._s_0.X;
        dVar16 = (local_58._s_0.Y - this_00[1].Rotation.field0_0x0._s_0.W) /
                 this_00[1].Scale3D.field0_0x0._s_0.Z;
        iVar15 = (int)dVar6;
        iVar11 = (int)local_30;
        *(int *)(lVar2 + lVar14 * 0x28) = iVar15;
        iVar12 = (int)dVar16;
        dVar6 = dVar6 - (double)iVar15;
        *(int *)(lVar2 + 4 + lVar14 * 0x28) = iVar12;
        *(int *)(lVar2 + 8 + lVar14 * 0x28) = iVar11;
        local_30 = local_30 - (double)iVar11;
        dVar16 = dVar16 - (double)iVar12;
        if (iVar15 < 0) {
          *(undefined4 *)(lVar2 + lVar14 * 0x28) = 0;
          dVar6 = 0.0;
          iVar15 = 0;
        }
        dVar7 = __real_3ff0000000000000;
        iVar10 = *(int *)&this_00[1].Rotation.field0_0x0 + -2;
        if (iVar10 < iVar15) {
          *(int *)(lVar2 + lVar14 * 0x28) = iVar10;
          dVar6 = dVar7;
        }
        if (iVar12 < 0) {
          *(undefined4 *)(lVar2 + 4 + lVar14 * 0x28) = 0;
          dVar16 = 0.0;
          iVar12 = 0;
        }
        iVar15 = *(int *)((longlong)&this_00[1].Rotation.field0_0x0 + 4) + -2;
        if (iVar15 < iVar12) {
          *(int *)(lVar2 + 4 + lVar14 * 0x28) = iVar15;
          dVar16 = dVar7;
        }
        if (iVar11 < 0) {
          local_30 = 0.0;
          iVar11 = 0;
          *(undefined4 *)(lVar2 + 8 + lVar14 * 0x28) = 0;
        }
        iVar12 = *(int *)((longlong)&this_00[1].Rotation.field0_0x0 + 8) + -2;
        if (iVar12 < iVar11) {
          local_30 = dVar7;
          *(int *)(lVar2 + 8 + lVar14 * 0x28) = iVar12;
        }
        auVar5._8_4_ = SUB84(dVar16,0);
        auVar5._0_8_ = dVar6;
        auVar5._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(lVar2 + 0x10 + lVar14 * 0x28) = auVar5;
        *(double *)(lVar2 + 0x20 + lVar14 * 0x28) = local_30;
      }
    }
  }
  return;
}

// operator() @ 14c6e8f40

void __thiscall
`UE::Geometry::FFFDLattice::GetDeformedMeshVertexPositions'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  FFFDLattice *this_00;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  TVector<double> local_58;
  TVector<double> local_40;
  
  lVar17 = (longlong)param_1;
  if (((param_1 % *(int *)((longlong)this + 0x24) == 0) &&
      (*(FProgressCancel **)((longlong)this + 0x30) != (FProgressCancel *)0x0)) &&
     (bVar13 = FProgressCancel::Cancelled(*(FProgressCancel **)((longlong)this + 0x30)), bVar13)) {
    **(undefined1 **)((longlong)this + 0x18) = 1;
  }
  if (**(char **)((longlong)this + 0x18) == '\0') {
    uVar16 = (uint)~param_1 >> 0x1f;
    lVar5 = *(longlong *)this;
    uVar14 = 0;
    if (param_1 < *(int *)(lVar5 + 0xb0)) {
      uVar14 = uVar16;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar2 = lVar17 * 0x28;
    if (-1 < *(int *)(lVar2 + *(longlong *)(lVar5 + 0xa8))) {
      this_00 = *(FFFDLattice **)this;
      pTVar6 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x10);
      iVar4 = (this_00->VertexEmbeddings).ArrayNum;
      if (*(char *)((longlong)this + 0x2c) == '\x01') {
        uVar14 = 0;
        if (param_1 < iVar4) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar15 = UE::Geometry::FFFDLattice::InterpolatedPositionCubic
                            (this_00,&local_58,
                             (FEmbedding *)
                             ((this_00->VertexEmbeddings).AllocatorInstance.Data + lVar2),pTVar6);
      }
      else {
        uVar14 = 0;
        if (param_1 < iVar4) {
          uVar14 = uVar16;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar15 = UE::Geometry::FFFDLattice::InterpolatedPosition
                            (this_00,&local_40,
                             (FEmbedding *)
                             ((this_00->VertexEmbeddings).AllocatorInstance.Data + lVar2),pTVar6);
      }
      uVar9 = *(undefined4 *)&pTVar15->field0_0x0;
      uVar10 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 4);
      uVar11 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 8);
      uVar12 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 0xc);
      plVar7 = *(longlong **)((longlong)this + 8);
      dVar3 = (pTVar15->field0_0x0)._s_0.Z;
      uVar14 = 0;
      if (param_1 < (int)plVar7[1]) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *plVar7;
      puVar1 = (undefined4 *)(lVar5 + lVar17 * 0x18);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      *(double *)(lVar5 + 0x10 + lVar17 * 0x18) = dVar3;
    }
  }
  return;
}

// operator() @ 14c6e9580

void __thiscall
`UE::Geometry::FFFDLattice::GetRotatedMeshVertexNormals'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  FFFDLattice *this_00;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TMatrix3<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  TMatrix3<double> local_148;
  TMatrix3<double> local_100 [3];
  
  lVar13 = (longlong)param_1;
  if (((param_1 % *(int *)((longlong)this + 0x2c) == 0) &&
      (*(FProgressCancel **)((longlong)this + 0x38) != (FProgressCancel *)0x0)) &&
     (bVar9 = FProgressCancel::Cancelled(*(FProgressCancel **)((longlong)this + 0x38)), bVar9)) {
    **(undefined1 **)((longlong)this + 0x20) = 1;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    lVar5 = *(longlong *)this;
    uVar12 = (uint)~param_1 >> 0x1f;
    uVar10 = 0;
    if (param_1 < *(int *)(lVar5 + 0xb0)) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (-1 < *(int *)(*(longlong *)(lVar5 + 0xa8) + lVar13 * 0x28)) {
      this_00 = *(FFFDLattice **)this;
      pTVar6 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x18);
      iVar4 = (this_00->VertexEmbeddings).ArrayNum;
      if (*(char *)((longlong)this + 0x34) == '\0') {
        uVar10 = 0;
        if (param_1 < iVar4) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar11 = UE::Geometry::FFFDLattice::LinearInterpolationJacobian
                            (this_00,&local_148,
                             (FEmbedding *)
                             ((this_00->VertexEmbeddings).AllocatorInstance.Data + lVar13 * 0x28),
                             pTVar6);
      }
      else {
        uVar10 = 0;
        if (param_1 < iVar4) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar11 = UE::Geometry::FFFDLattice::CubicInterpolationJacobian
                            (this_00,local_100,
                             (FEmbedding *)
                             ((this_00->VertexEmbeddings).AllocatorInstance.Data + lVar13 * 0x28),
                             pTVar6);
      }
      local_198._s_0.X = (pTVar11->Row0).field0_0x0._s_0.X;
      local_198._s_0.Y = (pTVar11->Row0).field0_0x0._s_0.Y;
      local_198._s_0.Z = (pTVar11->Row0).field0_0x0._s_0.Z;
      dStack_180 = (pTVar11->Row1).field0_0x0._s_0.X;
      local_178 = (pTVar11->Row1).field0_0x0._s_0.Y;
      dStack_170 = (pTVar11->Row1).field0_0x0._s_0.Z;
      local_168 = (pTVar11->Row2).field0_0x0._s_0.X;
      dStack_160 = (pTVar11->Row2).field0_0x0._s_0.Y;
      local_158 = (pTVar11->Row2).field0_0x0._s_0.Z;
      UE::Geometry::TMatrix3<double>::DeterminantTimesInverseTranspose
                ((TMatrix3<double> *)&local_198._s_0,(TMatrix3<double> *)&local_1e8._s_0);
      plVar7 = *(longlong **)((longlong)this + 0x10);
      uVar10 = 0;
      if (param_1 < (int)plVar7[1]) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *plVar7;
      plVar7 = *(longlong **)((longlong)this + 8);
      fVar1 = *(float *)(lVar5 + lVar13 * 0xc);
      fVar2 = *(float *)(lVar5 + 4 + lVar13 * 0xc);
      fVar3 = *(float *)(lVar5 + 8 + lVar13 * 0xc);
      uVar10 = 0;
      if (param_1 < (int)plVar7[1]) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *plVar7;
      *(float *)(lVar5 + lVar13 * 0xc) =
           (float)local_1e8._s_0.Y * fVar2 + (float)local_1e8._s_0.X * fVar1 +
           (float)local_1e8._s_0.Z * fVar3;
      *(float *)(lVar5 + 4 + lVar13 * 0xc) =
           (float)local_1c8 * fVar2 + (float)local_1d0 * fVar1 + (float)local_1c0 * fVar3;
      *(float *)(lVar5 + 8 + lVar13 * 0xc) =
           (float)local_1b0 * fVar2 + (float)local_1b8 * fVar1 + (float)local_1a8 * fVar3;
      plVar7 = *(longlong **)((longlong)this + 8);
      uVar10 = 0;
      if (param_1 < (int)plVar7[1]) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      UE::Geometry::Normalize<float>((TVector<float> *)(*plVar7 + lVar13 * 0xc),0.0);
    }
  }
  return;
}

// operator() @ 14c6e9a10

void __thiscall
`UE::Geometry::FFFDLattice::GetRotatedOverlayNormals'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  FFFDLattice *this_00;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TMatrix3<double> *pTVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  TVector<double>_u_0 local_188;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  TMatrix3<double> local_e8;
  TMatrix3<double> local_a0;
  
  if (((param_1 % *(int *)((longlong)this + 0x2c) == 0) &&
      (*(FProgressCancel **)((longlong)this + 0x38) != (FProgressCancel *)0x0)) &&
     (bVar9 = FProgressCancel::Cancelled(*(FProgressCancel **)((longlong)this + 0x38)), bVar9)) {
    **(undefined1 **)((longlong)this + 0x20) = 1;
  }
  lVar15 = (longlong)param_1;
  uVar11 = *(uint *)(*(longlong *)
                      (*(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x60) +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar13 = (longlong)(int)uVar11;
  if (**(char **)((longlong)this + 0x20) == '\0') {
    lVar5 = *(longlong *)this;
    uVar14 = ~uVar11 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar11 < *(int *)(lVar5 + 0xb0)) {
      uVar10 = uVar14;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (-1 < *(int *)(*(longlong *)(lVar5 + 0xa8) + lVar13 * 0x28)) {
      pTVar6 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x18);
      this_00 = *(FFFDLattice **)this;
      iVar4 = (this_00->VertexEmbeddings).ArrayNum;
      if (*(char *)((longlong)this + 0x30) == '\0') {
        uVar10 = 0;
        if ((int)uVar11 < iVar4) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar12 = UE::Geometry::FFFDLattice::LinearInterpolationJacobian
                            (this_00,&local_e8,
                             (FEmbedding *)
                             ((this_00->VertexEmbeddings).AllocatorInstance.Data + lVar13 * 0x28),
                             pTVar6);
      }
      else {
        uVar10 = 0;
        if ((int)uVar11 < iVar4) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar12 = UE::Geometry::FFFDLattice::CubicInterpolationJacobian
                            (this_00,&local_a0,
                             (FEmbedding *)
                             ((this_00->VertexEmbeddings).AllocatorInstance.Data + lVar13 * 0x28),
                             pTVar6);
      }
      local_138._s_0.X = (pTVar12->Row0).field0_0x0._s_0.X;
      local_138._s_0.Y = (pTVar12->Row0).field0_0x0._s_0.Y;
      local_138._s_0.Z = (pTVar12->Row0).field0_0x0._s_0.Z;
      dStack_120 = (pTVar12->Row1).field0_0x0._s_0.X;
      local_118 = (pTVar12->Row1).field0_0x0._s_0.Y;
      dStack_110 = (pTVar12->Row1).field0_0x0._s_0.Z;
      local_108 = (pTVar12->Row2).field0_0x0._s_0.X;
      dStack_100 = (pTVar12->Row2).field0_0x0._s_0.Y;
      local_f8 = (pTVar12->Row2).field0_0x0._s_0.Z;
      UE::Geometry::TMatrix3<double>::DeterminantTimesInverseTranspose
                ((TMatrix3<double> *)&local_138._s_0,(TMatrix3<double> *)&local_188._s_0);
      uVar11 = param_1 * 3;
      plVar7 = *(longlong **)((longlong)this + 8);
      lVar13 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x48);
      fVar1 = *(float *)(*(longlong *)(lVar13 + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4);
      fVar2 = *(float *)(*(longlong *)(lVar13 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                        (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      fVar3 = *(float *)(*(longlong *)(lVar13 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                        (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      uVar11 = 0;
      if (param_1 < (int)plVar7[1]) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar13 = *plVar7;
      *(float *)(lVar13 + lVar15 * 0xc) =
           (float)local_188._s_0.Y * fVar2 + (float)local_188._s_0.X * fVar1 +
           (float)local_188._s_0.Z * fVar3;
      *(float *)(lVar13 + 4 + lVar15 * 0xc) =
           (float)local_170 * fVar1 + (float)local_168 * fVar2 + (float)local_160 * fVar3;
      *(float *)(lVar13 + 8 + lVar15 * 0xc) =
           (float)local_158 * fVar1 + (float)local_150 * fVar2 + (float)local_148 * fVar3;
      plVar7 = *(longlong **)((longlong)this + 8);
      uVar11 = 0;
      if (param_1 < (int)plVar7[1]) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      UE::Geometry::Normalize<float>((TVector<float> *)(*plVar7 + lVar15 * 0xc),0.0);
    }
  }
  return;
}

// ClosestLatticePosition @ 14c71cd50

TVector<double> * __thiscall
UE::Geometry::FFFDLattice::ClosestLatticePosition
          (FFFDLattice *this,TVector<double> *__return_storage_ptr__,FVector3i *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar3 = (this->Dimensions).field0_0x0._s_0.Y;
  iVar4 = (this->Dimensions).field0_0x0._s_0.Z;
  iVar15 = (this->Dimensions).field0_0x0._s_0.X + -1;
  iVar14 = iVar3 + -1;
  iVar13 = iVar4 + -1;
  if ((param_1->field0_0x0)._s_0.X <= iVar15) {
    iVar15 = (param_1->field0_0x0)._s_0.X;
  }
  if ((param_1->field0_0x0)._s_0.Y <= iVar14) {
    iVar14 = (param_1->field0_0x0)._s_0.Y;
  }
  if ((param_1->field0_0x0)._s_0.Z <= iVar13) {
    iVar13 = (param_1->field0_0x0)._s_0.Z;
  }
  iVar10 = 0;
  if (-1 < iVar15) {
    iVar10 = iVar15;
  }
  iVar15 = 0;
  if (-1 < iVar14) {
    iVar15 = iVar14;
  }
  iVar14 = 0;
  if (-1 < iVar13) {
    iVar14 = iVar13;
  }
  uVar12 = (iVar3 * iVar10 + iVar15) * iVar4 + iVar14;
  uVar11 = 0;
  if ((int)uVar12 < param_2->ArrayNum) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar5 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)(int)uVar12 * 0x18;
  dVar7 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar5 + (longlong)(int)uVar12 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// ComputeInitialEmbedding @ 14c7223d0

void __thiscall
UE::Geometry::FFFDLattice::ComputeInitialEmbedding
          (FFFDLattice *this,FDynamicMesh3 *param_1,FLatticeExecutionInfo param_2)

{
  int *piVar1;
  TArray<UE::Geometry::FFFDLattice::FEmbedding,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  FFFDLattice **local_80;
  FFFDLattice *local_78;
  FDynamicMesh3 *local_70;
  double *local_68;
  uint local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  pTVar2 = &this->VertexEmbeddings;
  piVar1 = &(this->VertexEmbeddings).ArrayNum;
  iVar6 = *piVar1;
  uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if (iVar6 < (int)uVar7) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,uVar7 - iVar6,&pTVar2->AllocatorInstance,piVar1,
                       &(this->VertexEmbeddings).ArrayMax);
    DefaultConstructItems<UE::Geometry::FFFDLattice::FEmbedding,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28,uVar7 - iVar6);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar6) {
      uVar8 = iVar6 - uVar7;
      if ((int)(uVar8 | uVar7) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar8 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x28;
        iVar6 = (*piVar1 - uVar8) - uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x28,(longlong)iVar6 * 0x28);
        }
        *piVar1 = *piVar1 - uVar8;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&pTVar2->AllocatorInstance,*piVar1,&(this->VertexEmbeddings).ArrayMax);
      }
    }
  }
  local_68 = &local_58;
  local_98.DataPtr = (void **)0x0;
  local_88 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FFFDLattice::ComputeInitialEmbedding'::__l2::<lambda_1>,void,int>
             ::Call;
  local_80 = &local_78;
  dStack_40 = (this->InitialBounds).Max.field0_0x0._s_0.X + __real_3f1a36e2e0000000;
  local_98.ArrayNum = 0;
  local_38 = (this->InitialBounds).Max.field0_0x0._s_0.Y + __real_3f1a36e2e0000000;
  dStack_30 = (this->InitialBounds).Max.field0_0x0._s_0.Z + __real_3f1a36e2e0000000;
  local_58 = (this->InitialBounds).Min.field0_0x0._s_0.X + __real_bf1a36e2e0000000;
  local_48 = (this->InitialBounds).Min.field0_0x0._s_0.Z + __real_bf1a36e2e0000000;
  dStack_50 = (this->InitialBounds).Min.field0_0x0._s_0.Y + __real_bf1a36e2e0000000;
  local_78 = this;
  local_70 = param_1;
  local_60 = uVar7;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar7,1,(TFunctionRef<void___cdecl(int)> *)&local_88,local_res8,
             (uint)(param_2.bParallel == false),&local_98);
  return;
}

// ComputeTrilinearWeights @ 14c724d50

TVector<double> * __thiscall
UE::Geometry::FFFDLattice::ComputeTrilinearWeights
          (FFFDLattice *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          FVector3i *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = ((param_1->field0_0x0)._s_0.X - (this->InitialBounds).Min.field0_0x0._s_0.X) /
          (this->CellSize).field0_0x0._s_0.X;
  dVar6 = ((param_1->field0_0x0)._s_0.Z - (this->InitialBounds).Min.field0_0x0._s_0.Z) /
          (this->CellSize).field0_0x0._s_0.Z;
  dVar5 = ((param_1->field0_0x0)._s_0.Y - (this->InitialBounds).Min.field0_0x0._s_0.Y) /
          (this->CellSize).field0_0x0._s_0.Y;
  iVar1 = (int)dVar4;
  iVar2 = (int)dVar5;
  (param_2->field0_0x0)._s_0.X = iVar1;
  iVar3 = (int)dVar6;
  (param_2->field0_0x0)._s_0.Y = iVar2;
  (param_2->field0_0x0)._s_0.Z = iVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4 - (double)iVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 - (double)iVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 - (double)iVar3;
  if ((param_2->field0_0x0)._s_0.X < 0) {
    (param_2->field0_0x0)._s_0.X = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  }
  iVar1 = (this->Dimensions).field0_0x0._s_0.X + -2;
  if (iVar1 < (param_2->field0_0x0)._s_0.X) {
    (param_2->field0_0x0)._s_0.X = iVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  }
  if ((param_2->field0_0x0)._s_0.Y < 0) {
    (param_2->field0_0x0)._s_0.Y = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  iVar1 = (this->Dimensions).field0_0x0._s_0.Y + -2;
  if (iVar1 < (param_2->field0_0x0)._s_0.Y) {
    (param_2->field0_0x0)._s_0.Y = iVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  }
  if ((param_2->field0_0x0)._s_0.Z < 0) {
    (param_2->field0_0x0)._s_0.Z = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  iVar1 = (this->Dimensions).field0_0x0._s_0.Z + -2;
  if (iVar1 < (param_2->field0_0x0)._s_0.Z) {
    (param_2->field0_0x0)._s_0.Z = iVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  }
  return __return_storage_ptr__;
}

// CubicInterpolationJacobian @ 14c729740

TMatrix3<double> * __thiscall
UE::Geometry::FFFDLattice::CubicInterpolationJacobian
          (FFFDLattice *this,TMatrix3<double> *__return_storage_ptr__,FEmbedding *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  bool bVar16;
  TMatrix3<double> *pTVar17;
  TVector<double> *pTVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar33;
  double dVar32;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  FVector3i_u_0 local_130 [2];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  TVector<double> local_f0 [7];
  double dVar31;
  
  dVar2 = (param_1->CellWeighting).field0_0x0._s_0.Z;
  dVar3 = (param_1->CellWeighting).field0_0x0._s_0.X;
  dVar4 = (param_1->CellWeighting).field0_0x0._s_0.Y;
  iVar24 = -1;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z = 0.0;
  dVar15 = __real_4000000000000000;
  uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar26 = __real_3fe0000000000000;
  dVar36 = (__return_storage_ptr__->Row0).field0_0x0._s_0.Z;
  uVar38 = (undefined4)__real_3fe5555555555555;
  uVar39 = (undefined4)((ulonglong)__real_3fe5555555555555 >> 0x20);
  uVar40 = (undefined4)__real_3ff8000000000000;
  uVar41 = (undefined4)((ulonglong)__real_3ff8000000000000 >> 0x20);
  uVar42 = (undefined4)__real_3fc5555555555555;
  uVar43 = (undefined4)((ulonglong)__real_3fc5555555555555 >> 0x20);
  uVar44 = SUB84(__real_bfe0000000000000,0);
  uVar45 = (undefined4)((ulonglong)__real_bfe0000000000000 >> 0x20);
  dVar25 = (__return_storage_ptr__->Row0).field0_0x0._s_0.X;
  dVar31 = (__return_storage_ptr__->Row0).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.X = dVar25;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = dVar31;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.X = dVar25;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = dVar31;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = dVar36;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = dVar36;
  uVar27 = (undefined4)__real_3ff0000000000000;
  uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  do {
    local_118 = dVar3 - (double)iVar24;
    dVar36 = (double)CONCAT44((uint)((ulonglong)local_118 >> 0x20) & uVar33,
                              SUB84(local_118,0) & uVar30);
    uVar29 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    if ((double)CONCAT44(uVar28,uVar27) <= dVar36) {
      if (dVar15 <= dVar36) {
        dVar25 = 0.0;
        local_118 = 0.0;
      }
      else {
        dVar25 = dVar15 - dVar36;
        dVar25 = dVar25 * dVar25 * dVar25 * (double)CONCAT44(uVar43,uVar42);
        local_118 = ((double)CONCAT44(uVar45,uVar44) / dVar36) * (dVar15 - dVar36) *
                    local_118 * (dVar15 - dVar36);
        uVar27 = (int)__real_3ff0000000000000;
        uVar28 = uVar29;
      }
    }
    else {
      dVar25 = dVar36 * dVar36 * dVar26 * dVar36 +
               ((double)CONCAT44(uVar39,uVar38) - dVar36 * dVar36);
      local_118 = (dVar36 * (double)CONCAT44(uVar41,uVar40) - dVar15) * local_118;
      uVar27 = (int)__real_3ff0000000000000;
      uVar28 = uVar29;
    }
    uStack_110 = 0;
    iVar23 = -1;
    do {
      uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar36 = dVar4 - (double)iVar23;
      uVar30 = SUB84(dVar36,0) & uVar30;
      uVar33 = (uint)((ulonglong)dVar36 >> 0x20) & uVar33;
      dVar31 = (double)CONCAT44(uVar33,uVar30);
      uVar29 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      if ((double)CONCAT44(uVar28,uVar27) <= dVar31) {
        if (dVar15 <= dVar31) {
          dVar34 = 0.0;
          dVar36 = 0.0;
        }
        else {
          dVar34 = dVar15 - dVar31;
          dVar34 = dVar34 * dVar34 * dVar34 * (double)CONCAT44(uVar43,uVar42);
          dVar36 = ((double)CONCAT44(uVar45,uVar44) / dVar31) * (dVar15 - dVar31) *
                   dVar36 * (dVar15 - dVar31);
          uVar27 = (int)__real_3ff0000000000000;
          uVar28 = uVar29;
        }
      }
      else {
        dVar34 = (double)CONCAT44(uVar33,uVar30) * dVar31;
        dVar34 = dVar34 * dVar26 * dVar31 + ((double)CONCAT44(uVar39,uVar38) - dVar34);
        dVar36 = (dVar31 * (double)CONCAT44(uVar41,uVar40) - dVar15) * dVar36;
        uVar27 = (int)__real_3ff0000000000000;
        uVar28 = uVar29;
      }
      dVar31 = local_118 * dVar34;
      iVar21 = -1;
      do {
        dVar37 = dVar2 - (double)iVar21;
        uVar30 = SUB84(dVar37,0) & uVar13;
        uVar33 = (uint)((ulonglong)dVar37 >> 0x20) & uVar14;
        dVar32 = (double)CONCAT44(uVar33,uVar30);
        if ((double)CONCAT44(uVar28,uVar27) <= dVar32) {
          if (dVar15 <= dVar32) {
            dVar35 = 0.0;
            dVar37 = 0.0;
          }
          else {
            dVar26 = dVar15 - dVar32;
            dVar35 = dVar26 * dVar26 * dVar26 * (double)CONCAT44(uVar43,uVar42);
            dVar37 = (__real_bfe0000000000000 / dVar32) * (dVar15 - dVar32) *
                     dVar37 * (dVar15 - dVar32);
          }
        }
        else {
          dVar35 = (double)CONCAT44(uVar33,uVar30) * dVar32;
          dVar35 = dVar35 * dVar26 * dVar32 + ((double)CONCAT44(uVar39,uVar38) - dVar35);
          dVar37 = (dVar32 * (double)CONCAT44(uVar41,uVar40) - dVar15) * dVar37;
        }
        iVar19 = (param_1->LatticeCell).field0_0x0._s_0.Y + iVar23;
        iVar20 = (param_1->LatticeCell).field0_0x0._s_0.Z + iVar21;
        iVar22 = (param_1->LatticeCell).field0_0x0._s_0.X + iVar24;
        dVar32 = dVar31 * dVar35;
        dVar35 = dVar25 * dVar36 * dVar35;
        dVar37 = dVar25 * dVar34 * dVar37;
        if ((((iVar22 < 0) || ((this->Dimensions).field0_0x0._s_0.X <= iVar22)) || (iVar19 < 0)) ||
           (((iVar7 = (this->Dimensions).field0_0x0._s_0.Y, iVar7 <= iVar19 || (iVar20 < 0)) ||
            (iVar8 = (this->Dimensions).field0_0x0._s_0.Z, iVar8 <= iVar20)))) {
          local_130[0]._0_4_ = iVar22;
          local_130[0]._4_4_ = iVar19;
          local_130[0]._8_4_ = iVar20;
          pTVar18 = ExtrapolatedLatticePosition
                              (this,local_f0,(FVector3i *)&local_130[0]._s_0,param_2);
          local_108 = (pTVar18->field0_0x0)._s_0.X;
          dStack_100 = (pTVar18->field0_0x0)._s_0.Y;
          uVar5 = *(undefined8 *)((longlong)&pTVar18->field0_0x0 + 0x10);
          uVar27 = (undefined4)uVar5;
          uVar28 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        else {
          uVar33 = (iVar19 + iVar7 * iVar22) * iVar8 + iVar20;
          uVar30 = 0;
          if ((int)uVar33 < param_2->ArrayNum) {
            uVar30 = ~uVar33 >> 0x1f;
          }
          if (uVar30 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              pTVar17 = (TMatrix3<double> *)(*pcVar10)();
              return pTVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar1 = pFVar9 + (longlong)(int)uVar33 * 0x18;
          local_108 = *(double *)pFVar1;
          dStack_100 = *(double *)(pFVar1 + 8);
          uVar5 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar33 * 0x18 + 0x10);
          uVar27 = (undefined4)uVar5;
          uVar28 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        dVar26 = __real_3fe0000000000000;
        iVar21 = iVar21 + 1;
        local_f8 = (double)CONCAT44(uVar28,uVar27);
        (__return_storage_ptr__->Row0).field0_0x0._s_0.X =
             local_108 * dVar32 + (__return_storage_ptr__->Row0).field0_0x0._s_0.X;
        dVar12 = local_108 * dVar37 + (__return_storage_ptr__->Row0).field0_0x0._s_0.Z;
        auVar11._8_4_ = SUB84(dVar12,0);
        auVar11._0_8_ = local_108 * dVar35 + (__return_storage_ptr__->Row0).field0_0x0._s_0.Y;
        auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Row0).field0_0x0 + 8) = auVar11;
        dVar12 = (__return_storage_ptr__->Row1).field0_0x0._s_0.Z;
        dVar6 = (__return_storage_ptr__->Row1).field0_0x0._s_0.Y;
        (__return_storage_ptr__->Row1).field0_0x0._s_0.X =
             dStack_100 * dVar32 + (__return_storage_ptr__->Row1).field0_0x0._s_0.X;
        (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = dStack_100 * dVar37 + dVar12;
        uVar38 = (undefined4)__real_3fe5555555555555;
        uVar39 = (undefined4)((ulonglong)__real_3fe5555555555555 >> 0x20);
        (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = dStack_100 * dVar35 + dVar6;
        uVar40 = (undefined4)__real_3ff8000000000000;
        uVar41 = (undefined4)((ulonglong)__real_3ff8000000000000 >> 0x20);
        uVar42 = (undefined4)__real_3fc5555555555555;
        uVar43 = (undefined4)((ulonglong)__real_3fc5555555555555 >> 0x20);
        dVar12 = (__return_storage_ptr__->Row2).field0_0x0._s_0.X;
        dVar6 = (__return_storage_ptr__->Row2).field0_0x0._s_0.Z;
        (__return_storage_ptr__->Row2).field0_0x0._s_0.Y =
             local_f8 * dVar35 + (__return_storage_ptr__->Row2).field0_0x0._s_0.Y;
        uVar27 = (undefined4)__real_3ff0000000000000;
        uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        (__return_storage_ptr__->Row2).field0_0x0._s_0.X = local_f8 * dVar32 + dVar12;
        (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = local_f8 * dVar37 + dVar6;
      } while (iVar21 < 3);
      iVar23 = iVar23 + 1;
      uVar44 = SUB84(__real_bfe0000000000000,0);
      uVar45 = (undefined4)((ulonglong)__real_bfe0000000000000 >> 0x20);
      uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    } while (iVar23 < 3);
    iVar24 = iVar24 + 1;
  } while (iVar24 < 3);
  return __return_storage_ptr__;
}

// ExtrapolatedLatticePosition @ 14c72f9a0

TVector<double> * __thiscall
UE::Geometry::FFFDLattice::ExtrapolatedLatticePosition
          (FFFDLattice *this,TVector<double> *__return_storage_ptr__,FVector3i *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  int iVar12;
  bool bVar13;
  int iVar14;
  TVector<double> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  iVar19 = (param_1->field0_0x0)._s_0.X;
  iVar23 = (param_1->field0_0x0)._s_0.Y;
  iVar8 = (param_1->field0_0x0)._s_0.Z;
  iVar21 = (this->Dimensions).field0_0x0._s_0.X + -1;
  iVar22 = (this->Dimensions).field0_0x0._s_0.Y + -1;
  iVar14 = (this->Dimensions).field0_0x0._s_0.Z + -1;
  if (iVar19 <= iVar21) {
    iVar21 = iVar19;
  }
  if (iVar23 <= iVar22) {
    iVar22 = iVar23;
  }
  if (iVar8 <= iVar14) {
    iVar14 = iVar8;
  }
  iVar12 = 0;
  if (-1 < iVar21) {
    iVar12 = iVar21;
  }
  iVar21 = 0;
  if (-1 < iVar22) {
    iVar21 = iVar22;
  }
  iVar22 = 0;
  if (-1 < iVar14) {
    iVar22 = iVar14;
  }
  if (((iVar19 - iVar12 == 0) && (iVar23 - iVar21 == 0)) && (iVar8 - iVar22 == 0)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Delta != FVector3i::Zero()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                        ,0x25e,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar11)();
      return pTVar15;
    }
  }
  iVar19 = iVar12 - (iVar19 - iVar12);
  iVar14 = iVar21 - (iVar23 - iVar21);
  iVar23 = iVar22 - (iVar8 - iVar22);
  if ((iVar19 < 0) || ((this->Dimensions).field0_0x0._s_0.X <= iVar19)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("TraceBackControlPointIndex.X >= 0 && TraceBackControlPointIndex.X < Dimensions.X"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                        ,0x261,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar11)();
      return pTVar15;
    }
  }
  piVar1 = &(this->Dimensions).field0_0x0._s_0.Y;
  if ((iVar14 < 0) || (*piVar1 <= iVar14)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("TraceBackControlPointIndex.Y >= 0 && TraceBackControlPointIndex.Y < Dimensions.Y"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                        ,0x262,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar11)();
      return pTVar15;
    }
  }
  piVar2 = &(this->Dimensions).field0_0x0._s_0.Z;
  if ((iVar23 < 0) || (*piVar2 <= iVar23)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("TraceBackControlPointIndex.Z >= 0 && TraceBackControlPointIndex.Z < Dimensions.Z"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                        ,0x263,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar11)();
      return pTVar15;
    }
  }
  uVar20 = (iVar19 * *piVar1 + iVar14) * *piVar2 + iVar23;
  uVar18 = 0;
  if ((int)uVar20 < param_2->ArrayNum) {
    uVar18 = ~uVar20 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar11)();
      return pTVar15;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  lVar16 = (longlong)(int)uVar20;
  uVar20 = iVar22 + (iVar12 * *piVar1 + iVar21) * *piVar2;
  uVar18 = 0;
  if ((int)uVar20 < param_2->ArrayNum) {
    uVar18 = ~uVar20 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar11)();
      return pTVar15;
    }
  }
  lVar17 = (longlong)(int)uVar20;
  pFVar10 = (param_2->AllocatorInstance).Data;
  dVar3 = *(double *)(pFVar10 + lVar17 * 0x18 + 8);
  dVar4 = *(double *)(pFVar9 + lVar16 * 0x18 + 8);
  dVar5 = *(double *)(pFVar10 + lVar17 * 0x18 + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (*(double *)(pFVar10 + lVar17 * 0x18) - *(double *)(pFVar9 + lVar16 * 0x18)) +
       *(double *)(pFVar10 + lVar17 * 0x18);
  dVar6 = *(double *)(pFVar10 + lVar17 * 0x18 + 0x10);
  dVar7 = *(double *)(pFVar9 + lVar16 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar3 - dVar4) + dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar6 - dVar7) + *(double *)(pFVar10 + lVar17 * 0x18 + 0x10);
  return __return_storage_ptr__;
}

// GenerateInitialLatticePositions @ 14c738310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FFFDLattice::GenerateInitialLatticePositions
          (FFFDLattice *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  TVector<double>_u_0 local_88;
  TVector<double> local_70 [3];
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,(this->Dimensions).field0_0x0._s_0.X * (this->Dimensions).field0_0x0._s_0.Z *
                     (this->Dimensions).field0_0x0._s_0.Y,Default);
  iVar18 = 0;
  if (0 < (this->Dimensions).field0_0x0._s_0.X) {
    do {
      iVar15 = 0;
      dVar1 = (this->CellSize).field0_0x0._s_0.X;
      if (0 < (this->Dimensions).field0_0x0._s_0.Y) {
        do {
          iVar14 = (this->Dimensions).field0_0x0._s_0.Z;
          iVar17 = 0;
          dVar2 = (this->CellSize).field0_0x0._s_0.Y;
          if (0 < iVar14) {
            do {
              local_88._s_0.X =
                   ((double)iVar18 * dVar1 + (this->InitialBounds).Min.field0_0x0._s_0.X) *
                   (this->Transform).Scale3D.field0_0x0._s_0.X;
              local_88._s_0.Y =
                   ((double)iVar15 * dVar2 + (this->InitialBounds).Min.field0_0x0._s_0.Y) *
                   (this->Transform).Scale3D.field0_0x0._s_0.Y;
              uVar16 = (iVar18 * (this->Dimensions).field0_0x0._s_0.Y + iVar15) * iVar14 + iVar17;
              local_88._s_0.Z =
                   ((double)iVar17 * (this->CellSize).field0_0x0._s_0.Z +
                   (this->InitialBounds).Min.field0_0x0._s_0.Z) *
                   (this->Transform).Scale3D.field0_0x0._s_0.Z;
              pTVar13 = operator*<double>(local_70,(TQuaternion<double> *)this,
                                          (TVector<double> *)&local_88._s_0);
              dVar9 = (this->Transform).Translation.field0_0x0._s_0.Y;
              dVar3 = (pTVar13->field0_0x0)._s_0.X;
              dVar10 = (pTVar13->field0_0x0)._s_0.Y;
              dVar4 = (this->Transform).Translation.field0_0x0._s_0.X;
              dVar8 = (pTVar13->field0_0x0)._s_0.Z + (this->Transform).Translation.field0_0x0._s_0.Z
              ;
              uVar12 = 0;
              if ((int)uVar16 < param_1->ArrayNum) {
                uVar12 = ~uVar16 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar17 = iVar17 + 1;
              pFVar5 = (param_1->AllocatorInstance).Data;
              *(double *)(pFVar5 + (longlong)(int)uVar16 * 0x18) = dVar3 + dVar4;
              auVar7._8_4_ = SUB84(dVar8,0);
              auVar7._0_8_ = dVar10 + dVar9;
              auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              *(undefined1 (*) [16])(pFVar5 + (longlong)(int)uVar16 * 0x18 + 8) = auVar7;
              iVar14 = (this->Dimensions).field0_0x0._s_0.Z;
            } while (iVar17 < iVar14);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (this->Dimensions).field0_0x0._s_0.Y);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < (this->Dimensions).field0_0x0._s_0.X);
  }
  return;
}

// GenerateLatticeEdges @ 14c738510

void __thiscall
UE::Geometry::FFFDLattice::GenerateLatticeEdges
          (FFFDLattice *this,TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  
  uVar5 = (this->Dimensions).field0_0x0._s_0.Z * (this->Dimensions).field0_0x0._s_0.Y *
          (this->Dimensions).field0_0x0._s_0.X * 3;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar5,&param_1->AllocatorInstance,0,piVar2);
  }
  iVar10 = 0;
  if (0 < (this->Dimensions).field0_0x0._s_0.X) {
    do {
      iVar11 = 0;
      if (0 < (this->Dimensions).field0_0x0._s_0.Y) {
        do {
          iVar7 = (this->Dimensions).field0_0x0._s_0.Z;
          iVar1 = iVar11 + 1;
          iVar8 = 0;
          if (0 < iVar7) {
            do {
              iVar12 = (this->Dimensions).field0_0x0._s_0.Y;
              iVar9 = (iVar12 * iVar10 + iVar11) * iVar7 + iVar8;
              if (iVar10 + 1 < (this->Dimensions).field0_0x0._s_0.X) {
                pFVar3 = (param_1->AllocatorInstance).Data;
                iStack_44 = ((iVar10 + 1) * iVar12 + iVar11) * iVar7 + iVar8;
                local_48 = iVar9;
                if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
                    ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar2 * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar7 = param_1->ArrayNum;
                if (iVar7 == *piVar2) {
                  iVar7 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&param_1->AllocatorInstance,piVar2);
                }
                param_1->ArrayNum = iVar7 + 1;
                *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                     CONCAT44(iStack_44,local_48);
                iVar7 = (this->Dimensions).field0_0x0._s_0.Z;
              }
              iVar12 = (this->Dimensions).field0_0x0._s_0.Y;
              if (iVar1 < iVar12) {
                pFVar3 = (param_1->AllocatorInstance).Data;
                iStack_3c = (iVar12 * iVar10 + 1 + iVar11) * iVar7 + iVar8;
                local_40 = iVar9;
                if (((pFVar3 <= (FScriptContainerElement *)&local_40) &&
                    ((FScriptContainerElement *)&local_40 < pFVar3 + (longlong)*piVar2 * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar7 = param_1->ArrayNum;
                if (iVar7 == *piVar2) {
                  iVar7 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&param_1->AllocatorInstance,piVar2);
                }
                param_1->ArrayNum = iVar7 + 1;
                *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                     CONCAT44(iStack_3c,local_40);
              }
              iVar7 = (this->Dimensions).field0_0x0._s_0.Z;
              iVar12 = iVar8 + 1;
              if (iVar12 < iVar7) {
                pFVar3 = (param_1->AllocatorInstance).Data;
                iStack_34 = (iVar10 * (this->Dimensions).field0_0x0._s_0.Y + iVar11) * iVar7 + 1 +
                            iVar8;
                local_38 = iVar9;
                if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
                    ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar2 * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar7 = param_1->ArrayNum;
                if (iVar7 == *piVar2) {
                  iVar7 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&param_1->AllocatorInstance,piVar2);
                }
                param_1->ArrayNum = iVar7 + 1;
                *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                     CONCAT44(iStack_34,local_38);
              }
              iVar7 = (this->Dimensions).field0_0x0._s_0.Z;
              iVar8 = iVar12;
            } while (iVar12 < iVar7);
          }
          iVar11 = iVar1;
        } while (iVar1 < (this->Dimensions).field0_0x0._s_0.Y);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (this->Dimensions).field0_0x0._s_0.X);
  }
  return;
}

// GetDeformedMeshVertexPositions @ 14c7396a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FFFDLattice::GetDeformedMeshVertexPositions
          (FFFDLattice *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          ELatticeInterpolation param_3,FLatticeExecutionInfo param_4,FProgressCancel *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res20 [8];
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  FFFDLattice **local_70;
  FFFDLattice *local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_60;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_58;
  <lambda_1> *local_50;
  FLatticeExecutionInfo local_48;
  int local_40;
  ELatticeInterpolation local_3c;
  FProgressCancel *local_38;
  
  iVar1 = (this->VertexEmbeddings).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed(param_2,iVar1,Default)
  ;
  local_res20[0] = (<lambda_1>)0x0;
  if ((this->VertexEmbeddings).ArrayNum != param_2->ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexEmbeddings.Num() == OutVertexPositions.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                       ,0xfd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_50 = local_res20;
  local_38 = param_5;
  local_88.DataPtr = (void **)0x0;
  local_88.ArrayNum = 0;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FFFDLattice::GetDeformedMeshVertexPositions'::__l2::<lambda_1>,void,int>
             ::Call;
  local_70 = &local_68;
  local_48 = param_4;
  local_68 = this;
  local_60 = param_2;
  local_58 = param_1;
  local_40 = iVar1;
  local_3c = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_78,local_res20[0]
             ,(BackgroundPriority|ForceSingleThread) - (param_4.bParallel != false),&local_88);
  return;
}

// GetRotatedMeshVertexNormals @ 14c740e90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FFFDLattice::GetRotatedMeshVertexNormals
          (FFFDLattice *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          ELatticeInterpolation param_4,FLatticeExecutionInfo param_5,FProgressCancel *param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  FFFDLattice **local_70;
  FFFDLattice *local_68;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_60;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_50;
  undefined1 *local_48;
  FLatticeExecutionInfo local_40;
  int local_38;
  ELatticeInterpolation local_34;
  FProgressCancel *local_30;
  
  iVar1 = param_2->ArrayNum;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed(param_3,iVar1,Default);
  local_res8[0] = 0;
  if ((this->VertexEmbeddings).ArrayNum != param_3->ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexEmbeddings.Num() == OutNormals.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                       ,0x157,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48 = local_res8;
  local_34 = param_4;
  local_30 = param_6;
  local_88.DataPtr = (void **)0x0;
  local_88.ArrayNum = 0;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FFFDLattice::GetRotatedMeshVertexNormals'::__l2::<lambda_1>,void,int>
             ::Call;
  local_70 = &local_68;
  local_40 = param_5;
  local_68 = this;
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  local_38 = iVar1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_78,
             (<lambda_1>)param_4,
             (BackgroundPriority|ForceSingleThread) - (param_5.bParallel != false),&local_88);
  return;
}

// GetRotatedOverlayNormals @ 14c740fe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FFFDLattice::GetRotatedOverlayNormals
          (FFFDLattice *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          ELatticeInterpolation param_4,FLatticeExecutionInfo param_5,FProgressCancel *param_6)

{
  int iVar1;
  undefined1 local_res8 [8];
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_res18 [2];
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  FFFDLattice **local_60;
  FFFDLattice *local_58;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_50;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_40;
  undefined1 *local_38;
  FLatticeExecutionInfo local_30;
  ELatticeInterpolation local_28;
  FProgressCancel *local_20;
  
  iVar1 = *(int *)&param_2->field_0x38;
  local_res18[0] = param_2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed(param_3,iVar1,Default);
  local_48 = local_res18;
  local_28 = param_4;
  local_38 = local_res8;
  local_30 = param_5;
  local_20 = param_6;
  local_res8[0] = 0;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FFFDLattice::GetRotatedOverlayNormals'::__l2::<lambda_1>,void,int>
             ::Call;
  local_60 = &local_58;
  local_58 = this;
  local_50 = param_3;
  local_40 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_68,
             (<lambda_1>)param_4,
             (BackgroundPriority|ForceSingleThread) - (param_5.bParallel != false),&local_78);
  return;
}

// GetValuePair @ 14c743a30

void __thiscall
UE::Geometry::FFFDLattice::GetValuePair
          (FFFDLattice *this,int param_1,int param_2,int param_3,TVector<double> *param_4,
          TVector<double> *param_5,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (param_1 * (this->Dimensions).field0_0x0._s_0.Y + param_2) *
          (this->Dimensions).field0_0x0._s_0.Z + param_3;
  if (param_6->ArrayNum <= (int)uVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexA < LatticeControlPoints.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                       ,0x17a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((int)uVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexA >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\FFDLattice.cpp"
                       ,0x17b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = 0;
  if ((int)uVar6 < param_6->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_6->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)(int)uVar6 * 0x18;
  dVar4 = *(double *)(pFVar1 + 8);
  (param_4->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_4->field0_0x0)._s_0.Y = dVar4;
  (param_4->field0_0x0)._s_0.Z = *(double *)(pFVar2 + (longlong)(int)uVar6 * 0x18 + 0x10);
  uVar7 = ((param_1 + 1) * (this->Dimensions).field0_0x0._s_0.Y + param_2) *
          (this->Dimensions).field0_0x0._s_0.Z + param_3;
  uVar6 = 0;
  if ((int)uVar7 < param_6->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_6->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)(int)uVar7 * 0x18;
  dVar4 = *(double *)(pFVar1 + 8);
  (param_5->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_5->field0_0x0)._s_0.Y = dVar4;
  (param_5->field0_0x0)._s_0.Z = *(double *)(pFVar2 + (longlong)(int)uVar7 * 0x18 + 0x10);
  return;
}

// InitLattice @ 14c7446b0

void __thiscall UE::Geometry::FFFDLattice::InitLattice(FFFDLattice *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = (this->InitialBounds).Min.field0_0x0._s_0.X;
  dVar2 = (this->InitialBounds).Min.field0_0x0._s_0.Y;
  dVar3 = (this->InitialBounds).Min.field0_0x0._s_0.Z;
  dVar6 = (this->InitialBounds).Max.field0_0x0._s_0.X - dVar1;
  if (__real_40a00000 <= param_1) {
    param_1 = __real_40a00000;
  }
  dVar7 = (this->InitialBounds).Max.field0_0x0._s_0.Z - dVar3;
  dVar8 = (this->InitialBounds).Max.field0_0x0._s_0.Y - dVar2;
  if (dVar8 <= dVar6) {
    dVar8 = dVar6;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (dVar8 <= dVar7) {
    dVar8 = dVar7;
  }
  dVar8 = dVar8 * (double)param_1 * __real_3fe0000000000000;
  (this->InitialBounds).Min.field0_0x0._s_0.X = dVar1 - dVar8;
  (this->InitialBounds).Min.field0_0x0._s_0.Y = dVar2 - dVar8;
  (this->InitialBounds).Min.field0_0x0._s_0.Z = dVar3 - dVar8;
  dVar3 = dVar8 + (this->InitialBounds).Max.field0_0x0._s_0.Z;
  dVar6 = dVar8 + (this->InitialBounds).Max.field0_0x0._s_0.X;
  dVar8 = dVar8 + (this->InitialBounds).Max.field0_0x0._s_0.Y;
  (this->InitialBounds).Max.field0_0x0._s_0.Z = dVar3;
  (this->InitialBounds).Max.field0_0x0._s_0.X = dVar6;
  (this->InitialBounds).Max.field0_0x0._s_0.Y = dVar8;
  dVar1 = (this->InitialBounds).Min.field0_0x0._s_0.Z;
  iVar4 = (this->Dimensions).field0_0x0._s_0.Y;
  dVar2 = (this->InitialBounds).Min.field0_0x0._s_0.Y;
  iVar5 = (this->Dimensions).field0_0x0._s_0.Z;
  (this->CellSize).field0_0x0._s_0.X =
       (dVar6 - (this->InitialBounds).Min.field0_0x0._s_0.X) /
       (double)((this->Dimensions).field0_0x0._s_0.X + -1);
  (this->CellSize).field0_0x0._s_0.Y = (dVar8 - dVar2) / (double)(iVar4 + -1);
  (this->CellSize).field0_0x0._s_0.Z = (dVar3 - dVar1) / (double)(iVar5 + -1);
  return;
}

// InterpolatedPosition @ 14c74f220

TVector<double> * __thiscall
UE::Geometry::FFFDLattice::InterpolatedPosition
          (FFFDLattice *this,TVector<double> *__return_storage_ptr__,FEmbedding *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0 [5];
  
  dVar8 = __real_3ff0000000000000;
  iVar4 = (param_1->LatticeCell).field0_0x0._s_0.Y;
  iVar5 = (param_1->LatticeCell).field0_0x0._s_0.X;
  iVar6 = (param_1->LatticeCell).field0_0x0._s_0.Z;
  dVar1 = (param_1->CellWeighting).field0_0x0._s_0.Y;
  dVar2 = (param_1->CellWeighting).field0_0x0._s_0.Z;
  dVar3 = (param_1->CellWeighting).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  dVar7 = dVar8 - dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  GetValuePair(this,iVar5,iVar4,iVar6,(TVector<double> *)&local_b8._s_0,
               (TVector<double> *)&local_a0[0]._s_0,param_2);
  dVar9 = (dVar8 - dVar2) * (dVar8 - dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar7 * local_b8._s_0.X + dVar3 * (double)local_a0[0]._0_8_) * dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar7 * local_b8._s_0.Y + dVar3 * (double)local_a0[0]._8_8_) * dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar7 * local_b8._s_0.Z + dVar3 * (double)local_a0[0]._16_8_) * dVar9;
  GetValuePair(this,iVar5,iVar4,iVar6 + 1,(TVector<double> *)&local_a0[0]._s_0,
               (TVector<double> *)&local_b8._s_0,param_2);
  dVar9 = (dVar8 - dVar1) * dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar7 * (double)local_a0[0]._0_8_ + dVar3 * local_b8._s_0.X) * dVar9 +
       (__return_storage_ptr__->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar7 * (double)local_a0[0]._8_8_ + dVar3 * local_b8._s_0.Y) * dVar9 +
       (__return_storage_ptr__->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar7 * (double)local_a0[0]._16_8_ + dVar3 * local_b8._s_0.Z) * dVar9 +
       (__return_storage_ptr__->field0_0x0)._s_0.Z;
  GetValuePair(this,iVar5,iVar4 + 1,iVar6,(TVector<double> *)&local_a0[0]._s_0,
               (TVector<double> *)&local_b8._s_0,param_2);
  dVar9 = (dVar8 - dVar2) * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar7 * (double)local_a0[0]._0_8_ + dVar3 * local_b8._s_0.X) * dVar9 +
       (__return_storage_ptr__->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar7 * (double)local_a0[0]._8_8_ + dVar3 * local_b8._s_0.Y) * dVar9 +
       (__return_storage_ptr__->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar7 * (double)local_a0[0]._16_8_ + dVar3 * local_b8._s_0.Z) * dVar9 +
       (__return_storage_ptr__->field0_0x0)._s_0.Z;
  GetValuePair(this,iVar5,iVar4 + 1,iVar6 + 1,(TVector<double> *)&local_a0[0]._s_0,
               (TVector<double> *)&local_b8._s_0,param_2);
  dVar2 = dVar2 * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar7 * (double)local_a0[0]._0_8_ + dVar3 * local_b8._s_0.X) * dVar2 +
       (__return_storage_ptr__->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar7 * (double)local_a0[0]._8_8_ + dVar3 * local_b8._s_0.Y) * dVar2 +
       (__return_storage_ptr__->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar7 * (double)local_a0[0]._16_8_ + dVar3 * local_b8._s_0.Z) * dVar2 +
       (__return_storage_ptr__->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// InterpolatedPositionCubic @ 14c74f560

TVector<double> * __thiscall
UE::Geometry::FFFDLattice::InterpolatedPositionCubic
          (FFFDLattice *this,TVector<double> *__return_storage_ptr__,FEmbedding *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  TVector<double> *pTVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  FVector3i_u_0 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  TVector<double> local_f0 [7];
  
  dVar16 = __real_3fe5555555555555;
  dVar15 = __real_3fc5555555555555;
  dVar14 = __real_4000000000000000;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar11 = __real_3fe0000000000000;
  dVar10 = __real_3ff0000000000000;
  dVar2 = (param_1->CellWeighting).field0_0x0._s_0.X;
  dVar3 = (param_1->CellWeighting).field0_0x0._s_0.Y;
  dVar4 = (param_1->CellWeighting).field0_0x0._s_0.Z;
  iVar23 = -1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  do {
    dVar25 = dVar2 - (double)iVar23;
    uVar28 = SUB84(dVar25,0) & uVar12;
    uVar29 = (uint)((ulonglong)dVar25 >> 0x20) & uVar13;
    if (dVar10 <= (double)CONCAT44(uVar29,uVar28)) {
      if (dVar14 <= (double)CONCAT44(uVar29,uVar28)) {
        dVar25 = 0.0;
      }
      else {
        dVar25 = dVar14 - (double)CONCAT44(uVar29,uVar28);
        dVar25 = dVar25 * dVar25 * dVar25 * dVar15;
      }
    }
    else {
      dVar25 = (double)CONCAT44(uVar29,uVar28) * (double)CONCAT44(uVar29,uVar28);
      dVar25 = dVar25 * dVar11 * (double)CONCAT44(uVar29,uVar28) + (dVar16 - dVar25);
    }
    iVar24 = -1;
    do {
      dVar26 = dVar3 - (double)iVar24;
      uVar28 = SUB84(dVar26,0) & uVar12;
      uVar29 = (uint)((ulonglong)dVar26 >> 0x20) & uVar13;
      if (dVar10 <= (double)CONCAT44(uVar29,uVar28)) {
        if (dVar14 <= (double)CONCAT44(uVar29,uVar28)) {
          dVar26 = 0.0;
        }
        else {
          dVar26 = dVar14 - (double)CONCAT44(uVar29,uVar28);
          dVar26 = dVar26 * dVar26 * dVar26 * dVar15;
        }
      }
      else {
        dVar26 = (double)CONCAT44(uVar29,uVar28) * (double)CONCAT44(uVar29,uVar28);
        dVar26 = dVar26 * dVar11 * (double)CONCAT44(uVar29,uVar28) + (dVar16 - dVar26);
      }
      iVar21 = -1;
      do {
        dVar30 = dVar4 - (double)iVar21;
        uVar28 = SUB84(dVar30,0) & uVar12;
        uVar29 = (uint)((ulonglong)dVar30 >> 0x20) & uVar13;
        dVar30 = (double)CONCAT44(uVar29,uVar28);
        if (dVar10 <= dVar30) {
          if (dVar14 <= dVar30) {
            dVar30 = 0.0;
          }
          else {
            dVar30 = dVar14 - dVar30;
            dVar30 = dVar30 * dVar30 * dVar30 * dVar15;
          }
        }
        else {
          dVar27 = (double)CONCAT44(uVar29,uVar28) * dVar30;
          dVar30 = dVar27 * dVar11 * dVar30 + (dVar16 - dVar27);
        }
        iVar19 = (param_1->LatticeCell).field0_0x0._s_0.Y + iVar24;
        iVar20 = (param_1->LatticeCell).field0_0x0._s_0.Z + iVar21;
        iVar22 = (param_1->LatticeCell).field0_0x0._s_0.X + iVar23;
        dVar30 = dVar26 * dVar25 * dVar30;
        if ((((iVar22 < 0) || ((this->Dimensions).field0_0x0._s_0.X <= iVar22)) || (iVar19 < 0)) ||
           (((iVar5 = (this->Dimensions).field0_0x0._s_0.Y, iVar5 <= iVar19 || (iVar20 < 0)) ||
            (iVar6 = (this->Dimensions).field0_0x0._s_0.Z, iVar6 <= iVar20)))) {
          local_118._s_0.X = iVar22;
          local_118._s_0.Y = iVar19;
          local_118._s_0.Z = iVar20;
          pTVar18 = ExtrapolatedLatticePosition(this,local_f0,(FVector3i *)&local_118._s_0,param_2);
          local_108 = (pTVar18->field0_0x0)._s_0.X;
          dStack_100 = (pTVar18->field0_0x0)._s_0.Y;
          local_f8 = (pTVar18->field0_0x0)._s_0.Z;
        }
        else {
          uVar29 = (iVar19 + iVar5 * iVar22) * iVar6 + iVar20;
          uVar28 = 0;
          if ((int)uVar29 < param_2->ArrayNum) {
            uVar28 = ~uVar29 >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar8 = (code *)swi(3);
              pTVar18 = (TVector<double> *)(*pcVar8)();
              return pTVar18;
            }
          }
          pFVar7 = (param_2->AllocatorInstance).Data;
          pFVar1 = pFVar7 + (longlong)(int)uVar29 * 0x18;
          local_108 = *(double *)pFVar1;
          dStack_100 = *(double *)(pFVar1 + 8);
          local_f8 = *(double *)(pFVar7 + (longlong)(int)uVar29 * 0x18 + 0x10);
        }
        iVar21 = iVar21 + 1;
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             local_108 * dVar30 + (__return_storage_ptr__->field0_0x0)._s_0.X;
        dVar27 = local_f8 * dVar30 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
        auVar9._8_4_ = SUB84(dVar27,0);
        auVar9._0_8_ = dStack_100 * dVar30 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
        auVar9._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 8) = auVar9;
      } while (iVar21 < 3);
      iVar24 = iVar24 + 1;
    } while (iVar24 < 3);
    iVar23 = iVar23 + 1;
  } while (iVar23 < 3);
  return __return_storage_ptr__;
}

// LinearInterpolationJacobian @ 14c7514a0

TMatrix3<double> * __thiscall
UE::Geometry::FFFDLattice::LinearInterpolationJacobian
          (FFFDLattice *this,TMatrix3<double> *__return_storage_ptr__,FEmbedding *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108 [8];
  
  iVar3 = (param_1->LatticeCell).field0_0x0._s_0.X;
  iVar4 = (param_1->LatticeCell).field0_0x0._s_0.Z;
  iVar5 = (param_1->LatticeCell).field0_0x0._s_0.Y;
  GetValuePair(this,iVar3,iVar5,iVar4,(TVector<double> *)&local_120._s_0,
               (TVector<double> *)&local_138._s_0,param_2);
  GetValuePair(this,iVar3,iVar5,iVar4 + 1,(TVector<double> *)&local_180._s_0,
               (TVector<double> *)&local_198._s_0,param_2);
  GetValuePair(this,iVar3,iVar5 + 1,iVar4,(TVector<double> *)&local_150._s_0,
               (TVector<double> *)&local_168._s_0,param_2);
  GetValuePair(this,iVar3,iVar5 + 1,iVar4 + 1,(TVector<double> *)&local_108[0]._s_0,
               (TVector<double> *)&local_1b0._s_0,param_2);
  dVar14 = __real_3ff0000000000000 - (param_1->CellWeighting).field0_0x0._s_0.Y;
  dVar1 = (param_1->CellWeighting).field0_0x0._s_0.X;
  dVar9 = __real_3ff0000000000000 - dVar1;
  dVar15 = __real_3ff0000000000000 - (param_1->CellWeighting).field0_0x0._s_0.Z;
  dVar18 = dVar1 * local_138._s_0.X + dVar9 * local_120._s_0.X;
  dVar19 = dVar1 * local_138._s_0.Y + dVar9 * local_120._s_0.Y;
  dVar20 = dVar9 * local_120._s_0.Z + dVar1 * local_138._s_0.Z;
  dVar13 = dVar9 * local_180._s_0.X + dVar1 * local_198._s_0.X;
  dVar21 = dVar9 * local_180._s_0.Y + dVar1 * local_198._s_0.Y;
  dVar22 = dVar9 * local_180._s_0.Z + dVar1 * local_198._s_0.Z;
  dVar10 = dVar9 * local_150._s_0.X + dVar1 * local_168._s_0.X;
  dVar23 = dVar9 * local_150._s_0.Y + dVar1 * local_168._s_0.Y;
  dVar24 = dVar9 * local_150._s_0.Z + dVar1 * local_168._s_0.Z;
  dVar25 = dVar9 * (double)local_108[0]._0_8_ + dVar1 * local_1b0._s_0.X;
  dVar12 = dVar9 * (double)local_108[0]._8_8_ + dVar1 * local_1b0._s_0.Y;
  dVar2 = (param_1->CellWeighting).field0_0x0._s_0.Z;
  dVar16 = dVar9 * (double)local_108[0]._16_8_ + dVar1 * local_1b0._s_0.Z;
  dVar11 = dVar2 - __real_3ff0000000000000;
  dVar17 = (param_1->CellWeighting).field0_0x0._s_0.Y - __real_3ff0000000000000;
  dVar9 = (dVar11 * dVar18 - dVar13 * dVar2) + dVar10 * dVar15 + dVar25 * dVar2;
  dVar1 = (param_1->CellWeighting).field0_0x0._s_0.Y;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = ((local_1b0._s_0.X - (double)local_108[0]._0_8_) *
                  (param_1->CellWeighting).field0_0x0._s_0.Y +
                 (local_198._s_0.X - local_180._s_0.X) * dVar14) * dVar2 +
                 ((local_168._s_0.X - local_150._s_0.X) * (param_1->CellWeighting).field0_0x0._s_0.Y
                 + (local_138._s_0.X - local_120._s_0.X) * dVar14) * dVar15;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Row0).field0_0x0 = auVar8;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z =
       ((dVar17 * dVar18 + dVar13 * dVar14) - dVar10 * dVar1) + dVar25 * dVar1;
  dVar9 = (dVar11 * dVar19 - dVar21 * dVar2) + dVar23 * dVar15 + dVar12 * dVar2;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = ((local_1b0._s_0.Y - (double)local_108[0]._8_8_) * dVar1 +
                 (local_198._s_0.Y - local_180._s_0.Y) * dVar14) * dVar2 +
                 ((local_168._s_0.Y - local_150._s_0.Y) * dVar1 +
                 (local_138._s_0.Y - local_120._s_0.Y) * dVar14) * dVar15;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Row1).field0_0x0 = auVar7;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z =
       ((dVar17 * dVar19 + dVar21 * dVar14) - dVar23 * dVar1) + dVar12 * dVar1;
  dVar9 = (dVar11 * dVar20 - dVar22 * dVar2) + dVar24 * dVar15 + dVar16 * dVar2;
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = ((local_1b0._s_0.Z - (double)local_108[0]._16_8_) * dVar1 +
                 (local_198._s_0.Z - local_180._s_0.Z) * dVar14) * dVar2 +
                 ((local_168._s_0.Z - local_150._s_0.Z) * dVar1 +
                 (local_138._s_0.Z - local_120._s_0.Z) * dVar14) * dVar15;
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Row2).field0_0x0 = auVar6;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z =
       ((dVar17 * dVar20 + dVar22 * dVar14) - dVar24 * dVar1) + dVar16 * dVar1;
  return __return_storage_ptr__;
}

// VertexHasValidEmbedding @ 14c77c050

bool __thiscall UE::Geometry::FFFDLattice::VertexHasValidEmbedding(FFFDLattice *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (param_1 < (this->VertexEmbeddings).ArrayNum)) {
    lVar1 = (longlong)param_1 * 0x28;
    if (-1 < *(int *)((this->VertexEmbeddings).AllocatorInstance.Data + lVar1)) {
      uVar5 = 0;
      if (param_1 < (this->VertexEmbeddings).ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (-1 < *(int *)((this->VertexEmbeddings).AllocatorInstance.Data + lVar1 + 4)) {
        uVar5 = 0;
        if (param_1 < (this->VertexEmbeddings).ArrayNum) {
          uVar5 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (-1 < *(int *)((this->VertexEmbeddings).AllocatorInstance.Data + lVar1 + 8)) {
          return true;
        }
      }
    }
  }
  return false;
}

