// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Find @ 14c805ef0

bool __thiscall UE::Geometry::TIntrLine2Triangle2<double>::Find(TIntrLine2Triangle2<double> *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  FVector3i_u_0 local_78;
  TVector2<double>_u_0 local_68;
  TVector<double>_u_0 local_58;
  TIntersector1<double> local_40;
  
  if (this->Result != NotComputed) {
    return this->Result == Intersects;
  }
  dVar1 = (this->Line).Direction.field0_0x0._s_0.X;
  dVar2 = (this->Line).Direction.field0_0x0._s_0.Y;
  dVar5 = (dVar2 * dVar2 + dVar1 * dVar1) - __real_3ff0000000000000;
  if (__real_3e45798ee2308c3a <=
      (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    this->Result = InvalidQuery;
    this->Type = Empty;
    return false;
  }
  iVar3 = 0;
  iVar4 = 0;
  local_58._s_0.X =
       ((this->Triangle).V[0].field0_0x0._s_0.X - (this->Line).Origin.field0_0x0._s_0.X) * dVar2 -
       ((this->Triangle).V[0].field0_0x0._s_0.Y - (this->Line).Origin.field0_0x0._s_0.Y) * dVar1;
  if (local_58._s_0.X <= __real_3e45798ee2308c3a) {
    if (__real_be45798ee2308c3a <= local_58._s_0.X) {
      local_58._s_0.X = 0.0;
      local_78._s_0.X = 0;
    }
    else {
      local_78._s_0.X = -1;
      iVar4 = 1;
    }
  }
  else {
    local_78._s_0.X = 1;
    iVar3 = 1;
  }
  local_58._s_0.Y =
       ((this->Triangle).V[1].field0_0x0._s_0.X - (this->Line).Origin.field0_0x0._s_0.X) * dVar2 -
       ((this->Triangle).V[1].field0_0x0._s_0.Y - (this->Line).Origin.field0_0x0._s_0.Y) * dVar1;
  if (local_58._s_0.Y <= __real_3e45798ee2308c3a) {
    if (__real_be45798ee2308c3a <= local_58._s_0.Y) {
      local_58._s_0.Y = 0.0;
      local_78._s_0.Y = 0;
    }
    else {
      local_78._s_0.Y = -1;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    local_78._s_0.Y = 1;
    iVar3 = iVar3 + 1;
  }
  local_58._s_0.Z =
       ((this->Triangle).V[2].field0_0x0._s_0.X - (this->Line).Origin.field0_0x0._s_0.X) * dVar2 -
       ((this->Triangle).V[2].field0_0x0._s_0.Y - (this->Line).Origin.field0_0x0._s_0.Y) * dVar1;
  if (local_58._s_0.Z <= __real_3e45798ee2308c3a) {
    if (__real_be45798ee2308c3a <= local_58._s_0.Z) {
      local_58._s_0.Z = 0.0;
      local_78._s_0.Z = 0;
    }
    else {
      local_78._s_0.Z = -1;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    local_78._s_0.Z = 1;
    iVar3 = iVar3 + 1;
  }
  if ((iVar3 == 3) || (iVar4 == 3)) {
    this->Quantity = 0;
  }
  else {
    GetInterval((TVector2<double> *)this,&(this->Line).Direction,&this->Triangle,
                (TVector<double> *)&local_58._s_0,(FVector3i *)&local_78._s_0,
                (TVector2<double> *)&local_68._s_0);
    TIntersector1<double>::TIntersector1<double>
              (&local_40,local_68._s_0.X,local_68._s_0.Y,__real_ffefffffffffffff,
               __real_7fefffffffffffff);
    TIntersector1<double>::Find(&local_40);
    this->Quantity = local_40.NumIntersections;
    if (local_40.NumIntersections == 2) {
      this->Param0 = local_40.Intersections.Min;
      this->Type = Segment;
      dVar1 = (this->Line).Direction.field0_0x0._s_0.Y;
      dVar2 = (this->Line).Origin.field0_0x0._s_0.Y;
      (this->Point0).field0_0x0._s_0.X =
           local_40.Intersections.Min * (this->Line).Direction.field0_0x0._s_0.X +
           (this->Line).Origin.field0_0x0._s_0.X;
      (this->Point0).field0_0x0._s_0.Y = local_40.Intersections.Min * dVar1 + dVar2;
      this->Param1 = local_40.Intersections.Max;
      dVar1 = (this->Line).Direction.field0_0x0._s_0.Y;
      dVar2 = (this->Line).Origin.field0_0x0._s_0.Y;
      (this->Point1).field0_0x0._s_0.X =
           local_40.Intersections.Max * (this->Line).Direction.field0_0x0._s_0.X +
           (this->Line).Origin.field0_0x0._s_0.X;
      (this->Point1).field0_0x0._s_0.Y = local_40.Intersections.Max * dVar1 + dVar2;
      goto LAB_14c806196;
    }
    if (local_40.NumIntersections == 1) {
      this->Param0 = local_40.Intersections.Min;
      this->Type = Point;
      dVar1 = (this->Line).Direction.field0_0x0._s_0.Y;
      dVar2 = (this->Line).Origin.field0_0x0._s_0.Y;
      (this->Point0).field0_0x0._s_0.X =
           local_40.Intersections.Min * (this->Line).Direction.field0_0x0._s_0.X +
           (this->Line).Origin.field0_0x0._s_0.X;
      (this->Point0).field0_0x0._s_0.Y = local_40.Intersections.Min * dVar1 + dVar2;
      goto LAB_14c806196;
    }
  }
  this->Type = Empty;
LAB_14c806196:
  this->Result = NoIntersection - (this->Type != Empty);
  return this->Type != Empty;
}

