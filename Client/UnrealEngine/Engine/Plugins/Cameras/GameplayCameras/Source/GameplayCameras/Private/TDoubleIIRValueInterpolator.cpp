// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 14

// TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> @ 14d654d80

TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> * __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>::
TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>
          (TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *this,
          UDoubleIIRValueInterpolator *param_1)

{
  float fVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TDoubleIIRValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  bVar2 = param_1->bUseFixedStep;
  fVar1 = param_1->IntermediateSpeed;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator).bUseFixedStep = bVar2;
  (this->IntermediateInterpolator).Speed = fVar1;
  *(undefined1 *)&(this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ =
       (longlong)&___7__TIIRValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  (this->IntermediateInterpolator).LastUpdateLeftoverTime = 0.0;
  (this->IntermediateInterpolator).bDoLeftoverRewind = true;
  bVar2 = param_1->bUseFixedStep;
  fVar1 = param_1->PrimarySpeed;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator).bUseFixedStep = bVar2;
  (this->PrimaryInterpolator).Speed = fVar1;
  *(undefined1 *)&(this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ =
       (longlong)&___7__TIIRValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  (this->PrimaryInterpolator).LastUpdateLeftoverTime = 0.0;
  (this->PrimaryInterpolator).bDoLeftoverRewind = true;
  this->bUseFixedStep = param_1->bUseFixedStep;
  return this;
}

// TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> @ 14d654e40

TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> * __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>::
TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>
          (TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *this,
          UDoubleIIRValueInterpolator *param_1)

{
  float fVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__TDoubleIIRValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
  bVar2 = param_1->bUseFixedStep;
  fVar1 = param_1->IntermediateSpeed;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator).bUseFixedStep = bVar2;
  (this->IntermediateInterpolator).Speed = fVar1;
  *(undefined1 *)&(this->IntermediateInterpolator)._padding_ = 0;
  (this->IntermediateInterpolator)._padding_ =
       (longlong)&___7__TIIRValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
  (this->IntermediateInterpolator).LastUpdateLeftoverTime = 0.0;
  (this->IntermediateInterpolator).bDoLeftoverRewind = true;
  bVar2 = param_1->bUseFixedStep;
  fVar1 = param_1->PrimarySpeed;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator).bUseFixedStep = bVar2;
  (this->PrimaryInterpolator).Speed = fVar1;
  *(undefined1 *)&(this->PrimaryInterpolator)._padding_ = 0;
  (this->PrimaryInterpolator)._padding_ =
       (longlong)&___7__TIIRValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
  (this->PrimaryInterpolator).LastUpdateLeftoverTime = 0.0;
  (this->PrimaryInterpolator).bDoLeftoverRewind = true;
  this->bUseFixedStep = param_1->bUseFixedStep;
  return this;
}

// OnReset @ 14d668f40

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<double>::OnReset
          (TDoubleIIRValueInterpolator<double> *this,double param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (this->IntermediateInterpolator)._padding_;
  lVar2 = (this->IntermediateInterpolator)._padding_;
  lVar3 = this->_padding_;
  (this->IntermediateInterpolator)._padding_ = this->_padding_;
  (this->IntermediateInterpolator)._padding_ = lVar3;
  (**(code **)((this->IntermediateInterpolator)._padding_ + 8))
            (&this->IntermediateInterpolator,lVar1,lVar2);
  lVar1 = this->_padding_;
  lVar2 = (this->PrimaryInterpolator)._padding_;
  lVar3 = (this->PrimaryInterpolator)._padding_;
  (this->PrimaryInterpolator)._padding_ = this->_padding_;
  (this->PrimaryInterpolator)._padding_ = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00014d668f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->PrimaryInterpolator)._padding_ + 8))(&this->PrimaryInterpolator,lVar2,lVar3);
  return;
}

