// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// GetSquared @ 1433b1830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::Geometry::TDistSegment3Triangle3<double>::GetSquared(TDistSegment3Triangle3<double> *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_148 [56];
  double local_110;
  double dStack_108;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  dVar1 = this->DistanceSquared;
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 < 0.0) {
    local_f8._s_0.X = (this->Segment).Center.field0_0x0._s_0.X;
    local_f8._s_0.Y = (this->Segment).Center.field0_0x0._s_0.Y;
    local_110 = (this->Segment).Direction.field0_0x0._s_0.X;
    dStack_108 = (this->Segment).Direction.field0_0x0._s_0.Y;
    local_f8._s_0.Z = (this->Segment).Center.field0_0x0._s_0.Z;
    dStack_d0 = (this->Segment).Direction.field0_0x0._s_0.Z;
    local_c8 = (this->Triangle).V[0].field0_0x0._s_0.X;
    dStack_c0 = (this->Triangle).V[0].field0_0x0._s_0.Y;
    local_b8 = (this->Triangle).V[0].field0_0x0._s_0.Z;
    dStack_b0 = (this->Triangle).V[1].field0_0x0._s_0.X;
    local_a8 = (this->Triangle).V[1].field0_0x0._s_0.Y;
    dStack_a0 = (this->Triangle).V[1].field0_0x0._s_0.Z;
    local_98 = (this->Triangle).V[2].field0_0x0._s_0.X;
    dStack_90 = (this->Triangle).V[2].field0_0x0._s_0.Y;
    local_88 = (this->Triangle).V[2].field0_0x0._s_0.Z;
    local_80 = __real_bff0000000000000;
    dStack_e0 = local_110;
    local_d8 = dStack_108;
    dVar8 = TDistLine3Triangle3<double>::ComputeResult
                      ((TDistLine3Triangle3<double> *)&local_f8._s_0);
    dVar1 = (this->Segment).Extent;
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    this->SegmentParameter = dStack_78;
    if (dStack_78 <
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar10,SUB84(dVar1,0) ^ uVar9)) {
      dVar4 = (this->Segment).Direction.field0_0x0._s_0.Y;
      dVar5 = (this->Segment).Center.field0_0x0._s_0.Y;
      dVar8 = (this->Segment).Center.field0_0x0._s_0.Z -
              (this->Segment).Direction.field0_0x0._s_0.Z * dVar1;
      (this->SegmentClosest).field0_0x0._s_0.X =
           (this->Segment).Center.field0_0x0._s_0.X -
           dVar1 * (this->Segment).Direction.field0_0x0._s_0.X;
      auVar3._8_4_ = SUB84(dVar8,0);
      auVar3._0_8_ = dVar5 - dVar4 * dVar1;
      auVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(this->SegmentClosest).field0_0x0 + 8) = auVar3;
      local_f8._s_0.X = (this->SegmentClosest).field0_0x0._s_0.X;
      local_f8._s_0.Y = (this->SegmentClosest).field0_0x0._s_0.Y;
      local_f8._s_0.Z = (this->SegmentClosest).field0_0x0._s_0.Z;
      dStack_e0 = (this->Triangle).V[0].field0_0x0._s_0.X;
      local_d8 = (this->Triangle).V[0].field0_0x0._s_0.Y;
      dStack_d0 = (this->Triangle).V[0].field0_0x0._s_0.Z;
      local_c8 = (this->Triangle).V[1].field0_0x0._s_0.X;
      dStack_c0 = (this->Triangle).V[1].field0_0x0._s_0.Y;
      local_b8 = (this->Triangle).V[1].field0_0x0._s_0.Z;
      dStack_b0 = (this->Triangle).V[2].field0_0x0._s_0.X;
      local_a8 = (this->Triangle).V[2].field0_0x0._s_0.Y;
      dStack_a0 = (this->Triangle).V[2].field0_0x0._s_0.Z;
      dVar8 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_f8._s_0);
      dVar1 = (this->Segment).Extent;
      this->SegmentParameter =
           (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar10,SUB84(dVar1,0) ^ uVar9);
      (this->TriangleClosest).field0_0x0._s_0.X = local_80;
      (this->TriangleClosest).field0_0x0._s_0.Y = dStack_78;
      (this->TriangleClosest).field0_0x0._s_0.Z = local_70;
      (this->TriangleBaryCoords).field0_0x0._s_0.X = local_98;
      (this->TriangleBaryCoords).field0_0x0._s_0.Y = dStack_90;
      (this->TriangleBaryCoords).field0_0x0._s_0.Z = local_88;
    }
    else if (dVar1 < dStack_78) {
      dVar4 = (this->Segment).Center.field0_0x0._s_0.Y;
      dVar5 = (this->Segment).Direction.field0_0x0._s_0.Y;
      dVar8 = (this->Segment).Direction.field0_0x0._s_0.Z * dVar1 +
              (this->Segment).Center.field0_0x0._s_0.Z;
      (this->SegmentClosest).field0_0x0._s_0.X =
           dVar1 * (this->Segment).Direction.field0_0x0._s_0.X +
           (this->Segment).Center.field0_0x0._s_0.X;
      auVar2._8_4_ = SUB84(dVar8,0);
      auVar2._0_8_ = dVar5 * dVar1 + dVar4;
      auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(this->SegmentClosest).field0_0x0 + 8) = auVar2;
      local_f8._s_0.X = (this->SegmentClosest).field0_0x0._s_0.X;
      local_f8._s_0.Y = (this->SegmentClosest).field0_0x0._s_0.Y;
      local_f8._s_0.Z = (this->SegmentClosest).field0_0x0._s_0.Z;
      dStack_e0 = (this->Triangle).V[0].field0_0x0._s_0.X;
      local_d8 = (this->Triangle).V[0].field0_0x0._s_0.Y;
      dStack_d0 = (this->Triangle).V[0].field0_0x0._s_0.Z;
      local_c8 = (this->Triangle).V[1].field0_0x0._s_0.X;
      dStack_c0 = (this->Triangle).V[1].field0_0x0._s_0.Y;
      local_b8 = (this->Triangle).V[1].field0_0x0._s_0.Z;
      dStack_b0 = (this->Triangle).V[2].field0_0x0._s_0.X;
      local_a8 = (this->Triangle).V[2].field0_0x0._s_0.Y;
      dStack_a0 = (this->Triangle).V[2].field0_0x0._s_0.Z;
      dVar8 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_f8._s_0);
      this->SegmentParameter = (this->Segment).Extent;
      (this->TriangleClosest).field0_0x0._s_0.X = local_80;
      (this->TriangleClosest).field0_0x0._s_0.Y = dStack_78;
      (this->TriangleClosest).field0_0x0._s_0.Z = local_70;
      (this->TriangleBaryCoords).field0_0x0._s_0.X = local_98;
      (this->TriangleBaryCoords).field0_0x0._s_0.Y = dStack_90;
      (this->TriangleBaryCoords).field0_0x0._s_0.Z = local_88;
    }
    else {
      (this->SegmentClosest).field0_0x0._s_0.X = local_70;
      (this->SegmentClosest).field0_0x0._s_0.Y = dStack_68;
      (this->TriangleClosest).field0_0x0._s_0.X = local_58;
      (this->TriangleClosest).field0_0x0._s_0.Y = dStack_50;
      (this->SegmentClosest).field0_0x0._s_0.Z = local_60;
      (this->TriangleClosest).field0_0x0._s_0.Z = local_48;
      (this->TriangleBaryCoords).field0_0x0._s_0.X = local_40;
      (this->TriangleBaryCoords).field0_0x0._s_0.Y = dStack_38;
      (this->TriangleBaryCoords).field0_0x0._s_0.Z = local_30;
    }
    uVar6 = SUB84(dVar8,0);
    uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
    this->DistanceSquared = dVar8;
  }
  return (double)CONCAT44(uVar7,uVar6);
}

