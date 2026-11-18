// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 8

// TDistLine3Circle3<float> @ 1494fee30

TDistLine3Circle3<float> * __thiscall
UE::Geometry::TDistLine3Circle3<float>::TDistLine3Circle3<float>
          (TDistLine3Circle3<float> *this,TLine3<float> *param_1,TCircle3<float> *param_2)

{
  undefined8 uVar1;
  undefined3 uVar2;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->Origin).field0_0x0 + 8);
  *(undefined8 *)&(this->Line).Origin.field0_0x0 = *(undefined8 *)&(param_1->Origin).field0_0x0;
  *(undefined8 *)((longlong)&(this->Line).Origin.field0_0x0 + 8) = uVar1;
  *(undefined8 *)((longlong)&(this->Line).Direction.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->Direction).field0_0x0 + 4);
  uVar1 = *(undefined8 *)((longlong)&(param_2->Frame).Origin.field0_0x0 + 8);
  *(undefined8 *)&(this->Circle).Frame.Origin.field0_0x0 =
       *(undefined8 *)&(param_2->Frame).Origin.field0_0x0;
  *(undefined8 *)((longlong)&(this->Circle).Frame.Origin.field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_2->Frame).Rotation.field0_0x0 + 0xc);
  *(undefined8 *)((longlong)&(this->Circle).Frame.Rotation.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_2->Frame).Rotation.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->Circle).Frame.Rotation.field0_0x0 + 0xc) = uVar1;
  uVar2 = *(undefined3 *)&param_2->field_0x21;
  (this->Circle).bIsReversed = param_2->bIsReversed;
  *(undefined3 *)&(this->Circle).field_0x21 = uVar2;
  this->DistanceSquared = -1.0;
  this->NumClosestPairs = 0;
  return this;
}

// TDistLine3Circle3<double> @ 1494fee70

TDistLine3Circle3<double> * __thiscall
UE::Geometry::TDistLine3Circle3<double>::TDistLine3Circle3<double>
          (TDistLine3Circle3<double> *this,TLine3<double> *param_1,TCircle3<double> *param_2)

{
  double dVar1;
  bool bVar2;
  undefined7 uVar3;
  
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->Line).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->Line).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Direction).field0_0x0._s_0.X;
  (this->Line).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->Line).Direction.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
  (this->Line).Direction.field0_0x0._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  (this->Line).Direction.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_2->Frame).Origin.field0_0x0._s_0.Y;
  (this->Circle).Frame.Origin.field0_0x0._s_0.X = (param_2->Frame).Origin.field0_0x0._s_0.X;
  (this->Circle).Frame.Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->Frame).Rotation.field0_0x0._s_0.X;
  (this->Circle).Frame.Origin.field0_0x0._s_0.Z = (param_2->Frame).Origin.field0_0x0._s_0.Z;
  (this->Circle).Frame.Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_2->Frame).Rotation.field0_0x0._s_0.Z;
  (this->Circle).Frame.Rotation.field0_0x0._s_0.Y = (param_2->Frame).Rotation.field0_0x0._s_0.Y;
  (this->Circle).Frame.Rotation.field0_0x0._s_0.Z = dVar1;
  dVar1 = param_2->Radius;
  (this->Circle).Frame.Rotation.field0_0x0._s_0.W = (param_2->Frame).Rotation.field0_0x0._s_0.W;
  (this->Circle).Radius = dVar1;
  bVar2 = param_2->bIsReversed;
  uVar3 = *(undefined7 *)&param_2->field_0x41;
  this->DistanceSquared = -1.0;
  (this->Circle).bIsReversed = bVar2;
  *(undefined7 *)&(this->Circle).field_0x41 = uVar3;
  this->NumClosestPairs = 0;
  return this;
}

