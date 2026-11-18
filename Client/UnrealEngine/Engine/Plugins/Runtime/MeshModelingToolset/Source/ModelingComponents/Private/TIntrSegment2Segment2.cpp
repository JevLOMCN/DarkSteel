// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// Find @ 14cb07e60

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TIntrSegment2Segment2<double>::Find(TIntrSegment2Segment2<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  EIntersectionType EVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  TVector2<double>_u_0 local_68;
  TIntersector1<double> local_58;
  
  if (this->Result != NotComputed) {
    return this->Result == Intersects;
  }
  dVar1 = 0.0;
  bVar4 = (this->Segment1).Extent == 0.0;
  cVar7 = bVar4 + ((this->Segment2).Extent == 0.0);
  if (cVar7 == '\x02') {
    dVar1 = (this->Segment2).Center.field0_0x0._s_0.X;
    dVar15 = (this->Segment2).Center.field0_0x0._s_0.Y;
    dVar2 = (this->Segment1).Center.field0_0x0._s_0.X;
    dVar3 = (this->Segment1).Center.field0_0x0._s_0.Y;
    dVar5 = dVar1 - dVar2;
    dVar10 = dVar15 - dVar3;
    if (dVar10 * dVar10 + dVar5 * dVar5 <= this->IntervalThreshold * this->IntervalThreshold) {
      dVar15 = (dVar15 + dVar3) * __real_3fe0000000000000;
      (this->Point0).field0_0x0._s_0.X = (dVar1 + dVar2) * __real_3fe0000000000000;
      (this->Point0).field0_0x0._s_0.Y = dVar15;
      this->Parameter0 = 0.0;
      this->Result = Intersects;
      this->Type = Point;
      this->Quantity = 1;
      return true;
    }
  }
  else {
    if (cVar7 != '\x01') {
      local_68 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      EVar6 = TIntrLine2Line2<double>::Classify
                        ((TVector2<double> *)this,&(this->Segment1).Direction,
                         &(this->Segment2).Center,&(this->Segment2).Direction,this->DotThreshold,
                         this->IntervalThreshold,(TVector2<double> *)&local_68._s_0);
      this->Type = EVar6;
      if (EVar6 == Point) {
        if ((this->IntervalThreshold + (this->Segment1).Extent <
             (double)CONCAT44(local_68._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_68._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
           (dVar1 = this->IntervalThreshold + (this->Segment2).Extent,
           uVar8 = local_68._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar9 = local_68._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           dVar1 <= (double)CONCAT44(uVar9,uVar8) && (double)CONCAT44(uVar9,uVar8) != dVar1)) {
          this->Type = Empty;
          this->Quantity = 0;
        }
        else {
          dVar1 = (this->Segment1).Direction.field0_0x0._s_0.Y;
          dVar15 = (this->Segment1).Center.field0_0x0._s_0.Y;
          (this->Point0).field0_0x0._s_0.X =
               local_68._s_0.X * (this->Segment1).Direction.field0_0x0._s_0.X +
               (this->Segment1).Center.field0_0x0._s_0.X;
          (this->Point0).field0_0x0._s_0.Y = local_68._s_0.X * dVar1 + dVar15;
          this->Parameter0 = local_68._s_0.X;
          this->Type = Point;
          this->Quantity = 1;
        }
      }
      else if (EVar6 == Line) {
        dVar1 = (this->Segment1).Extent;
        dVar15 = ((this->Segment2).Center.field0_0x0._s_0.Y -
                 (this->Segment1).Center.field0_0x0._s_0.Y) *
                 (this->Segment1).Direction.field0_0x0._s_0.Y +
                 ((this->Segment2).Center.field0_0x0._s_0.X -
                 (this->Segment1).Center.field0_0x0._s_0.X) *
                 (this->Segment1).Direction.field0_0x0._s_0.X;
        TIntersector1<double>::TIntersector1<double>
                  (&local_58,
                   (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000),
                   dVar1,dVar15 - (this->Segment2).Extent,dVar15 + (this->Segment2).Extent);
        TIntersector1<double>::Find(&local_58);
        this->Quantity = local_58.NumIntersections;
        if (local_58.NumIntersections == 2) {
          this->Parameter0 = local_58.Intersections.Min;
          this->Type = Segment;
          dVar1 = (this->Segment1).Direction.field0_0x0._s_0.Y;
          dVar15 = (this->Segment1).Center.field0_0x0._s_0.Y;
          (this->Point0).field0_0x0._s_0.X =
               local_58.Intersections.Min * (this->Segment1).Direction.field0_0x0._s_0.X +
               (this->Segment1).Center.field0_0x0._s_0.X;
          (this->Point0).field0_0x0._s_0.Y = local_58.Intersections.Min * dVar1 + dVar15;
          this->Parameter1 = local_58.Intersections.Max;
          dVar1 = (this->Segment1).Direction.field0_0x0._s_0.Y;
          dVar15 = (this->Segment1).Center.field0_0x0._s_0.Y;
          (this->Point1).field0_0x0._s_0.X =
               local_58.Intersections.Max * (this->Segment1).Direction.field0_0x0._s_0.X +
               (this->Segment1).Center.field0_0x0._s_0.X;
          (this->Point1).field0_0x0._s_0.Y = local_58.Intersections.Max * dVar1 + dVar15;
        }
        else if (local_58.NumIntersections == 1) {
          this->Parameter0 = local_58.Intersections.Min;
          this->Type = Point;
          dVar1 = (this->Segment1).Direction.field0_0x0._s_0.Y;
          dVar15 = (this->Segment1).Center.field0_0x0._s_0.Y;
          (this->Point0).field0_0x0._s_0.X =
               local_58.Intersections.Min * (this->Segment1).Direction.field0_0x0._s_0.X +
               (this->Segment1).Center.field0_0x0._s_0.X;
          (this->Point0).field0_0x0._s_0.Y = local_58.Intersections.Min * dVar1 + dVar15;
        }
        else {
          this->Type = Empty;
        }
      }
      else {
        this->Quantity = 0;
      }
      this->Result = NoIntersection - (this->Type != Empty);
      return this->Type != Empty;
    }
    if (bVar4) {
      dVar15 = TSegment2<double>::DistanceSquared(&this->Segment2,(TVector2<double> *)this);
      uVar11 = *(undefined4 *)&(this->Segment1).Center.field0_0x0;
      uVar12 = *(undefined4 *)((longlong)&(this->Segment1).Center.field0_0x0 + 4);
      uVar13 = *(undefined4 *)((longlong)&(this->Segment1).Center.field0_0x0 + 8);
      uVar14 = *(undefined4 *)((longlong)&(this->Segment1).Center.field0_0x0 + 0xc);
    }
    else {
      dVar15 = TSegment2<double>::DistanceSquared(&this->Segment1,&(this->Segment2).Center);
      uVar11 = *(undefined4 *)&(this->Segment2).Center.field0_0x0;
      uVar12 = *(undefined4 *)((longlong)&(this->Segment2).Center.field0_0x0 + 4);
      uVar13 = *(undefined4 *)((longlong)&(this->Segment2).Center.field0_0x0 + 8);
      uVar14 = *(undefined4 *)((longlong)&(this->Segment2).Center.field0_0x0 + 0xc);
      dVar1 = ((this->Segment2).Center.field0_0x0._s_0.Y - (this->Segment1).Center.field0_0x0._s_0.Y
              ) * (this->Segment1).Direction.field0_0x0._s_0.Y +
              ((this->Segment2).Center.field0_0x0._s_0.X - (this->Segment1).Center.field0_0x0._s_0.X
              ) * (this->Segment1).Direction.field0_0x0._s_0.X;
    }
    if (dVar15 <= this->IntervalThreshold * this->IntervalThreshold) {
      this->Parameter0 = dVar1;
      *(undefined4 *)&(this->Point0).field0_0x0 = uVar11;
      *(undefined4 *)((longlong)&(this->Point0).field0_0x0 + 4) = uVar12;
      *(undefined4 *)((longlong)&(this->Point0).field0_0x0 + 8) = uVar13;
      *(undefined4 *)((longlong)&(this->Point0).field0_0x0 + 0xc) = uVar14;
      this->Result = Intersects;
      this->Type = Point;
      this->Quantity = 1;
      return true;
    }
  }
  this->Result = NoIntersection;
  this->Type = Empty;
  this->Quantity = 0;
  return false;
}

