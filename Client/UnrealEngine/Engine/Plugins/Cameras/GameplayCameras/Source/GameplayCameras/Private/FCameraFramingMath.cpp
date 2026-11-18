// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetBoundAngle @ 14d618f40

double __cdecl UE::Cameras::FCameraFramingMath::GetBoundAngle(float param_1,double param_2)

{
  double dVar1;
  
  dVar1 = atan((double)(float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * param_2);
  if (param_1 <= 0.0) {
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  return dVar1;
}

// GetFramingZoneAngles @ 14d61a610

FFramingZoneAngles * __cdecl
UE::Cameras::FCameraFramingMath::GetFramingZoneAngles
          (FFramingZoneAngles *__return_storage_ptr__,FFramingZone *param_1,
          FCameraFieldsOfView *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  dVar2 = tan(param_2->VerticalFieldOfView * __real_3f81df46a2529d39);
  dVar5 = ((param_1->TopBound - __real_3fe0000000000000) + param_1->TopBound) -
          __real_3fe0000000000000;
  dVar1 = ((param_1->RightBound - __real_3fe0000000000000) + param_1->RightBound) -
          __real_3fe0000000000000;
  dVar6 = ((param_1->BottomBound - __real_3fe0000000000000) + param_1->BottomBound) -
          __real_3fe0000000000000;
  fVar7 = (float)(((param_1->LeftBound - __real_3fe0000000000000) + param_1->LeftBound) -
                 __real_3fe0000000000000);
  dVar3 = tan(param_2->HorizontalFieldOfView * __real_3f81df46a2529d39);
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar4 = atan((double)(float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
               (double)(float)dVar3);
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar10 = SUB84(dVar4,0);
  uVar11 = (uint)((ulonglong)dVar4 >> 0x20);
  if (fVar7 <= 0.0) {
    uVar10 = uVar10 ^ uVar12;
    uVar11 = uVar11 ^ uVar13;
  }
  fVar7 = (float)dVar5;
  dVar5 = atan((double)(float)((uint)fVar7 & uVar8) * (double)(float)dVar2);
  uVar8 = SUB84(dVar5,0);
  uVar9 = (uint)((ulonglong)dVar5 >> 0x20);
  if (fVar7 <= 0.0) {
    uVar8 = uVar8 ^ uVar12;
    uVar9 = uVar9 ^ uVar13;
  }
  fVar7 = (float)dVar1;
  dVar5 = atan((double)(float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
               (double)(float)dVar3);
  if (fVar7 <= 0.0) {
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar13,SUB84(dVar5,0) ^ uVar12);
  }
  fVar7 = (float)dVar6;
  dVar6 = atan((double)(float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
               (double)(float)dVar2);
  dVar1 = __real_3f91df46a2529d39;
  if (fVar7 <= 0.0) {
    dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar13,SUB84(dVar6,0) ^ uVar12);
  }
  dVar2 = (double)CONCAT44(uVar9,uVar8) * __real_3f91df46a2529d39;
  dVar5 = dVar5 * __real_3f91df46a2529d39;
  __return_storage_ptr__->LeftHalfAngle = (double)CONCAT44(uVar11,uVar10) * __real_3f91df46a2529d39;
  __return_storage_ptr__->TopHalfAngle = dVar2;
  __return_storage_ptr__->RightHalfAngle = dVar5;
  __return_storage_ptr__->BottomHalfAngle = dVar6 * dVar1;
  return __return_storage_ptr__;
}

// GetTargetAngles @ 14d61e200

TVector2<double> * __cdecl
UE::Cameras::FCameraFramingMath::GetTargetAngles
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          FCameraFieldsOfView *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  
  dVar1 = tan(param_2->VerticalFieldOfView * __real_3f81df46a2529d39);
  dVar3 = (((param_1->field0_0x0)._s_0.Y - __real_3fe0000000000000) + (param_1->field0_0x0)._s_0.Y)
          - __real_3fe0000000000000;
  fVar4 = (float)((((param_1->field0_0x0)._s_0.X - __real_3fe0000000000000) +
                  (param_1->field0_0x0)._s_0.X) - __real_3fe0000000000000);
  dVar2 = tan(param_2->HorizontalFieldOfView * __real_3f81df46a2529d39);
  dVar2 = atan((double)(float)dVar2 *
               (double)(float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff));
  uVar5 = SUB84(dVar2,0);
  uVar6 = (uint)((ulonglong)dVar2 >> 0x20);
  if (fVar4 <= 0.0) {
    uVar5 = uVar5 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar6 = uVar6 ^ __xmm_80000000000000008000000000000000._4_4_;
  }
  fVar4 = (float)dVar3;
  dVar3 = atan((double)(float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
               (double)(float)dVar1);
  if (fVar4 <= 0.0) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar3 = dVar3 * __real_404ca5dc1a63c1f8;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(uVar6,uVar5) * __real_404ca5dc1a63c1f8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  return __return_storage_ptr__;
}