// OnReset @ 14d668fb0

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>::OnReset
          (TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1,
          TVector2<double> *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_18 = (this->IntermediateInterpolator)._padding_;
  lStack_10 = (this->IntermediateInterpolator)._padding_;
  lVar1 = (this->IntermediateInterpolator)._padding_;
  local_28 = (this->IntermediateInterpolator)._padding_;
  lStack_20 = (this->IntermediateInterpolator)._padding_;
  lVar4 = this->_padding_;
  (this->IntermediateInterpolator)._padding_ = this->_padding_;
  (this->IntermediateInterpolator)._padding_ = lVar4;
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar4 = this->_padding_;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar2;
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar3;
  (**(code **)(lVar1 + 8))(&this->IntermediateInterpolator,&local_18,&local_28);
  local_28 = (this->PrimaryInterpolator)._padding_;
  lStack_20 = (this->PrimaryInterpolator)._padding_;
  lVar1 = (this->PrimaryInterpolator)._padding_;
  local_18 = (this->PrimaryInterpolator)._padding_;
  lStack_10 = (this->PrimaryInterpolator)._padding_;
  lVar4 = this->_padding_;
  (this->PrimaryInterpolator)._padding_ = this->_padding_;
  (this->PrimaryInterpolator)._padding_ = lVar4;
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar4 = this->_padding_;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar2;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar3;
  (**(code **)(lVar1 + 8))(&this->PrimaryInterpolator,&local_28,&local_18);
  return;
}

// OnReset @ 14d669040

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>::OnReset
          (TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong local_20;
  longlong lStack_18;
  longlong local_10;
  
  local_20 = (this->IntermediateInterpolator)._padding_;
  lStack_18 = (this->IntermediateInterpolator)._padding_;
  lVar1 = (this->IntermediateInterpolator)._padding_;
  local_10 = (this->IntermediateInterpolator)._padding_;
  local_38 = (this->IntermediateInterpolator)._padding_;
  lStack_30 = (this->IntermediateInterpolator)._padding_;
  local_28 = (this->IntermediateInterpolator)._padding_;
  lVar4 = this->_padding_;
  (this->IntermediateInterpolator)._padding_ = this->_padding_;
  (this->IntermediateInterpolator)._padding_ = lVar4;
  (this->IntermediateInterpolator)._padding_ = this->_padding_;
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar4 = this->_padding_;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar2;
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar3;
  (this->IntermediateInterpolator)._padding_ = this->_padding_;
  (**(code **)(lVar1 + 8))(&this->IntermediateInterpolator,&local_20,&local_38);
  local_38 = (this->PrimaryInterpolator)._padding_;
  lStack_30 = (this->PrimaryInterpolator)._padding_;
  lVar1 = (this->PrimaryInterpolator)._padding_;
  local_28 = (this->PrimaryInterpolator)._padding_;
  local_20 = (this->PrimaryInterpolator)._padding_;
  lStack_18 = (this->PrimaryInterpolator)._padding_;
  local_10 = (this->PrimaryInterpolator)._padding_;
  lVar4 = this->_padding_;
  (this->PrimaryInterpolator)._padding_ = this->_padding_;
  (this->PrimaryInterpolator)._padding_ = lVar4;
  (this->PrimaryInterpolator)._padding_ = this->_padding_;
  uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar4 = this->_padding_;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar2;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar3;
  (this->PrimaryInterpolator)._padding_ = this->_padding_;
  (**(code **)(lVar1 + 8))(&this->PrimaryInterpolator,&local_38,&local_20);
  return;
}