// ComputeResult @ 14950fc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UE::Geometry::TDistLine3Circle3<float>::ComputeResult(TDistLine3Circle3<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  DCPQuery<float,gte::Line<3,float>,gte::Circle3<float>_> local_108 [16];
  Result local_f8;
  undefined1 local_b8 [20];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [3];
  undefined1 local_88 [12];
  float fStack_7c;
  float fStack_78;
  float local_74;
  float local_70;
  Vector<3,float> local_68;
  float *local_58;
  float local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  fVar4 = this->DistanceSquared;
  if (fVar4 < 0.0) {
    local_a0 = (this->Line).Direction.field0_0x0._s_0.X;
    local_88._0_8_ = &local_a0;
    local_9c = (this->Line).Direction.field0_0x0._s_0.Y;
    local_98 = (this->Line).Direction.field0_0x0._s_0.Z;
    unique0x00008e00 = local_94;
    gte::Vector<3,float>::Vector<3,float>
              ((Vector<3,float> *)&local_58,(initializer_list<float> *)local_88);
    local_a0 = (this->Line).Origin.field0_0x0._s_0.X;
    local_88._0_8_ = &local_a0;
    local_9c = (this->Line).Origin.field0_0x0._s_0.Y;
    local_98 = (this->Line).Origin.field0_0x0._s_0.Z;
    unique0x00008e00 = local_94;
    gte::Vector<3,float>::Vector<3,float>(&local_68,(initializer_list<float> *)local_88);
    fVar4 = (this->Circle).Frame.Rotation.field0_0x0._s_0.X;
    fVar1 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Y;
    fVar5 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Z;
    fVar5 = fVar5 + fVar5;
    fVar2 = (this->Circle).Frame.Rotation.field0_0x0._s_0.W;
    fVar3 = (this->Circle).Radius;
    local_b8._0_4_ = local_68.mTuple._Elems[0];
    local_b8._4_4_ = local_68.mTuple._Elems[1];
    local_b8._12_8_ = local_58;
    local_b8._8_4_ = local_68.mTuple._Elems[2];
    local_a4 = local_50;
    local_88._0_8_ = &local_a0;
    unique0x00008e00 = local_94;
    local_a0 = fVar2 * (fVar1 + fVar1) + fVar5 * fVar4;
    local_9c = fVar5 * fVar1 - fVar2 * (fVar4 + fVar4);
    local_98 = __real_3f800000 - ((fVar1 + fVar1) * fVar1 + (fVar4 + fVar4) * fVar4);
    gte::Vector<3,float>::Vector<3,float>(&local_68,(initializer_list<float> *)local_88);
    local_a0 = (this->Circle).Frame.Origin.field0_0x0._s_0.X;
    local_88._0_8_ = &local_a0;
    local_9c = (this->Circle).Frame.Origin.field0_0x0._s_0.Y;
    local_98 = (this->Circle).Frame.Origin.field0_0x0._s_0.Z;
    unique0x00008e00 = local_94;
    gte::Vector<3,float>::Vector<3,float>
              ((Vector<3,float> *)&local_58,(initializer_list<float> *)local_88);
    local_88._0_8_ = local_58;
    local_88._8_4_ = local_50;
    fStack_7c = local_68.mTuple._Elems[0];
    fStack_78 = local_68.mTuple._Elems[1];
    local_74 = local_68.mTuple._Elems[2];
    local_70 = fVar3;
    gte::DCPQuery<float,gte::Line<3,float>,gte::Circle3<float>_>::operator()
              (local_108,&local_f8,(Line<3,float> *)local_b8,(Circle3<float> *)local_88);
    this->DistanceSquared = local_f8.sqrDistance;
    this->NumClosestPairs = local_f8.numClosestPairs;
    this->LineClosest[0].field0_0x0._s_0.X = local_f8.lineClosest[0].mTuple._Elems[0];
    this->LineClosest[0].field0_0x0._s_0.Y = local_f8.lineClosest[0].mTuple._Elems[1];
    this->LineClosest[0].field0_0x0._s_0.Z = local_f8.lineClosest[0].mTuple._Elems[2];
    this->LineClosest[1].field0_0x0._s_0.X = local_f8.lineClosest[1].mTuple._Elems[0];
    this->LineClosest[1].field0_0x0._s_0.Y = local_f8.lineClosest[1].mTuple._Elems[1];
    this->LineClosest[1].field0_0x0._s_0.Z = local_f8.lineClosest[1].mTuple._Elems[2];
    this->CircleClosest[0].field0_0x0._s_0.X = local_f8.circleClosest[0].mTuple._Elems[0];
    this->CircleClosest[0].field0_0x0._s_0.Y = local_f8.circleClosest[0].mTuple._Elems[1];
    this->CircleClosest[0].field0_0x0._s_0.Z = local_f8.circleClosest[0].mTuple._Elems[2];
    this->CircleClosest[1].field0_0x0._s_0.X = local_f8.circleClosest[1].mTuple._Elems[0];
    this->CircleClosest[1].field0_0x0._s_0.Y = local_f8.circleClosest[1].mTuple._Elems[1];
    this->CircleClosest[1].field0_0x0._s_0.Z = local_f8.circleClosest[1].mTuple._Elems[2];
    fVar4 = this->DistanceSquared;
    this->bIsEquiDistant = local_f8.equidistant;
  }
  return fVar4;
}

