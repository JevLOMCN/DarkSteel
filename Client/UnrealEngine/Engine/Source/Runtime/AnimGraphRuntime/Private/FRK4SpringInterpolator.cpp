// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// IsPositionEqualTo @ 14645af40

bool __thiscall
FRK4SpringInterpolator<UE::Math::TVector<double>_>::IsPositionEqualTo
          (FRK4SpringInterpolator<UE::Math::TVector<double>_> *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (this->State).Position.field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f50624de0000000) &&
      (dVar1 = (this->State).Position.field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y,
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f50624de0000000)) &&
     (dVar1 = (this->State).Position.field0_0x0._s_0.Z - (param_1->field0_0x0)._s_0.Z,
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f50624de0000000)) {
    return true;
  }
  return false;
}

// Update @ 146470ec0

TVector<double> * __thiscall
FRK4SpringInterpolator<UE::Math::TVector<double>_>::Update
          (FRK4SpringInterpolator<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,float *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  FRK4SpringConstants *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float local_res8 [2];
  
  if (0.0 < *param_2) {
    bVar3 = this->bIsInMotion;
    dVar7 = (this->State).Position.field0_0x0._s_0.Y;
    dVar9 = (this->State).Position.field0_0x0._s_0.Z;
    (this->LastPosition).field0_0x0._s_0.X = (this->State).Position.field0_0x0._s_0.X;
    (this->LastPosition).field0_0x0._s_0.Y = dVar7;
    (this->LastPosition).field0_0x0._s_0.Z = dVar9;
    if ((bVar3 == false) && (bVar3 = IsPositionEqualTo(this,param_1), bVar3)) {
      this->bIsInMotion = false;
    }
    else {
      pFVar4 = &this->SpringConstants;
      this->bIsInMotion = true;
      if (this->bIsInitialized == false) {
        fVar12 = this->DampeningRatio;
        this->bIsInitialized = true;
        pFVar4->SpringStiffness = this->StiffnessConstant;
        (this->SpringConstants).DampingConstant = SQRT(this->StiffnessConstant) * (fVar12 + fVar12);
      }
      fVar12 = __real_3f800000;
      fVar10 = *param_2 + this->TimeRemaining;
      if (__real_3dcccccd <= fVar10) {
        fVar10 = __real_3dcccccd;
      }
      this->TimeRemaining = fVar10;
      fVar8 = RK4_SPRING_INTERPOLATOR_UPDATE_RATE;
      if (RK4_SPRING_INTERPOLATOR_UPDATE_RATE <= fVar12) {
        fVar8 = fVar12;
      }
      fVar12 = fVar12 / fVar8;
      uVar5 = RK4_SPRING_INTERPOLATOR_MAX_ITER;
      if ((int)(fVar8 * fVar10) < RK4_SPRING_INTERPOLATOR_MAX_ITER) {
        uVar5 = (int)(fVar8 * fVar10);
      }
      uVar6 = (ulonglong)uVar5;
      this->TimeRemaining = fVar10 - (float)(int)uVar5 * fVar12;
      local_res8[0] = fVar12;
      while (0 < (int)uVar5) {
        uVar6 = (ulonglong)((int)uVar6 - 1);
        RK4Integrator::Integrate<UE::Math::TVector<double>_>(&this->State,param_1,pFVar4,local_res8)
        ;
        uVar5 = (uint)uVar6;
      }
      if ((0.0 < this->TimeRemaining) && (this->TimeRemaining < fVar12)) {
        RK4Integrator::Integrate<UE::Math::TVector<double>_>
                  (&this->State,param_1,pFVar4,&this->TimeRemaining);
        this->TimeRemaining = 0.0;
      }
      bVar3 = IsPositionEqualTo(this,param_1);
      uVar1 = *(undefined8 *)((longlong)&(this->State).Velocity.field0_0x0 + 0x10);
      if (((__real_3f847ae140000000 <
            (double)CONCAT44(*(uint *)((longlong)&(this->State).Velocity.field0_0x0 + 4) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             *(uint *)&(this->State).Velocity.field0_0x0 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (__real_3f847ae140000000 <
           (double)CONCAT44(*(uint *)((longlong)&(this->State).Velocity.field0_0x0 + 0xc) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)((longlong)&(this->State).Velocity.field0_0x0 + 8) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
         (__real_3f847ae140000000 <
          (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar3) || (!bVar2)) {
        uVar1 = *(undefined8 *)((longlong)&(this->State).Velocity.field0_0x0 + 0x10);
        dVar9 = (double)CONCAT44(*(uint *)((longlong)&(this->State).Velocity.field0_0x0 + 4) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 *(uint *)&(this->State).Velocity.field0_0x0 &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        dVar7 = (double)CONCAT44(*(uint *)((longlong)&(this->State).Velocity.field0_0x0 + 0xc) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 *(uint *)((longlong)&(this->State).Velocity.field0_0x0 + 8) &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        dVar11 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        if (dVar9 <= dVar7) {
          dVar9 = dVar7;
        }
        if (dVar9 <= dVar11) {
          dVar9 = dVar11;
        }
        if (dVar9 < __real_4341c37940000000) {
          uVar1 = *(undefined8 *)((longlong)&(this->State).Position.field0_0x0 + 0x10);
          dVar11 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dVar9 = (double)CONCAT44(*(uint *)((longlong)&(this->State).Position.field0_0x0 + 4) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   *(uint *)&(this->State).Position.field0_0x0 &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dVar7 = (double)CONCAT44(*(uint *)((longlong)&(this->State).Position.field0_0x0 + 0xc) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   *(uint *)((longlong)&(this->State).Position.field0_0x0 + 8) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          if (dVar9 <= dVar7) {
            dVar9 = dVar7;
          }
          if (dVar9 <= dVar11) {
            dVar9 = dVar11;
          }
          if (dVar9 < __real_4341c37940000000) goto LAB_146471105;
        }
      }
      dVar9 = (param_1->field0_0x0)._s_0.Y;
      (this->State).Position.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
      (this->State).Position.field0_0x0._s_0.Y = dVar9;
      (this->State).Position.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      (this->State).Velocity.field0_0x0._s_0.X = 0.0;
      (this->State).Velocity.field0_0x0._s_0.Y = 0.0;
      (this->State).Velocity.field0_0x0._s_0.Z = 0.0;
      this->bIsInMotion = false;
      this->TimeRemaining = 0.0;
    }
  }
LAB_146471105:
  dVar7 = (this->State).Position.field0_0x0._s_0.Y;
  dVar9 = (this->State).Position.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->State).Position.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
  return __return_storage_ptr__;
}