// OnRun @ 14d669c60

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<double>::OnRun
          (TDoubleIIRValueInterpolator<double> *this,FCameraValueInterpolationParams *param_1,
          FCameraValueInterpolationResult *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float local_res8;
  undefined1 local_resc;
  
  fVar5 = __real_3c088889;
  fVar4 = __real_38d1b717;
  fVar8 = param_1->DeltaTime;
  if (this->bUseFixedStep == false) {
    dVar7 = RunSubstep(this,(double)this->_padding_,fVar8,param_2);
    this->_padding_ = (longlong)dVar7;
  }
  else {
    fVar6 = __real_3f800000 / fVar8;
    dVar7 = this->LastTargetValue;
    dVar3 = (double)this->_padding_ - dVar7;
    while (fVar4 < fVar8) {
      lVar1 = (this->IntermediateInterpolator)._padding_;
      local_res8 = fVar8;
      if (fVar5 <= fVar8) {
        local_res8 = fVar5;
      }
      local_resc = 0;
      fVar8 = fVar8 - local_res8;
      lVar2 = (this->IntermediateInterpolator)._padding_;
      (this->IntermediateInterpolator)._padding_ = lVar2;
      dVar7 = dVar7 + (double)local_res8 * dVar3 * (double)fVar6;
      (this->IntermediateInterpolator)._padding_ = (longlong)dVar7;
      (**(code **)((this->IntermediateInterpolator)._padding_ + 8))
                (&this->IntermediateInterpolator,lVar2,lVar1);
      if (local_res8 != 0.0) {
        (**(code **)((this->IntermediateInterpolator)._padding_ + 0x10))
                  (&this->IntermediateInterpolator,&local_res8,param_2);
      }
      lVar1 = (this->PrimaryInterpolator)._padding_;
      lVar2 = (this->PrimaryInterpolator)._padding_;
      (this->PrimaryInterpolator)._padding_ = lVar1;
      (this->PrimaryInterpolator)._padding_ = (this->IntermediateInterpolator)._padding_;
      (**(code **)((this->PrimaryInterpolator)._padding_ + 8))
                (&this->PrimaryInterpolator,lVar1,lVar2);
      if (local_res8 != 0.0) {
        (**(code **)((this->PrimaryInterpolator)._padding_ + 0x10))
                  (&this->PrimaryInterpolator,&local_res8,param_2);
      }
    }
    lVar1 = (this->PrimaryInterpolator)._padding_;
    this->LastTargetValue = (double)this->_padding_;
    this->_padding_ = lVar1;
  }
  return;
}