// ComputeResult @ 14950ff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::Geometry::TDistLine3Circle3<double>::ComputeResult(TDistLine3Circle3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_168 [32];
  DCPQuery<double,gte::Line<3,double>,gte::Circle3<double>_> local_148 [16];
  Result local_138;
  Line<3,double> local_b8;
  undefined1 local_70 [40];
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  dVar1 = this->DistanceSquared;
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 < 0.0) {
    dVar1 = (this->Circle).Frame.Rotation.field0_0x0._s_0.X;
    local_b8.origin.mTuple._Elems[2] = (this->Line).Origin.field0_0x0._s_0.Z;
    local_b8.direction.mTuple._Elems[2] = (this->Line).Direction.field0_0x0._s_0.Z;
    local_b8.origin.mTuple._Elems[0] = (this->Line).Origin.field0_0x0._s_0.X;
    local_b8.origin.mTuple._Elems[1] = (this->Line).Origin.field0_0x0._s_0.Y;
    local_b8.direction.mTuple._Elems[0] = (this->Line).Direction.field0_0x0._s_0.X;
    local_b8.direction.mTuple._Elems[1] = (this->Line).Direction.field0_0x0._s_0.Y;
    dVar2 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Z;
    dVar3 = (this->Circle).Frame.Rotation.field0_0x0._s_0.W;
    dVar2 = dVar2 + dVar2;
    dVar4 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Y;
    dVar5 = dVar2 * dVar4 - dVar3 * (dVar1 + dVar1);
    local_70._0_8_ = (this->Circle).Frame.Origin.field0_0x0._s_0.X;
    local_70._8_8_ = (this->Circle).Frame.Origin.field0_0x0._s_0.Y;
    local_70._16_8_ = (this->Circle).Frame.Origin.field0_0x0._s_0.Z;
    local_40 = (this->Circle).Radius;
    local_70._32_4_ = SUB84(dVar5,0);
    local_70._24_8_ = dVar3 * (dVar4 + dVar4) + dVar2 * dVar1;
    local_70._36_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_48 = __real_3ff0000000000000 - ((dVar4 + dVar4) * dVar4 + (dVar1 + dVar1) * dVar1);
    gte::DCPQuery<double,gte::Line<3,double>,gte::Circle3<double>_>::operator()
              (local_148,&local_138,&local_b8,(Circle3<double> *)local_70);
    this->DistanceSquared = local_138.sqrDistance;
    this->NumClosestPairs = local_138.numClosestPairs;
    this->LineClosest[0].field0_0x0._s_0.X = local_138.lineClosest[0].mTuple._Elems[0];
    this->LineClosest[0].field0_0x0._s_0.Y = local_138.lineClosest[0].mTuple._Elems[1];
    this->LineClosest[0].field0_0x0._s_0.Z = local_138.lineClosest[0].mTuple._Elems[2];
    this->LineClosest[1].field0_0x0._s_0.X = local_138.lineClosest[1].mTuple._Elems[0];
    this->LineClosest[1].field0_0x0._s_0.Y = local_138.lineClosest[1].mTuple._Elems[1];
    this->LineClosest[1].field0_0x0._s_0.Z = local_138.lineClosest[1].mTuple._Elems[2];
    this->CircleClosest[0].field0_0x0._s_0.X = local_138.circleClosest[0].mTuple._Elems[0];
    this->CircleClosest[0].field0_0x0._s_0.Y = local_138.circleClosest[0].mTuple._Elems[1];
    this->CircleClosest[0].field0_0x0._s_0.Z = local_138.circleClosest[0].mTuple._Elems[2];
    this->CircleClosest[1].field0_0x0._s_0.X = local_138.circleClosest[1].mTuple._Elems[0];
    this->CircleClosest[1].field0_0x0._s_0.Y = local_138.circleClosest[1].mTuple._Elems[1];
    this->CircleClosest[1].field0_0x0._s_0.Z = local_138.circleClosest[1].mTuple._Elems[2];
    uVar6 = SUB84(this->DistanceSquared,0);
    uVar7 = (undefined4)((ulonglong)this->DistanceSquared >> 0x20);
    this->bIsEquiDistant = local_138.equidistant;
  }
  return (double)CONCAT44(uVar7,uVar6);
}

