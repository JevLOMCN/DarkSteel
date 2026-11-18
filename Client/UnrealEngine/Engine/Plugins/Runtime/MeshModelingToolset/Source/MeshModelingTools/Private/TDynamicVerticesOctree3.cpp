// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3> @ 14ccb9740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>::
TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>
          (TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3> *this)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)&this->_padding_ = 10;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0x408f400000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 1000;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock
            ((TDynamicVector<unsigned_short,512> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock((TDynamicVector<int,512> *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::AddAllocatedBlock
            ((TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *)&this->_padding_);
  TSparseListSet<int>::TSparseListSet<int>((TSparseListSet<int> *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TDynamicVector<unsigned_int,512>::AddAllocatedBlock
            ((TDynamicVector<unsigned_int,512> *)&this->_padding_);
  lVar2 = _UNK_150a9e658;
  lVar1 = ___xmm_800000017fffffff7fffffff7fffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = lVar1;
  this->_padding_ = lVar2;
  this->_padding_ = -0x7ffffffe7fffffff;
  (this->ModifiedBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->ModifiedBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->ModifiedBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->ModifiedBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->ModifiedBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->ModifiedBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->HitSphereRadius = 1.0;
  return this;
}

// Initialize @ 14cd04040

void __thiscall
UE::Geometry::TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>::Initialize
          (TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1,
          bool param_2)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  double dVar5;
  TAxisAlignedBox3<double> *pTVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  FDynamicMesh3 *local_res8;
  code *local_68;
  FDynamicMesh3 **local_60;
  TVector<double>_u_0 local_58 [2];
  
  this->VertexSource = param_1;
  pTVar6 = FDynamicMesh3::GetBounds(param_1,(TAxisAlignedBox3<double> *)&local_58[0]._s_0,false);
  uVar9 = 0;
  dVar14 = (pTVar6->Max).field0_0x0._s_0.Y - (pTVar6->Min).field0_0x0._s_0.Y;
  dVar11 = (pTVar6->Max).field0_0x0._s_0.Z - (pTVar6->Min).field0_0x0._s_0.Z;
  dVar5 = (pTVar6->Max).field0_0x0._s_0.X - (pTVar6->Min).field0_0x0._s_0.X;
  auVar12._0_8_ = dVar11 * dVar11;
  auVar12._8_8_ = 0;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar14 * dVar14 + dVar5 * dVar5 + auVar12._0_8_;
  auVar13 = sqrtpd(auVar12,auVar13);
  this->HitSphereRadius = auVar13._0_8_ * __real_3f50624dd2f1a9fc;
  iVar7 = (this->VertexSource->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->VertexSource->VertexRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar7) {
    uVar8 = 0;
    do {
      pFVar3 = this->VertexSource;
      if ((int)uVar9 <
          (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed)) {
        uVar10 = (ulonglong)(uVar8 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (ulonglong)(uVar9 >> 9) * 8) + uVar10 * 2) - 1U) < 0xfffe) {
          lVar4 = *(longlong *)
                   ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
          local_58[0]._16_8_ = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
          pdVar2 = (double *)(lVar4 + uVar10 * 0x18);
          dVar5 = *pdVar2;
          dVar11 = pdVar2[1];
          if (param_2) {
            if (dVar5 < (this->ModifiedBounds).Min.field0_0x0._s_0.X) {
              (this->ModifiedBounds).Min.field0_0x0._s_0.X = dVar5;
            }
            pTVar1 = &(this->ModifiedBounds).Max;
            if ((pTVar1->field0_0x0)._s_0.X <= dVar5 && dVar5 != (pTVar1->field0_0x0)._s_0.X) {
              (this->ModifiedBounds).Max.field0_0x0._s_0.X = dVar5;
            }
            if (dVar11 < (this->ModifiedBounds).Min.field0_0x0._s_0.Y) {
              (this->ModifiedBounds).Min.field0_0x0._s_0.Y = dVar11;
            }
            pdVar2 = &(this->ModifiedBounds).Max.field0_0x0._s_0.Y;
            if (*pdVar2 <= dVar11 && dVar11 != *pdVar2) {
              (this->ModifiedBounds).Max.field0_0x0._s_0.Y = dVar11;
            }
            if ((double)local_58[0]._16_8_ < (this->ModifiedBounds).Min.field0_0x0._s_0.Z) {
              (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)local_58[0]._16_8_;
            }
            pdVar2 = &(this->ModifiedBounds).Max.field0_0x0._s_0.Z;
            if (*pdVar2 <= (double)local_58[0]._16_8_ && (double)local_58[0]._16_8_ != *pdVar2) {
              (this->ModifiedBounds).Max.field0_0x0._s_0.Z = (double)local_58[0]._16_8_;
            }
            local_60 = &local_res8;
            local_68 = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>::Initialize'::__l10::<lambda_1>,UE::Math::TVector<double>,int>
                       ::Call;
            local_res8 = pFVar3;
            FSparseDynamicPointOctree3::InsertPoint_DynamicExpand
                      ((FSparseDynamicPointOctree3 *)this,uVar9,
                       (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_68);
          }
          else {
            if (dVar5 < (this->ModifiedBounds).Min.field0_0x0._s_0.X) {
              (this->ModifiedBounds).Min.field0_0x0._s_0.X = dVar5;
            }
            pTVar1 = &(this->ModifiedBounds).Max;
            if ((pTVar1->field0_0x0)._s_0.X <= dVar5 && dVar5 != (pTVar1->field0_0x0)._s_0.X) {
              (this->ModifiedBounds).Max.field0_0x0._s_0.X = dVar5;
            }
            if (dVar11 < (this->ModifiedBounds).Min.field0_0x0._s_0.Y) {
              (this->ModifiedBounds).Min.field0_0x0._s_0.Y = dVar11;
            }
            pdVar2 = &(this->ModifiedBounds).Max.field0_0x0._s_0.Y;
            if (*pdVar2 <= dVar11 && dVar11 != *pdVar2) {
              (this->ModifiedBounds).Max.field0_0x0._s_0.Y = dVar11;
            }
            if ((double)local_58[0]._16_8_ < (this->ModifiedBounds).Min.field0_0x0._s_0.Z) {
              (this->ModifiedBounds).Min.field0_0x0._s_0.Z = (double)local_58[0]._16_8_;
            }
            pdVar2 = &(this->ModifiedBounds).Max.field0_0x0._s_0.Z;
            if (*pdVar2 <= (double)local_58[0]._16_8_ && (double)local_58[0]._16_8_ != *pdVar2) {
              (this->ModifiedBounds).Max.field0_0x0._s_0.Z = (double)local_58[0]._16_8_;
            }
            local_58[0]._0_8_ = dVar5;
            local_58[0]._8_8_ = dVar11;
            FSparseDynamicPointOctree3::InsertPoint
                      ((FSparseDynamicPointOctree3 *)this,uVar9,(TVector<double> *)&local_58[0]._s_0
                      );
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

