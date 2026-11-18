// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// IsEqualPositionsAndVelocities @ 146380050

bool __thiscall
FGeometryCollectionRepDynamicData::FClusterData::IsEqualPositionsAndVelocities
          (FClusterData *this,FClusterData *param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&this->Position - *(double *)&param_1->Position;
  if ((((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000) &&
        (dVar1 = *(double *)&(this->Position).field_0x8 - *(double *)&(param_1->Position).field_0x8,
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       (dVar1 = *(double *)&(this->Position).field_0x10 - *(double *)&(param_1->Position).field_0x10
       , (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) &&
      ((((dVar1 = *(double *)&this->EulerRotation - *(double *)&param_1->EulerRotation,
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000 &&
         (dVar1 = *(double *)&(this->EulerRotation).field_0x8 -
                  *(double *)&(param_1->EulerRotation).field_0x8,
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) &&
        ((dVar1 = *(double *)&(this->EulerRotation).field_0x10 -
                  *(double *)&(param_1->EulerRotation).field_0x10,
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000 &&
         ((dVar1 = *(double *)&this->LinearVelocity - *(double *)&param_1->LinearVelocity,
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000 &&
          (dVar1 = *(double *)&(this->LinearVelocity).field_0x8 -
                   *(double *)&(param_1->LinearVelocity).field_0x8,
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)))))) &&
       (dVar1 = *(double *)&(this->LinearVelocity).field_0x10 -
                *(double *)&(param_1->LinearVelocity).field_0x10,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)))) &&
     (((dVar1 = *(double *)&this->AngularVelocityInDegreesPerSecond -
                *(double *)&param_1->AngularVelocityInDegreesPerSecond,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000 &&
       (dVar1 = *(double *)&(this->AngularVelocityInDegreesPerSecond).field_0x8 -
                *(double *)&(param_1->AngularVelocityInDegreesPerSecond).field_0x8,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) &&
      (dVar1 = *(double *)&(this->AngularVelocityInDegreesPerSecond).field_0x10 -
               *(double *)&(param_1->AngularVelocityInDegreesPerSecond).field_0x10,
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)))) {
    return true;
  }
  return false;
}