// Get @ 149519c60

float __thiscall UE::Geometry::TDistLine3Circle3<float>::Get(TDistLine3Circle3<float> *this)

{
  float fVar1;
  
  fVar1 = ComputeResult(this);
  return SQRT(fVar1);
}

// Get @ 149519c80

double __thiscall UE::Geometry::TDistLine3Circle3<double>::Get(TDistLine3Circle3<double> *this)

{
  double dVar1;
  
  dVar1 = ComputeResult(this);
  return SQRT(dVar1);
}

// GetSquared @ 14951ada0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall UE::Geometry::TDistLine3Circle3<float>::GetSquared(TDistLine3Circle3<float> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  DCPQuery<float,gte::Line<3,float>,gte::Circle3<float>_> aDStack_108 [16];
  Result RStack_f8;
  undefined1 auStack_b8 [20];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float afStack_94 [3];
  undefined1 auStack_88 [12];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  Vector<3,float> VStack_68;
  float *pfStack_58;
  float fStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  fVar4 = this->DistanceSquared;
  if (fVar4 < 0.0) {
    fStack_a0 = (this->Line).Direction.field0_0x0._s_0.X;
    auStack_88._0_8_ = &fStack_a0;
    fStack_9c = (this->Line).Direction.field0_0x0._s_0.Y;
    fStack_98 = (this->Line).Direction.field0_0x0._s_0.Z;
    unique0x00008e00 = afStack_94;
    gte::Vector<3,float>::Vector<3,float>
              ((Vector<3,float> *)&pfStack_58,(initializer_list<float> *)auStack_88);
    fStack_a0 = (this->Line).Origin.field0_0x0._s_0.X;
    auStack_88._0_8_ = &fStack_a0;
    fStack_9c = (this->Line).Origin.field0_0x0._s_0.Y;
    fStack_98 = (this->Line).Origin.field0_0x0._s_0.Z;
    unique0x00008e00 = afStack_94;
    gte::Vector<3,float>::Vector<3,float>(&VStack_68,(initializer_list<float> *)auStack_88);
    fVar4 = (this->Circle).Frame.Rotation.field0_0x0._s_0.X;
    fVar1 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Y;
    fVar5 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Z;
    fVar5 = fVar5 + fVar5;
    fVar2 = (this->Circle).Frame.Rotation.field0_0x0._s_0.W;
    fVar3 = (this->Circle).Radius;
    auStack_b8._0_4_ = VStack_68.mTuple._Elems[0];
    auStack_b8._4_4_ = VStack_68.mTuple._Elems[1];
    auStack_b8._12_8_ = pfStack_58;
    auStack_b8._8_4_ = VStack_68.mTuple._Elems[2];
    fStack_a4 = fStack_50;
    auStack_88._0_8_ = &fStack_a0;
    unique0x00008e00 = afStack_94;
    fStack_a0 = fVar2 * (fVar1 + fVar1) + fVar5 * fVar4;
    fStack_9c = fVar5 * fVar1 - fVar2 * (fVar4 + fVar4);
    fStack_98 = __real_3f800000 - ((fVar1 + fVar1) * fVar1 + (fVar4 + fVar4) * fVar4);
    gte::Vector<3,float>::Vector<3,float>(&VStack_68,(initializer_list<float> *)auStack_88);
    fStack_a0 = (this->Circle).Frame.Origin.field0_0x0._s_0.X;
    auStack_88._0_8_ = &fStack_a0;
    fStack_9c = (this->Circle).Frame.Origin.field0_0x0._s_0.Y;
    fStack_98 = (this->Circle).Frame.Origin.field0_0x0._s_0.Z;
    unique0x00008e00 = afStack_94;
    gte::Vector<3,float>::Vector<3,float>
              ((Vector<3,float> *)&pfStack_58,(initializer_list<float> *)auStack_88);
    auStack_88._0_8_ = pfStack_58;
    auStack_88._8_4_ = fStack_50;
    fStack_7c = VStack_68.mTuple._Elems[0];
    fStack_78 = VStack_68.mTuple._Elems[1];
    fStack_74 = VStack_68.mTuple._Elems[2];
    fStack_70 = fVar3;
    gte::DCPQuery<float,gte::Line<3,float>,gte::Circle3<float>_>::operator()
              (aDStack_108,&RStack_f8,(Line<3,float> *)auStack_b8,(Circle3<float> *)auStack_88);
    this->DistanceSquared = RStack_f8.sqrDistance;
    this->NumClosestPairs = RStack_f8.numClosestPairs;
    this->LineClosest[0].field0_0x0._s_0.X = RStack_f8.lineClosest[0].mTuple._Elems[0];
    this->LineClosest[0].field0_0x0._s_0.Y = RStack_f8.lineClosest[0].mTuple._Elems[1];
    this->LineClosest[0].field0_0x0._s_0.Z = RStack_f8.lineClosest[0].mTuple._Elems[2];
    this->LineClosest[1].field0_0x0._s_0.X = RStack_f8.lineClosest[1].mTuple._Elems[0];
    this->LineClosest[1].field0_0x0._s_0.Y = RStack_f8.lineClosest[1].mTuple._Elems[1];
    this->LineClosest[1].field0_0x0._s_0.Z = RStack_f8.lineClosest[1].mTuple._Elems[2];
    this->CircleClosest[0].field0_0x0._s_0.X = RStack_f8.circleClosest[0].mTuple._Elems[0];
    this->CircleClosest[0].field0_0x0._s_0.Y = RStack_f8.circleClosest[0].mTuple._Elems[1];
    this->CircleClosest[0].field0_0x0._s_0.Z = RStack_f8.circleClosest[0].mTuple._Elems[2];
    this->CircleClosest[1].field0_0x0._s_0.X = RStack_f8.circleClosest[1].mTuple._Elems[0];
    this->CircleClosest[1].field0_0x0._s_0.Y = RStack_f8.circleClosest[1].mTuple._Elems[1];
    this->CircleClosest[1].field0_0x0._s_0.Z = RStack_f8.circleClosest[1].mTuple._Elems[2];
    fVar4 = this->DistanceSquared;
    this->bIsEquiDistant = RStack_f8.equidistant;
  }
  return fVar4;
}