// OnRun @ 14d669e40

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>::OnRun
          (TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  longlong *plVar1;
  TIIRValueInterpolator<UE::Math::TVector2<double>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  TVector2<double> *pTVar20;
  float fVar21;
  float fVar22;
  float local_res8;
  undefined1 local_resc;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8 [9];
  
  fVar19 = __real_3c088889;
  fVar18 = __real_38d1b717;
  if (this->bUseFixedStep == false) {
    local_a8[0]._0_8_ = this->_padding_;
    local_a8[0]._8_8_ = this->_padding_;
    pTVar20 = RunSubstep(this,(TVector2<double> *)&local_b8._s_0,
                         (TVector2<double> *)&local_a8[0]._s_0,param_1->DeltaTime,param_2);
    dVar3 = (pTVar20->field0_0x0)._s_0.Y;
    this->_padding_ = (longlong)(pTVar20->field0_0x0)._s_0.X;
    this->_padding_ = (longlong)dVar3;
    return;
  }
  fVar22 = param_1->DeltaTime;
  fVar21 = __real_3f800000 / fVar22;
  dVar3 = (double)this->_padding_;
  dVar4 = (this->LastTargetValue).field0_0x0._s_0.X;
  dVar5 = (double)this->_padding_;
  dVar6 = (this->LastTargetValue).field0_0x0._s_0.Y;
  dVar9 = (this->LastTargetValue).field0_0x0._s_0.X;
  dVar8 = (this->LastTargetValue).field0_0x0._s_0.Y;
  if (__real_38d1b717 < fVar22) {
    pTVar2 = &this->PrimaryInterpolator;
    do {
      local_resc = 0;
      local_res8 = fVar22;
      if (fVar19 <= fVar22) {
        local_res8 = fVar19;
      }
      fVar22 = fVar22 - local_res8;
      plVar1 = &(this->IntermediateInterpolator)._padding_;
      uVar10 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      local_a8[0]._0_8_ = *plVar1;
      plVar11 = &(this->IntermediateInterpolator)._padding_;
      lVar7 = *plVar11;
      uVar12 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      local_a8[0]._8_8_ = *plVar11;
      dVar8 = dVar8 + (double)local_res8 * (dVar5 - dVar6) * (double)fVar21;
      local_b8._s_0.X = (double)(this->IntermediateInterpolator)._padding_;
      local_b8._s_0.Y = (double)(this->IntermediateInterpolator)._padding_;
      dVar9 = dVar9 + (double)local_res8 * (dVar3 - dVar4) * (double)fVar21;
      *(int *)&(this->IntermediateInterpolator)._padding_ = (int)*plVar1;
      *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar10;
      *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar7;
      *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar12;
      (this->IntermediateInterpolator)._padding_ = (longlong)dVar9;
      (this->IntermediateInterpolator)._padding_ = (longlong)dVar8;
      (**(code **)((this->IntermediateInterpolator)._padding_ + 8))
                (&this->IntermediateInterpolator,local_a8,&local_b8);
      if (local_res8 != 0.0) {
        (**(code **)((this->IntermediateInterpolator)._padding_ + 0x10))
                  (&this->IntermediateInterpolator,&local_res8,param_2);
      }
      local_b8._s_0.X = (double)(this->PrimaryInterpolator)._padding_;
      local_b8._s_0.Y = (double)(this->PrimaryInterpolator)._padding_;
      lVar7 = pTVar2->_padding_;
      lVar15 = (this->IntermediateInterpolator)._padding_;
      uVar10 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      lVar16 = (this->IntermediateInterpolator)._padding_;
      uVar12 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      local_a8[0]._0_8_ = (this->PrimaryInterpolator)._padding_;
      local_a8[0]._8_8_ = (this->PrimaryInterpolator)._padding_;
      uVar13 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
      lVar17 = (this->PrimaryInterpolator)._padding_;
      uVar14 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)(this->PrimaryInterpolator)._padding_;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar13;
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar17;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar14;
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar15;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar10;
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar16;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar12;
      (**(code **)(lVar7 + 8))(pTVar2,&local_b8,local_a8);
      if (local_res8 != 0.0) {
        (**(code **)(pTVar2->_padding_ + 0x10))(pTVar2,&local_res8,param_2);
      }
    } while (fVar18 < fVar22);
  }
  lVar7 = (this->PrimaryInterpolator)._padding_;
  this->_padding_ = (this->PrimaryInterpolator)._padding_;
  this->_padding_ = lVar7;
  dVar3 = (double)this->_padding_;
  (this->LastTargetValue).field0_0x0._s_0.X = (double)this->_padding_;
  (this->LastTargetValue).field0_0x0._s_0.Y = dVar3;
  return;
}

