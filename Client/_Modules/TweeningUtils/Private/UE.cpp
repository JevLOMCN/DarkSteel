// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TweeningUtils
// Functions: 7

// Blend_ControlsToTween @ 14c6bc9d0

double __cdecl
UE::TweeningUtils::Blend_ControlsToTween
          (double param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  return ((param_3->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) *
         (param_1 + __real_3ff0000000000000) * __real_3fe0000000000000 +
         (param_2->field0_0x0)._s_0.Y;
}

// Blend_Ease @ 14c6bca00

double __cdecl
UE::TweeningUtils::Blend_Ease
          (double param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float _Y;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_4->field0_0x0)._s_0.X - dVar1;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (param_1 <= 0.0) {
      fVar6 = 0.0;
      dVar2 = dVar2 - (param_2->field0_0x0)._s_0.Y;
      uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      uVar7 = (undefined4)uVar3;
      uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      dVar2 = (param_4->field0_0x0)._s_0.Y - dVar2;
      fVar6 = __real_bf800000;
    }
    fVar9 = (float)(((param_3->field0_0x0)._s_0.X - dVar1) / dVar5);
    _Y = (float)((double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                __real_4014000000000000);
    fVar4 = fVar6 + __real_40000000;
    if ((fVar9 <= fVar6 + __real_40000000) && (fVar4 = fVar6, fVar6 <= fVar9)) {
      fVar4 = powf(fVar9 - fVar6,_Y);
      fVar9 = powf(__real_40000000 - (fVar9 - fVar6),_Y);
      fVar4 = (__real_40000000 / (fVar9 + fVar4)) * fVar4 + fVar6;
    }
    return (double)fVar4 * dVar2 + (double)CONCAT44(uVar8,uVar7);
  }
  return dVar2;
}

// Blend_Neighbor @ 14c6bcb70

double __cdecl
UE::TweeningUtils::Blend_Neighbor
          (double param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  double dVar1;
  
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  if (param_1 < 0.0) {
    return dVar1 - ((param_2->field0_0x0)._s_0.Y - dVar1) * param_1;
  }
  return ((param_4->field0_0x0)._s_0.Y - dVar1) * param_1 + dVar1;
}

// Blend_OffsetTime @ 14c6bcbb0

double __cdecl
UE::TweeningUtils::Blend_OffsetTime
          (double param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,TVector2<double> *param_6,
          TFunctionRef<double___cdecl(double)> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_28 [5];
  
  if ((double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (param_2->field0_0x0)._s_0.Y;
  }
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_4->field0_0x0)._s_0.X;
  local_28[0] = (param_2->field0_0x0)._s_0.X - (dVar3 - dVar2) * param_1;
  if (local_28[0] < dVar3) {
    if (dVar2 < local_28[0]) {
      dVar2 = (double)(**(code **)param_7)(*(undefined8 *)&param_7->field_0x8,local_28);
      return dVar2;
    }
    dVar1 = (param_5->field0_0x0)._s_0.X - dVar2;
    dVar3 = __real_3ff0000000000000;
    if ((__real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (dVar3 = (local_28[0] - dVar2) / dVar1, __real_3ff0000000000000 <= dVar3)) {
      dVar3 = __real_3ff0000000000000;
    }
    return ((param_5->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) * dVar3 +
           (param_3->field0_0x0)._s_0.Y;
  }
  dVar1 = (param_6->field0_0x0)._s_0.X - dVar3;
  dVar2 = __real_3ff0000000000000;
  if ((__real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (dVar2 = (local_28[0] - dVar3) / dVar1, __real_3ff0000000000000 <= dVar2)) {
    dVar2 = __real_3ff0000000000000;
  }
  return ((param_6->field0_0x0)._s_0.Y - (param_4->field0_0x0)._s_0.Y) * dVar2 +
         (param_4->field0_0x0)._s_0.Y;
}

// Blend_PushPull @ 14c6bcce0

double __cdecl
UE::TweeningUtils::Blend_PushPull
          (double param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_4->field0_0x0)._s_0.X - dVar3;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return (param_3->field0_0x0)._s_0.Y;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar3 = (((param_3->field0_0x0)._s_0.X - dVar3) / dVar2) *
          ((param_4->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) +
          (param_2->field0_0x0)._s_0.Y;
  if (param_1 < 0.0) {
    return dVar1 - (dVar3 - dVar1) * param_1;
  }
  return dVar1 + (((dVar1 - dVar3) + dVar1) - dVar1) * param_1;
}

// Blend_Relative @ 14c6bcd70

double __cdecl
UE::TweeningUtils::Blend_Relative
          (double param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,TVector2<double> *param_6)

{
  if (param_1 < 0.0) {
    return (param_4->field0_0x0)._s_0.Y -
           ((param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) * param_1;
  }
  return ((param_6->field0_0x0)._s_0.Y - (param_5->field0_0x0)._s_0.Y) * param_1 +
         (param_4->field0_0x0)._s_0.Y;
}

// Blend_SmoothRough @ 14c6bcdc0

double __cdecl
UE::TweeningUtils::Blend_SmoothRough
          (double param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = ((param_2->field0_0x0)._s_0.Y + (param_4->field0_0x0)._s_0.Y) * __real_3fd0000000000000 +
          dVar1 * __real_3fe0000000000000;
  if (param_1 < 0.0) {
    return dVar1 - (dVar2 - dVar1) * param_1;
  }
  return (dVar1 - dVar2) * param_1 + dVar1;
}