// GetSquared @ 14951adb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::Geometry::TDistLine3Circle3<double>::GetSquared(TDistLine3Circle3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_168 [32];
  DCPQuery<double,gte::Line<3,double>,gte::Circle3<double>_> aDStack_148 [16];
  Result RStack_138;
  Line<3,double> LStack_b8;
  undefined1 auStack_70 [40];
  double dStack_48;
  double dStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  dVar1 = this->DistanceSquared;
  uVar6 = SUB84(dVar1,0);
  uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 < 0.0) {
    dVar1 = (this->Circle).Frame.Rotation.field0_0x0._s_0.X;
    LStack_b8.origin.mTuple._Elems[2] = (this->Line).Origin.field0_0x0._s_0.Z;
    LStack_b8.direction.mTuple._Elems[2] = (this->Line).Direction.field0_0x0._s_0.Z;
    LStack_b8.origin.mTuple._Elems[0] = (this->Line).Origin.field0_0x0._s_0.X;
    LStack_b8.origin.mTuple._Elems[1] = (this->Line).Origin.field0_0x0._s_0.Y;
    LStack_b8.direction.mTuple._Elems[0] = (this->Line).Direction.field0_0x0._s_0.X;
    LStack_b8.direction.mTuple._Elems[1] = (this->Line).Direction.field0_0x0._s_0.Y;
    dVar2 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Z;
    dVar3 = (this->Circle).Frame.Rotation.field0_0x0._s_0.W;
    dVar2 = dVar2 + dVar2;
    dVar4 = (this->Circle).Frame.Rotation.field0_0x0._s_0.Y;
    dVar5 = dVar2 * dVar4 - dVar3 * (dVar1 + dVar1);
    auStack_70._0_8_ = (this->Circle).Frame.Origin.field0_0x0._s_0.X;
    auStack_70._8_8_ = (this->Circle).Frame.Origin.field0_0x0._s_0.Y;
    auStack_70._16_8_ = (this->Circle).Frame.Origin.field0_0x0._s_0.Z;
    dStack_40 = (this->Circle).Radius;
    auStack_70._32_4_ = SUB84(dVar5,0);
    auStack_70._24_8_ = dVar3 * (dVar4 + dVar4) + dVar2 * dVar1;
    auStack_70._36_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dStack_48 = __real_3ff0000000000000 - ((dVar4 + dVar4) * dVar4 + (dVar1 + dVar1) * dVar1);
    gte::DCPQuery<double,gte::Line<3,double>,gte::Circle3<double>_>::operator()
              (aDStack_148,&RStack_138,&LStack_b8,(Circle3<double> *)auStack_70);
    this->DistanceSquared = RStack_138.sqrDistance;
    this->NumClosestPairs = RStack_138.numClosestPairs;
    this->LineClosest[0].field0_0x0._s_0.X = RStack_138.lineClosest[0].mTuple._Elems[0];
    this->LineClosest[0].field0_0x0._s_0.Y = RStack_138.lineClosest[0].mTuple._Elems[1];
    this->LineClosest[0].field0_0x0._s_0.Z = RStack_138.lineClosest[0].mTuple._Elems[2];
    this->LineClosest[1].field0_0x0._s_0.X = RStack_138.lineClosest[1].mTuple._Elems[0];
    this->LineClosest[1].field0_0x0._s_0.Y = RStack_138.lineClosest[1].mTuple._Elems[1];
    this->LineClosest[1].field0_0x0._s_0.Z = RStack_138.lineClosest[1].mTuple._Elems[2];
    this->CircleClosest[0].field0_0x0._s_0.X = RStack_138.circleClosest[0].mTuple._Elems[0];
    this->CircleClosest[0].field0_0x0._s_0.Y = RStack_138.circleClosest[0].mTuple._Elems[1];
    this->CircleClosest[0].field0_0x0._s_0.Z = RStack_138.circleClosest[0].mTuple._Elems[2];
    this->CircleClosest[1].field0_0x0._s_0.X = RStack_138.circleClosest[1].mTuple._Elems[0];
    this->CircleClosest[1].field0_0x0._s_0.Y = RStack_138.circleClosest[1].mTuple._Elems[1];
    this->CircleClosest[1].field0_0x0._s_0.Z = RStack_138.circleClosest[1].mTuple._Elems[2];
    uVar6 = SUB84(this->DistanceSquared,0);
    uVar7 = (undefined4)((ulonglong)this->DistanceSquared >> 0x20);
    this->bIsEquiDistant = RStack_138.equidistant;
  }
  return (double)CONCAT44(uVar7,uVar6);
}