// OnRun @ 14d66a0c0

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>::OnRun
          (TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  longlong *plVar1;
  TIIRValueInterpolator<UE::Math::TVector<double>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  TVector<double> *pTVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float local_res8;
  undefined1 local_resc;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8 [8];
  
  fVar23 = __real_3c088889;
  fVar22 = __real_38d1b717;
  if (this->bUseFixedStep == false) {
    local_d8[0]._0_8_ = this->_padding_;
    local_d8[0]._8_8_ = this->_padding_;
    local_d8[0]._16_8_ = this->_padding_;
    pTVar24 = RunSubstep(this,(TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_d8[0]._s_0
                         ,param_1->DeltaTime,param_2);
    dVar3 = (pTVar24->field0_0x0)._s_0.Y;
    this->_padding_ = (longlong)(pTVar24->field0_0x0)._s_0.X;
    this->_padding_ = (longlong)dVar3;
    this->_padding_ = (longlong)(pTVar24->field0_0x0)._s_0.Z;
    return;
  }
  fVar27 = param_1->DeltaTime;
  dVar3 = (double)this->_padding_;
  dVar4 = (this->LastTargetValue).field0_0x0._s_0.X;
  dVar5 = (double)this->_padding_;
  dVar6 = (this->LastTargetValue).field0_0x0._s_0.Y;
  dVar7 = (double)this->_padding_;
  dVar8 = (this->LastTargetValue).field0_0x0._s_0.Z;
  dVar25 = (double)(__real_3f800000 / fVar27);
  dVar14 = (this->LastTargetValue).field0_0x0._s_0.X;
  dVar13 = (this->LastTargetValue).field0_0x0._s_0.Y;
  dVar9 = (this->LastTargetValue).field0_0x0._s_0.Z;
  if (__real_38d1b717 < fVar27) {
    pTVar2 = &this->PrimaryInterpolator;
    do {
      local_resc = 0;
      local_res8 = fVar27;
      if (fVar23 <= fVar27) {
        local_res8 = fVar23;
      }
      dVar26 = (double)local_res8;
      fVar27 = fVar27 - local_res8;
      plVar1 = &(this->IntermediateInterpolator)._padding_;
      uVar15 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      local_d8[0]._0_8_ = *plVar1;
      plVar16 = &(this->IntermediateInterpolator)._padding_;
      lVar10 = *plVar16;
      uVar17 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      local_d8[0]._8_8_ = *plVar16;
      dVar14 = dVar14 + dVar26 * (dVar3 - dVar4) * dVar25;
      dVar13 = dVar13 + dVar26 * (dVar5 - dVar6) * dVar25;
      local_f8._s_0.X = (double)(this->IntermediateInterpolator)._padding_;
      local_f8._s_0.Y = (double)(this->IntermediateInterpolator)._padding_;
      dVar9 = dVar9 + dVar26 * (dVar7 - dVar8) * dVar25;
      local_d8[0]._16_8_ = (this->IntermediateInterpolator)._padding_;
      *(int *)&(this->IntermediateInterpolator)._padding_ = (int)*plVar1;
      *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar15;
      *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar10;
      *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar17;
      (this->IntermediateInterpolator)._padding_ = local_d8[0]._16_8_;
      local_f8._s_0.Z = (double)(this->IntermediateInterpolator)._padding_;
      (this->IntermediateInterpolator)._padding_ = (longlong)dVar14;
      (this->IntermediateInterpolator)._padding_ = (longlong)dVar13;
      (this->IntermediateInterpolator)._padding_ = (longlong)dVar9;
      (**(code **)((this->IntermediateInterpolator)._padding_ + 8))
                (&this->IntermediateInterpolator,local_d8,&local_f8);
      if (local_res8 != 0.0) {
        (**(code **)((this->IntermediateInterpolator)._padding_ + 0x10))
                  (&this->IntermediateInterpolator,&local_res8,param_2);
      }
      local_f8._s_0.X = (double)(this->PrimaryInterpolator)._padding_;
      local_f8._s_0.Y = (double)(this->PrimaryInterpolator)._padding_;
      lVar12 = pTVar2->_padding_;
      local_f8._s_0.Z = (double)(this->PrimaryInterpolator)._padding_;
      lVar20 = (this->IntermediateInterpolator)._padding_;
      uVar15 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      lVar21 = (this->IntermediateInterpolator)._padding_;
      uVar17 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
      lVar10 = (this->IntermediateInterpolator)._padding_;
      local_d8[0]._0_8_ = (this->PrimaryInterpolator)._padding_;
      local_d8[0]._8_8_ = (this->PrimaryInterpolator)._padding_;
      local_d8[0]._16_8_ = (this->PrimaryInterpolator)._padding_;
      uVar18 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
      lVar11 = (this->PrimaryInterpolator)._padding_;
      uVar19 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)(this->PrimaryInterpolator)._padding_;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar18;
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar11;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar19;
      lVar11 = (this->PrimaryInterpolator)._padding_;
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar20;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar15;
      *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar21;
      *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar17;
      (this->PrimaryInterpolator)._padding_ = lVar11;
      (this->PrimaryInterpolator)._padding_ = lVar10;
      (**(code **)(lVar12 + 8))(pTVar2,&local_f8,local_d8);
      if (local_res8 != 0.0) {
        (**(code **)(pTVar2->_padding_ + 0x10))(pTVar2,&local_res8,param_2);
      }
    } while (fVar22 < fVar27);
  }
  lVar10 = (this->PrimaryInterpolator)._padding_;
  this->_padding_ = (this->PrimaryInterpolator)._padding_;
  this->_padding_ = lVar10;
  dVar4 = (double)this->_padding_;
  this->_padding_ = (this->PrimaryInterpolator)._padding_;
  dVar3 = (double)this->_padding_;
  (this->LastTargetValue).field0_0x0._s_0.X = (double)this->_padding_;
  (this->LastTargetValue).field0_0x0._s_0.Y = dVar4;
  (this->LastTargetValue).field0_0x0._s_0.Z = dVar3;
  return;
}

