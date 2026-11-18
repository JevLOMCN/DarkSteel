// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// ComputeResult @ 146de4af0

double __thiscall
UE::Geometry::TDistSegment2AxisAlignedBox2<double>::ComputeResult
          (TDistSegment2AxisAlignedBox2<double> *this)

{
  double dVar1;
  TVector2<double>_u_0 TVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  TVector2<double>_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 local_70;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58;
  double local_48 [8];
  
  dVar1 = this->DistanceSquared;
  uVar7 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (0.0 <= dVar1) goto LAB_146de4dc5;
  local_88 = (this->AxisAlignedBox).Max.field0_0x0._s_0.X;
  dStack_80 = (this->AxisAlignedBox).Max.field0_0x0._s_0.Y;
  local_98 = (this->AxisAlignedBox).Min.field0_0x0._s_0.X;
  dStack_90 = (this->AxisAlignedBox).Min.field0_0x0._s_0.Y;
  local_78 = *(undefined8 *)&(this->AxisAlignedBox).bIsValid;
  local_c8._s_0.X = (this->Segment).Direction.field0_0x0._s_0.X;
  local_c8._s_0.Y = (this->Segment).Direction.field0_0x0._s_0.Y;
  local_b8 = (this->Segment).Center.field0_0x0._s_0.X;
  dStack_b0 = (this->Segment).Center.field0_0x0._s_0.Y;
  local_70 = __real_bff0000000000000;
  dVar6 = (local_88 + local_98) * __real_3fe0000000000000;
  dVar5 = (dStack_80 + dStack_90) * __real_3fe0000000000000;
  local_e8._s_0.X = (local_88 - local_98) * __real_3fe0000000000000;
  local_d8._s_0.X = local_b8 - dVar6;
  local_e8._s_0.Y = (dStack_80 - dStack_90) * __real_3fe0000000000000;
  local_d8._s_0.Y = dStack_b0 - dVar5;
  local_a8 = local_c8._s_0.X;
  dStack_a0 = local_c8._s_0.Y;
  TDistLine2AxisAlignedBox2<double>::DoQuery
            ((TVector2<double> *)&local_d8._s_0,(TVector2<double> *)&local_c8._s_0,
             (TVector2<double> *)&local_e8._s_0,(TVector2<double> *)&local_68._s_0,
             (TVector2<double> *)&local_58._s_0,local_48);
  dVar4 = local_68._s_0.Y + dVar5;
  dVar1 = (this->Segment).Extent;
  dVar5 = local_58._s_0.Y + dVar5;
  uVar10 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar9 = (local_58._s_0.X + dVar6) - (local_68._s_0.X + dVar6);
  dVar9 = (dVar5 - dVar4) * (dVar5 - dVar4) + dVar9 * dVar9;
  this->SegmentParameter = local_48[0];
  if (local_48[0] < (double)CONCAT44(uVar11,uVar10)) {
    dVar4 = (this->Segment).Center.field0_0x0._s_0.Y -
            dVar1 * (this->Segment).Direction.field0_0x0._s_0.Y;
    (this->SegmentClosest).field0_0x0._s_0.X =
         (this->Segment).Center.field0_0x0._s_0.X -
         dVar1 * (this->Segment).Direction.field0_0x0._s_0.X;
    (this->SegmentClosest).field0_0x0._s_0.Y = dVar4;
    local_e8._s_0.Y = (this->SegmentClosest).field0_0x0._s_0.Y;
    local_e8._s_0.X = (this->AxisAlignedBox).Min.field0_0x0._s_0.X;
    dVar9 = (this->SegmentClosest).field0_0x0._s_0.X;
    if ((local_e8._s_0.X <= dVar9) &&
       (dVar1 = (this->AxisAlignedBox).Max.field0_0x0._s_0.X,
       local_e8._s_0.X = (this->SegmentClosest).field0_0x0._s_0.X, dVar1 < dVar9)) {
      local_e8._s_0.X = dVar1;
    }
    dVar1 = *(double *)((longlong)&(this->AxisAlignedBox).Min.field0_0x0 + 8);
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (dVar4 < dVar1) {
LAB_146de4d7f:
      local_e8._s_0.Y = (double)CONCAT44(uVar8,uVar7);
    }
    else {
      dVar1 = *(double *)((longlong)&(this->AxisAlignedBox).Max.field0_0x0 + 8);
      uVar7 = SUB84(dVar1,0);
      uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < dVar4) goto LAB_146de4d7f;
    }
    (this->BoxClosest).field0_0x0._s_0.X = local_e8._s_0.X;
    (this->BoxClosest).field0_0x0._s_0.Y = local_e8._s_0.Y;
    dVar9 = dVar9 - local_e8._s_0.X;
    dVar4 = (this->SegmentClosest).field0_0x0._s_0.Y - (this->BoxClosest).field0_0x0._s_0.Y;
    this->SegmentParameter = (double)CONCAT44(uVar11,uVar10);
LAB_146de4da1:
    dVar9 = dVar9 * dVar9 + dVar4 * dVar4;
  }
  else {
    if (dVar1 < local_48[0]) {
      dVar9 = dVar1 * (this->Segment).Direction.field0_0x0._s_0.Y +
              (this->Segment).Center.field0_0x0._s_0.Y;
      (this->SegmentClosest).field0_0x0._s_0.X =
           dVar1 * (this->Segment).Direction.field0_0x0._s_0.X +
           (this->Segment).Center.field0_0x0._s_0.X;
      (this->SegmentClosest).field0_0x0._s_0.Y = dVar9;
      local_e8._s_0.Y = (this->SegmentClosest).field0_0x0._s_0.Y;
      local_e8._s_0.X = (this->AxisAlignedBox).Min.field0_0x0._s_0.X;
      dVar4 = (this->SegmentClosest).field0_0x0._s_0.X;
      if ((local_e8._s_0.X <= dVar4) &&
         (dVar5 = (this->AxisAlignedBox).Max.field0_0x0._s_0.X,
         local_e8._s_0.X = (this->SegmentClosest).field0_0x0._s_0.X, dVar5 < dVar4)) {
        local_e8._s_0.X = dVar5;
      }
      dVar5 = *(double *)((longlong)&(this->AxisAlignedBox).Min.field0_0x0 + 8);
      uVar7 = SUB84(dVar5,0);
      uVar8 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (dVar9 < dVar5) {
LAB_146de4ce8:
        local_e8._s_0.Y = (double)CONCAT44(uVar8,uVar7);
      }
      else {
        dVar5 = *(double *)((longlong)&(this->AxisAlignedBox).Max.field0_0x0 + 8);
        uVar7 = SUB84(dVar5,0);
        uVar8 = (undefined4)((ulonglong)dVar5 >> 0x20);
        if (dVar5 < dVar9) goto LAB_146de4ce8;
      }
      (this->BoxClosest).field0_0x0._s_0.X = local_e8._s_0.X;
      (this->BoxClosest).field0_0x0._s_0.Y = local_e8._s_0.Y;
      dVar4 = dVar4 - local_e8._s_0.X;
      dVar9 = (this->SegmentClosest).field0_0x0._s_0.Y - (this->BoxClosest).field0_0x0._s_0.Y;
      this->SegmentParameter = dVar1;
      goto LAB_146de4da1;
    }
    TVar2._8_4_ = SUB84(dVar5,0);
    TVar2._s_0.X = local_58._s_0.X + dVar6;
    TVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    (this->SegmentClosest).field0_0x0 = TVar2;
    TVar3._8_4_ = SUB84(dVar4,0);
    TVar3._s_0.X = local_68._s_0.X + dVar6;
    TVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    (this->BoxClosest).field0_0x0 = TVar3;
  }
  uVar7 = SUB84(dVar9,0);
  uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
  this->DistanceSquared = dVar9;
LAB_146de4dc5:
  return (double)CONCAT44(uVar8,uVar7);
}