// OnSerialize @ 14d66de50

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<double>::OnSerialize
          (TDoubleIIRValueInterpolator<double> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  double *pdVar1;
  
  TCameraValueInterpolator<double>::Serialize
            ((TCameraValueInterpolator<double> *)&this->IntermediateInterpolator,param_1,param_2);
  TCameraValueInterpolator<double>::Serialize
            ((TCameraValueInterpolator<double> *)&this->PrimaryInterpolator,param_1,param_2);
  pdVar1 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->LastTargetValue,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)&this->LastTargetValue);
    }
  }
  else {
    this->LastTargetValue = *pdVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  ::operator<<(param_2,&this->bUseFixedStep);
  return;
}

// OnSerialize @ 14d66def0

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>::OnSerialize
          (TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  UE::Math::operator<<(param_2,(TVector2<double> *)&(this->IntermediateInterpolator)._padding_);
  UE::Math::operator<<(param_2,(TVector2<double> *)&(this->IntermediateInterpolator)._padding_);
  ::operator<<(param_2,(bool *)&(this->IntermediateInterpolator)._padding_);
  (**(code **)((this->IntermediateInterpolator)._padding_ + 0x18))
            (&this->IntermediateInterpolator,param_1,param_2);
  UE::Math::operator<<(param_2,(TVector2<double> *)&(this->PrimaryInterpolator)._padding_);
  UE::Math::operator<<(param_2,(TVector2<double> *)&(this->PrimaryInterpolator)._padding_);
  ::operator<<(param_2,(bool *)&(this->PrimaryInterpolator)._padding_);
  (**(code **)((this->PrimaryInterpolator)._padding_ + 0x18))
            (&this->PrimaryInterpolator,param_1,param_2);
  UE::Math::operator<<(param_2,&this->LastTargetValue);
  ::operator<<(param_2,&this->bUseFixedStep);
  return;
}

// OnSerialize @ 14d66dfc0

void __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>::OnSerialize
          (TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  UE::Math::operator<<(param_2,(TVector<double> *)&(this->IntermediateInterpolator)._padding_);
  UE::Math::operator<<(param_2,(TVector<double> *)&(this->IntermediateInterpolator)._padding_);
  ::operator<<(param_2,(bool *)&(this->IntermediateInterpolator)._padding_);
  (**(code **)((this->IntermediateInterpolator)._padding_ + 0x18))
            (&this->IntermediateInterpolator,param_1,param_2);
  UE::Math::operator<<(param_2,(TVector<double> *)&(this->PrimaryInterpolator)._padding_);
  UE::Math::operator<<(param_2,(TVector<double> *)&(this->PrimaryInterpolator)._padding_);
  ::operator<<(param_2,(bool *)&(this->PrimaryInterpolator)._padding_);
  (**(code **)((this->PrimaryInterpolator)._padding_ + 0x18))
            (&this->PrimaryInterpolator,param_1,param_2);
  UE::Math::operator<<(param_2,&this->LastTargetValue);
  ::operator<<(param_2,&this->bUseFixedStep);
  return;
}

// RunSubstep @ 14d6713f0

double __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<double>::RunSubstep
          (TDoubleIIRValueInterpolator<double> *this,double param_1,float param_2,
          FCameraValueInterpolationResult *param_3)

{
  longlong lVar1;
  longlong lVar2;
  float local_res8;
  undefined1 local_resc;
  
  lVar1 = (this->IntermediateInterpolator)._padding_;
  lVar2 = (this->IntermediateInterpolator)._padding_;
  (this->IntermediateInterpolator)._padding_ = lVar1;
  (this->IntermediateInterpolator)._padding_ = (longlong)param_1;
  local_resc = 0;
  local_res8 = param_2;
  (**(code **)((this->IntermediateInterpolator)._padding_ + 8))
            (&this->IntermediateInterpolator,lVar1,lVar2);
  if (local_res8 != 0.0) {
    (**(code **)((this->IntermediateInterpolator)._padding_ + 0x10))
              (&this->IntermediateInterpolator,&local_res8,param_3);
  }
  lVar1 = (this->PrimaryInterpolator)._padding_;
  lVar2 = (this->PrimaryInterpolator)._padding_;
  (this->PrimaryInterpolator)._padding_ = lVar1;
  (this->PrimaryInterpolator)._padding_ = (this->IntermediateInterpolator)._padding_;
  (**(code **)((this->PrimaryInterpolator)._padding_ + 8))(&this->PrimaryInterpolator,lVar1,lVar2);
  if (local_res8 != 0.0) {
    (**(code **)((this->PrimaryInterpolator)._padding_ + 0x10))
              (&this->PrimaryInterpolator,&local_res8,param_3);
  }
  return (double)(this->PrimaryInterpolator)._padding_;
}

// RunSubstep @ 14d6714d0

TVector2<double> * __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>::RunSubstep
          (TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *this,
          TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,float param_2,
          FCameraValueInterpolationResult *param_3)

{
  longlong *plVar1;
  TIIRValueInterpolator<UE::Math::TVector2<double>_> *pTVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float local_res8;
  undefined1 local_resc;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  local_38 = (this->IntermediateInterpolator)._padding_;
  lStack_30 = (this->IntermediateInterpolator)._padding_;
  local_resc = 0;
  plVar1 = &(this->IntermediateInterpolator)._padding_;
  lVar10 = *plVar1;
  uVar4 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  local_28 = *plVar1;
  plVar1 = &(this->IntermediateInterpolator)._padding_;
  lVar11 = *plVar1;
  uVar5 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  lStack_20 = *plVar1;
  uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  lVar3 = (this->IntermediateInterpolator)._padding_;
  *(undefined4 *)&(this->IntermediateInterpolator)._padding_ = *(undefined4 *)&param_1->field0_0x0;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar6;
  *(undefined4 *)&(this->IntermediateInterpolator)._padding_ = uVar7;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar8;
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar10;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar4;
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar11;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar5;
  local_res8 = param_2;
  (**(code **)(lVar3 + 8))(&this->IntermediateInterpolator,&local_28,&local_38);
  if (local_res8 != 0.0) {
    (**(code **)((this->IntermediateInterpolator)._padding_ + 0x10))
              (&this->IntermediateInterpolator,&local_res8,param_3);
  }
  uVar4 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  lVar10 = (this->IntermediateInterpolator)._padding_;
  uVar5 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  pTVar2 = &this->PrimaryInterpolator;
  local_38 = (this->PrimaryInterpolator)._padding_;
  lStack_30 = (this->PrimaryInterpolator)._padding_;
  lVar3 = pTVar2->_padding_;
  local_28 = (this->PrimaryInterpolator)._padding_;
  lStack_20 = (this->PrimaryInterpolator)._padding_;
  lVar11 = (this->PrimaryInterpolator)._padding_;
  uVar6 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
  lVar12 = (this->PrimaryInterpolator)._padding_;
  uVar7 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)(this->IntermediateInterpolator)._padding_;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar4;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar10;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar5;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar11;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar6;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar12;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar7;
  (**(code **)(lVar3 + 8))(pTVar2,&local_38,&local_28);
  if (local_res8 != 0.0) {
    (**(code **)(pTVar2->_padding_ + 0x10))(pTVar2,&local_res8,param_3);
  }
  dVar9 = (double)(this->PrimaryInterpolator)._padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->PrimaryInterpolator)._padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
  return __return_storage_ptr__;
}

// RunSubstep @ 14d6715d0

TVector<double> * __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>::RunSubstep
          (TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,float param_2,
          FCameraValueInterpolationResult *param_3)

{
  longlong *plVar1;
  TIIRValueInterpolator<UE::Math::TVector<double>_> *pTVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  float local_res8;
  undefined1 local_resc;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  
  local_20 = (this->IntermediateInterpolator)._padding_;
  local_48 = (this->IntermediateInterpolator)._padding_;
  lStack_40 = (this->IntermediateInterpolator)._padding_;
  local_resc = 0;
  plVar1 = &(this->IntermediateInterpolator)._padding_;
  lVar4 = *plVar1;
  uVar7 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  local_30 = *plVar1;
  plVar1 = &(this->IntermediateInterpolator)._padding_;
  lVar5 = *plVar1;
  uVar8 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  lStack_28 = *plVar1;
  local_38 = (this->IntermediateInterpolator)._padding_;
  uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar11 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  *(undefined4 *)&(this->IntermediateInterpolator)._padding_ = *(undefined4 *)&param_1->field0_0x0;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar9;
  *(undefined4 *)&(this->IntermediateInterpolator)._padding_ = uVar10;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar11;
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar7;
  *(int *)&(this->IntermediateInterpolator)._padding_ = (int)lVar5;
  *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4) = uVar8;
  (this->IntermediateInterpolator)._padding_ = (longlong)dVar3;
  (this->IntermediateInterpolator)._padding_ = local_20;
  local_res8 = param_2;
  (**(code **)((this->IntermediateInterpolator)._padding_ + 8))
            (&this->IntermediateInterpolator,&local_30,&local_48);
  if (local_res8 != 0.0) {
    (**(code **)((this->IntermediateInterpolator)._padding_ + 0x10))
              (&this->IntermediateInterpolator,&local_res8,param_3);
  }
  lVar13 = (this->IntermediateInterpolator)._padding_;
  uVar7 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  lVar14 = (this->IntermediateInterpolator)._padding_;
  uVar8 = *(undefined4 *)((longlong)&(this->IntermediateInterpolator)._padding_ + 4);
  pTVar2 = &this->PrimaryInterpolator;
  lVar4 = (this->IntermediateInterpolator)._padding_;
  local_48 = (this->PrimaryInterpolator)._padding_;
  lStack_40 = (this->PrimaryInterpolator)._padding_;
  lVar6 = pTVar2->_padding_;
  local_38 = (this->PrimaryInterpolator)._padding_;
  local_30 = (this->PrimaryInterpolator)._padding_;
  lStack_28 = (this->PrimaryInterpolator)._padding_;
  local_20 = (this->PrimaryInterpolator)._padding_;
  uVar9 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
  lVar5 = (this->PrimaryInterpolator)._padding_;
  uVar10 = *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4);
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)(this->PrimaryInterpolator)._padding_;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar9;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar5;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar10;
  lVar5 = (this->PrimaryInterpolator)._padding_;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar13;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar7;
  *(int *)&(this->PrimaryInterpolator)._padding_ = (int)lVar14;
  *(undefined4 *)((longlong)&(this->PrimaryInterpolator)._padding_ + 4) = uVar8;
  (this->PrimaryInterpolator)._padding_ = lVar5;
  (this->PrimaryInterpolator)._padding_ = lVar4;
  (**(code **)(lVar6 + 8))(pTVar2,&local_48,&local_30);
  if (local_res8 != 0.0) {
    (**(code **)(pTVar2->_padding_ + 0x10))(pTVar2,&local_res8,param_3);
  }
  dVar12 = (double)(this->PrimaryInterpolator)._padding_;
  dVar3 = (double)(this->PrimaryInterpolator)._padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->PrimaryInterpolator)._padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  return __return_storage_ptr__;
}

